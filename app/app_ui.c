/*
 * app_ui.c
 *
 *  Created on: Aug 8, 2022
 *      Author: Sai Kham Hein
 */
#include "cmsis_os2.h"
#include "stdlib.h"
#include "main.h"
#include "lvgl.h"
#include "st7789.h"
#include "tft.h"
#include "ui.h"
#include "app_ui.h"

void ui_chart_init(void);
void set_cpu_utli(uint16_t value);
void set_cpu_temp(uint16_t value);
void set_gpu_utli(uint16_t value);
void set_gpu_temp(uint16_t value);
void set_ram_utli(uint16_t value);


#define CHART_PCNT 20

lv_chart_series_t * cpuSer;
lv_chart_series_t * gpuSer;
uint16_t value;
uint16_t ticks;

struct HostData host_data;


void ui_task()
{
	lv_init();
	tft_init();
	ui_init();

	set_cpu_utli(0);
	set_cpu_temp(0);
	set_gpu_utli(0);
	set_gpu_temp(0);
	set_ram_utli(0);
	ui_chart_init();

	while(1)
	{

	    lv_timer_handler();
		osDelay(1);
		ticks++;
		if(ticks > 1000)
		{
			ticks = 0;
			set_cpu_temp(host_data.data[0]);
			set_gpu_temp(host_data.data[1]);
			set_cpu_utli(host_data.data[2]);
			set_gpu_utli(host_data.data[3]);
			set_ram_utli(host_data.data[4]);
			lv_chart_set_next_value(ui_Chart1, cpuSer, host_data.data[0]);
			lv_chart_set_next_value(ui_Chart1, gpuSer, host_data.data[1]);
		}
	}
}

void ui_chart_init()
{
    lv_chart_set_type(ui_Chart1, LV_CHART_TYPE_LINE);
    lv_chart_set_range(ui_Chart1, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_update_mode(ui_Chart1, LV_CHART_UPDATE_MODE_SHIFT);
    lv_chart_set_point_count(ui_Chart1, CHART_PCNT);
    lv_obj_set_style_size(ui_Chart1,0,0,LV_PART_INDICATOR);

    cpuSer = lv_chart_add_series(ui_Chart1, lv_palette_main(LV_PALETTE_RED), LV_CHART_AXIS_PRIMARY_Y);
    gpuSer = lv_chart_add_series(ui_Chart1, lv_palette_main(LV_PALETTE_GREEN), LV_CHART_AXIS_PRIMARY_Y);


    for (int x=0; x < CHART_PCNT; x++)
    {
    	lv_chart_set_next_value(ui_Chart1, cpuSer, 0);
    	lv_chart_set_next_value(ui_Chart1, gpuSer, 0);
    }
    lv_chart_refresh(ui_Chart1); /*Required after direct set*/
}
void set_cpu_utli(uint16_t value)
{
	static char buf[3];
	lv_arc_set_value(ui_cpuUtilArc, value);
	lv_label_set_text(ui_cpuUtilArcLabel, itoa(value, buf, 10));
}

void set_cpu_temp(uint16_t value)
{
	static char buf[5];
	lv_arc_set_value(ui_cpuTempArc, value);
	lv_label_set_text(ui_cpuTempArcLabel, itoa(value, buf, 10));
}

void set_gpu_utli(uint16_t value)
{
	static char buf[5];
	lv_arc_set_value(ui_gpuUtliArc, value);
	lv_label_set_text(ui_cpuUltiArcLabel, itoa(value, buf, 10));
}

void set_gpu_temp(uint16_t value)
{
	static char buf[5];
	lv_arc_set_value(ui_gpuTempArc, value);
	lv_label_set_text(ui_gpuTempArcLabel, itoa(value, buf, 10));
}

void set_ram_utli(uint16_t value)
{
	static char buf[5];
	lv_bar_set_value(ui_ramUtliBar, value, LV_ANIM_OFF);
	lv_label_set_text(ui_ramUtliLabel, itoa(value, buf, 10));
}
