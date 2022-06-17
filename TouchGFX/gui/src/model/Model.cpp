#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#define GUI_TEST

#ifndef GUI_TEST

#include "stm32f4xx_hal.h"

extern RTC_HandleTypeDef hrtc;
extern RTC_TimeTypeDef RTC_Time;
extern RTC_DateTypeDef RTC_Date;

#endif

// Record start time

Model::Model() : modelListener(0)
{

}

void Model::tick()
{


#ifndef GUI_TEST

	HAL_RTC_GetTime(&hrtc, &RTC_Time, FORMAT_BIN);
	HAL_RTC_GetDate(&hrtc, &RTC_Date, FORMAT_BIN);

	modelListener->updateTime(RTC_Time.Hours, RTC_Time.Minutes, RTC_Time.Seconds);
#endif

#ifdef SIMULATOR
	modelListener->updateTime(0x12, 0x12, 0x12);
#endif

//	auto end = std::chrono::high_resolution_clock::now();
//
//	if (std::chrono::duration_cast<std::chrono::seconds>(end - begin).count() > 1) {
//		count_tick++;
//		modelListener->updateTimerCounter(count_tick);
//		begin = std::chrono::high_resolution_clock::now();
//	}
//
}


