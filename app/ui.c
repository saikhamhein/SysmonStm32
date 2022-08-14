// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SystemMonitorUI_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Chart1;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Topbar;
lv_obj_t * ui_PCName;
lv_obj_t * ui_cpuInfo;
lv_obj_t * ui_cpuInfoLabel;
lv_obj_t * ui_cpuUtilArc;
lv_obj_t * ui_cpuUtilArcLabel;
lv_obj_t * ui_cpuUtilArcUnit;
lv_obj_t * ui_cpuTempArc;
lv_obj_t * ui_cpuTempArcLabel;
lv_obj_t * ui_unit1;
lv_obj_t * ui_gpuInfo;
lv_obj_t * ui_gpuInfoLabel;
lv_obj_t * ui_gpuUtliArc;
lv_obj_t * ui_cpuUltiArcLabel;
lv_obj_t * ui_gpuUtilArcUnit;
lv_obj_t * ui_gpuTempArc;
lv_obj_t * ui_gpuTempArcLabel;
lv_obj_t * ui_gouTempArcUnit;
lv_obj_t * ui_ramInfo;
lv_obj_t * ui_ramUsageLabel;
lv_obj_t * ui_ramUtliBar;
lv_obj_t * ui_ramUtliLabel;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{

    // ui_Screen1

    ui_Screen1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x0D1B2A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Chart1

    ui_Chart1 = lv_chart_create(ui_Screen1);

    lv_obj_set_height(ui_Chart1, 126);
    lv_obj_set_width(ui_Chart1, lv_pct(98));

    lv_obj_set_x(ui_Chart1, 0);
    lv_obj_set_y(ui_Chart1, 55);

    lv_obj_set_align(ui_Chart1, LV_ALIGN_CENTER);

    lv_obj_set_style_radius(ui_Chart1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Chart1, lv_color_hex(0x14213D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Chart1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Chart1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Chart1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Chart1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Chart1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label1

    ui_Label1 = lv_label_create(ui_Chart1);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 2);
    lv_obj_set_y(ui_Label1, 2);

    lv_label_set_text(ui_Label1, "100");

    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label2

    ui_Label2 = lv_label_create(ui_Chart1);

    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label2, -107);
    lv_obj_set_y(ui_Label2, -6);

    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label2, "50");

    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label3

    ui_Label3 = lv_label_create(ui_Chart1);

    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label3, 2);
    lv_obj_set_y(ui_Label3, -2);

    lv_obj_set_align(ui_Label3, LV_ALIGN_BOTTOM_LEFT);

    lv_label_set_text(ui_Label3, "0");

    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label4

    ui_Label4 = lv_label_create(ui_Chart1);

    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label4, -2);
    lv_obj_set_y(ui_Label4, 0);

    lv_obj_set_align(ui_Label4, LV_ALIGN_TOP_RIGHT);

    lv_label_set_text(ui_Label4, "CPU Temp");

    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label5

    ui_Label5 = lv_label_create(ui_Chart1);

    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label5, -2);
    lv_obj_set_y(ui_Label5, 11);

    lv_obj_set_align(ui_Label5, LV_ALIGN_TOP_RIGHT);

    lv_label_set_text(ui_Label5, "GPU Temp");

    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Topbar

    ui_Topbar = lv_obj_create(ui_Screen1);

    lv_obj_set_height(ui_Topbar, 20);
    lv_obj_set_width(ui_Topbar, lv_pct(100));

    lv_obj_set_x(ui_Topbar, 0);
    lv_obj_set_y(ui_Topbar, 0);

    lv_obj_set_align(ui_Topbar, LV_ALIGN_TOP_MID);

    lv_obj_add_flag(ui_Topbar, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Topbar, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                      LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM);

    lv_obj_set_style_radius(ui_Topbar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Topbar, lv_color_hex(0x14213D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Topbar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Topbar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_PCName

    ui_PCName = lv_label_create(ui_Topbar);

    lv_obj_set_width(ui_PCName, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_PCName, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_PCName, -10);
    lv_obj_set_y(ui_PCName, 0);

    lv_obj_set_align(ui_PCName, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_PCName, "System Monitor");

    lv_obj_set_style_text_color(ui_PCName, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PCName, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_cpuInfo

    ui_cpuInfo = lv_obj_create(ui_Screen1);

    lv_obj_set_height(ui_cpuInfo, 58);
    lv_obj_set_width(ui_cpuInfo, lv_pct(48));

    lv_obj_set_x(ui_cpuInfo, -60);
    lv_obj_set_y(ui_cpuInfo, -67);

    lv_obj_set_align(ui_cpuInfo, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_cpuInfo, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_cpuInfo, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cpuInfo, lv_color_hex(0x14213D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cpuInfo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_cpuInfoLabel

    ui_cpuInfoLabel = lv_label_create(ui_cpuInfo);

    lv_obj_set_width(ui_cpuInfoLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_cpuInfoLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_cpuInfoLabel, -38);
    lv_obj_set_y(ui_cpuInfoLabel, 25);

    lv_obj_set_align(ui_cpuInfoLabel, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_cpuInfoLabel, "CPU");

    lv_obj_set_style_text_color(ui_cpuInfoLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cpuInfoLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_cpuUtilArc

    ui_cpuUtilArc = lv_arc_create(ui_cpuInfo);

    lv_obj_set_width(ui_cpuUtilArc, 35);
    lv_obj_set_height(ui_cpuUtilArc, 35);

    lv_obj_set_x(ui_cpuUtilArc, -23);
    lv_obj_set_y(ui_cpuUtilArc, -7);

    lv_obj_set_align(ui_cpuUtilArc, LV_ALIGN_CENTER);

    lv_arc_set_range(ui_cpuUtilArc, 0, 100);
    lv_arc_set_value(ui_cpuUtilArc, 50);
    lv_arc_set_bg_angles(ui_cpuUtilArc, 120, 60);

    lv_obj_set_style_arc_color(ui_cpuUtilArc, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_cpuUtilArc, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_cpuUtilArc, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_cpuUtilArc, lv_color_hex(0xEF476F), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_cpuUtilArc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_cpuUtilArc, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_cpuUtilArc, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cpuUtilArc, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_cpuUtilArcLabel

    ui_cpuUtilArcLabel = lv_label_create(ui_cpuUtilArc);

    lv_obj_set_width(ui_cpuUtilArcLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_cpuUtilArcLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_cpuUtilArcLabel, 0);
    lv_obj_set_y(ui_cpuUtilArcLabel, 0);

    lv_obj_set_align(ui_cpuUtilArcLabel, LV_ALIGN_CENTER);

    lv_label_set_text(ui_cpuUtilArcLabel, "100");

    lv_obj_set_style_text_color(ui_cpuUtilArcLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cpuUtilArcLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_cpuUtilArcLabel, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_cpuUtilArcUnit

    ui_cpuUtilArcUnit = lv_label_create(ui_cpuUtilArc);

    lv_obj_set_width(ui_cpuUtilArcUnit, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_cpuUtilArcUnit, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_cpuUtilArcUnit, 0);
    lv_obj_set_y(ui_cpuUtilArcUnit, 12);

    lv_obj_set_align(ui_cpuUtilArcUnit, LV_ALIGN_CENTER);

    lv_label_set_text(ui_cpuUtilArcUnit, "%");

    lv_obj_set_style_text_color(ui_cpuUtilArcUnit, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cpuUtilArcUnit, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_cpuUtilArcUnit, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_cpuTempArc

    ui_cpuTempArc = lv_arc_create(ui_cpuInfo);

    lv_obj_set_width(ui_cpuTempArc, 35);
    lv_obj_set_height(ui_cpuTempArc, 35);

    lv_obj_set_x(ui_cpuTempArc, 25);
    lv_obj_set_y(ui_cpuTempArc, -7);

    lv_obj_set_align(ui_cpuTempArc, LV_ALIGN_CENTER);

    lv_arc_set_range(ui_cpuTempArc, 0, 100);
    lv_arc_set_value(ui_cpuTempArc, 50);
    lv_arc_set_bg_angles(ui_cpuTempArc, 120, 60);

    lv_obj_set_style_arc_color(ui_cpuTempArc, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_cpuTempArc, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_cpuTempArc, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_cpuTempArc, lv_color_hex(0xEF476F), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_cpuTempArc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_cpuTempArc, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_cpuTempArc, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cpuTempArc, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_cpuTempArcLabel

    ui_cpuTempArcLabel = lv_label_create(ui_cpuTempArc);

    lv_obj_set_width(ui_cpuTempArcLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_cpuTempArcLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_cpuTempArcLabel, 0);
    lv_obj_set_y(ui_cpuTempArcLabel, 0);

    lv_obj_set_align(ui_cpuTempArcLabel, LV_ALIGN_CENTER);

    lv_label_set_text(ui_cpuTempArcLabel, "100");

    lv_obj_set_style_text_color(ui_cpuTempArcLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cpuTempArcLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_cpuTempArcLabel, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_unit1

    ui_unit1 = lv_label_create(ui_cpuTempArc);

    lv_obj_set_width(ui_unit1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_unit1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_unit1, 0);
    lv_obj_set_y(ui_unit1, 12);

    lv_obj_set_align(ui_unit1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_unit1, "C");

    lv_obj_set_style_text_color(ui_unit1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_unit1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_unit1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_gpuInfo

    ui_gpuInfo = lv_obj_create(ui_Screen1);

    lv_obj_set_height(ui_gpuInfo, 58);
    lv_obj_set_width(ui_gpuInfo, lv_pct(48));

    lv_obj_set_x(ui_gpuInfo, 59);
    lv_obj_set_y(ui_gpuInfo, -67);

    lv_obj_set_align(ui_gpuInfo, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_gpuInfo, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_gpuInfo, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_gpuInfo, lv_color_hex(0x14213D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_gpuInfo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_gpuInfoLabel

    ui_gpuInfoLabel = lv_label_create(ui_gpuInfo);

    lv_obj_set_width(ui_gpuInfoLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_gpuInfoLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_gpuInfoLabel, -38);
    lv_obj_set_y(ui_gpuInfoLabel, 26);

    lv_obj_set_align(ui_gpuInfoLabel, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_gpuInfoLabel, "GPU");

    lv_obj_set_style_text_color(ui_gpuInfoLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_gpuInfoLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_gpuUtliArc

    ui_gpuUtliArc = lv_arc_create(ui_gpuInfo);

    lv_obj_set_width(ui_gpuUtliArc, 35);
    lv_obj_set_height(ui_gpuUtliArc, 35);

    lv_obj_set_x(ui_gpuUtliArc, -24);
    lv_obj_set_y(ui_gpuUtliArc, -7);

    lv_obj_set_align(ui_gpuUtliArc, LV_ALIGN_CENTER);

    lv_arc_set_range(ui_gpuUtliArc, 0, 100);
    lv_arc_set_value(ui_gpuUtliArc, 50);
    lv_arc_set_bg_angles(ui_gpuUtliArc, 120, 60);

    lv_obj_set_style_arc_color(ui_gpuUtliArc, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_gpuUtliArc, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_gpuUtliArc, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_gpuUtliArc, lv_color_hex(0xEF476F), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_gpuUtliArc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_gpuUtliArc, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_gpuUtliArc, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_gpuUtliArc, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_cpuUltiArcLabel

    ui_cpuUltiArcLabel = lv_label_create(ui_gpuUtliArc);

    lv_obj_set_width(ui_cpuUltiArcLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_cpuUltiArcLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_cpuUltiArcLabel, 0);
    lv_obj_set_y(ui_cpuUltiArcLabel, 0);

    lv_obj_set_align(ui_cpuUltiArcLabel, LV_ALIGN_CENTER);

    lv_label_set_text(ui_cpuUltiArcLabel, "100");

    lv_obj_set_style_text_color(ui_cpuUltiArcLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cpuUltiArcLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_cpuUltiArcLabel, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_gpuUtilArcUnit

    ui_gpuUtilArcUnit = lv_label_create(ui_gpuUtliArc);

    lv_obj_set_width(ui_gpuUtilArcUnit, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_gpuUtilArcUnit, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_gpuUtilArcUnit, 0);
    lv_obj_set_y(ui_gpuUtilArcUnit, 12);

    lv_obj_set_align(ui_gpuUtilArcUnit, LV_ALIGN_CENTER);

    lv_label_set_text(ui_gpuUtilArcUnit, "%");

    lv_obj_set_style_text_color(ui_gpuUtilArcUnit, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_gpuUtilArcUnit, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_gpuUtilArcUnit, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_gpuTempArc

    ui_gpuTempArc = lv_arc_create(ui_gpuInfo);

    lv_obj_set_width(ui_gpuTempArc, 35);
    lv_obj_set_height(ui_gpuTempArc, 35);

    lv_obj_set_x(ui_gpuTempArc, 26);
    lv_obj_set_y(ui_gpuTempArc, -7);

    lv_obj_set_align(ui_gpuTempArc, LV_ALIGN_CENTER);

    lv_arc_set_range(ui_gpuTempArc, 0, 100);
    lv_arc_set_value(ui_gpuTempArc, 50);
    lv_arc_set_bg_angles(ui_gpuTempArc, 120, 60);

    lv_obj_set_style_arc_color(ui_gpuTempArc, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_gpuTempArc, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_gpuTempArc, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_gpuTempArc, lv_color_hex(0xEF476F), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_gpuTempArc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_gpuTempArc, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_gpuTempArc, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_gpuTempArc, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_gpuTempArcLabel

    ui_gpuTempArcLabel = lv_label_create(ui_gpuTempArc);

    lv_obj_set_width(ui_gpuTempArcLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_gpuTempArcLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_gpuTempArcLabel, 0);
    lv_obj_set_y(ui_gpuTempArcLabel, 0);

    lv_obj_set_align(ui_gpuTempArcLabel, LV_ALIGN_CENTER);

    lv_label_set_text(ui_gpuTempArcLabel, "100");

    lv_obj_set_style_text_color(ui_gpuTempArcLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_gpuTempArcLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_gpuTempArcLabel, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_gouTempArcUnit

    ui_gouTempArcUnit = lv_label_create(ui_gpuTempArc);

    lv_obj_set_width(ui_gouTempArcUnit, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_gouTempArcUnit, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_gouTempArcUnit, 0);
    lv_obj_set_y(ui_gouTempArcUnit, 12);

    lv_obj_set_align(ui_gouTempArcUnit, LV_ALIGN_CENTER);

    lv_label_set_text(ui_gouTempArcUnit, "C");

    lv_obj_set_style_text_color(ui_gouTempArcUnit, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_gouTempArcUnit, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_gouTempArcUnit, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_ramInfo

    ui_ramInfo = lv_obj_create(ui_Screen1);

    lv_obj_set_height(ui_ramInfo, 24);
    lv_obj_set_width(ui_ramInfo, lv_pct(98));

    lv_obj_set_x(ui_ramInfo, 0);
    lv_obj_set_y(ui_ramInfo, -23);

    lv_obj_set_align(ui_ramInfo, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_ramInfo, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_ramInfo, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ramInfo, lv_color_hex(0x14213D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ramInfo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_ramUsageLabel

    ui_ramUsageLabel = lv_label_create(ui_ramInfo);

    lv_obj_set_width(ui_ramUsageLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_ramUsageLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_ramUsageLabel, -11);
    lv_obj_set_y(ui_ramUsageLabel, 0);

    lv_obj_set_align(ui_ramUsageLabel, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_ramUsageLabel, "RAM Usage");

    lv_obj_set_style_text_color(ui_ramUsageLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ramUsageLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_ramUtliBar

    ui_ramUtliBar = lv_bar_create(ui_ramInfo);
    lv_bar_set_range(ui_ramUtliBar, 0, 100);
    lv_bar_set_value(ui_ramUtliBar, 100, LV_ANIM_OFF);

    lv_obj_set_width(ui_ramUtliBar, 134);
    lv_obj_set_height(ui_ramUtliBar, 10);

    lv_obj_set_x(ui_ramUtliBar, 42);
    lv_obj_set_y(ui_ramUtliBar, 0);

    lv_obj_set_align(ui_ramUtliBar, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_ramUtliBar, lv_color_hex(0x00FF00), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ramUtliBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_ramUtliBar, lv_color_hex(0xFF0000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_ramUtliBar, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_ramUtliBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_ramUtliBar, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_ramUtliLabel

    ui_ramUtliLabel = lv_label_create(ui_ramUtliBar);

    lv_obj_set_width(ui_ramUtliLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_ramUtliLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_ramUtliLabel, 0);
    lv_obj_set_y(ui_ramUtliLabel, 0);

    lv_obj_set_align(ui_ramUtliLabel, LV_ALIGN_CENTER);

    lv_label_set_text(ui_ramUtliLabel, "0%");

    lv_obj_set_style_text_color(ui_ramUtliLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ramUtliLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}

