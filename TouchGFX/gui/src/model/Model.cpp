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
    HAL_RTC_GetDate(&hrtc, &RTC_Date);

    modelListener->updateTime(RTC_Time.Hours, RTC_Time.Minutes, RTC_Time.Seconds);
    
#endif

#ifdef SIMULATOR

    tickCounter++;

    if (tickCounter % 60 == 0)
    {
        if (++digitalSeconds >= 60)
        {
            digitalSeconds = 0;
            if (++digitalMinutes >= 60)
            {
                digitalMinutes = 0;
                if (++digitalHours >= 24)
                {
                    digitalHours = 0;
                }
            }
        }
		// Update the clock
		modelListener->updateTime(digitalHours, digitalMinutes, digitalSeconds);
	}
#endif

}



