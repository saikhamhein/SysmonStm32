/*
 * app_ui.h
 *
 *  Created on: Aug 8, 2022
 *      Author: Sai Kham Hein
 */

#ifndef APP_UI_H_
#define APP_UI_H_


struct HostData{
	uint8_t is_new;
	uint8_t data[10];
};

extern struct HostData host_data;

extern void ui_task(void);

#endif /* APP_UI_H_ */
