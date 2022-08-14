/*
 * tft.c
 *
 *  Created on: Aug 7, 2022
 *      Author: Sai Kham Hein
 */

#include "tft.h"

static lv_disp_drv_t disp_drv;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf1[DISP_HOR_RES * DISP_VER_RES / 10]; /*Declare a buffer for 1/10 screen size*/
static lv_color_t buf2[DISP_HOR_RES * DISP_VER_RES / 10]; /*Declare a buffer for 1/10 screen size*/

static void tft_flush(lv_disp_drv_t * drv, const lv_area_t * area, lv_color_t * color_p);
void lvgl_log_cb(const char * buf);

void tft_init()
{
	ST7789_Init();

	lv_disp_draw_buf_init(&draw_buf, buf1, buf2, DISP_HOR_RES * DISP_VER_RES / 10);  /*Initialize the display buffer.*/
	lv_disp_drv_init(&disp_drv);

	disp_drv.draw_buf = &draw_buf;
	disp_drv.color_format = LV_COLOR_FORMAT_NATIVE_REVERSE;
	disp_drv.flush_cb = tft_flush;
	disp_drv.hor_res = DISP_HOR_RES;
	disp_drv.ver_res = DISP_VER_RES;
	lv_disp_drv_register(&disp_drv);

#if LV_USE_LOG
	lv_log_register_print_cb(lvgl_log_cb);
#endif
}

static void tft_flush(lv_disp_drv_t * drv, const lv_area_t * area, lv_color_t * color_p)
{
	uint16_t x,y,w,h;
	/*Return if the area is out the screen*/
	if(area->x2 < 0) return;
	if(area->y2 < 0) return;
	if(area->x1 > DISP_HOR_RES - 1) return;
	if(area->y1 > DISP_VER_RES - 1) return;

	x = area->x1;
	y = area->y1;
	w = area->x2 - area->x1;
	h = area->y2 - area->y1;

	ST7789_DrawImage(x, y, w, h, (uint16_t *) color_p);
}

void HAL_SPI_TxCpltCallback(SPI_HandleTypeDef *hspi)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hspi);

  /* IMPORTANT!!!
   * Inform the graphics library that you are ready with the flushing*/
  lv_disp_flush_ready(&disp_drv);
}

void lvgl_log_cb(const char * buf)
{
	for ( int i = 0; i <= strlen(buf); i++)
	{
		ITM_SendChar(buf[i]);
	}
}


