#include <gui/main_screen/MainView.hpp>

MainView::MainView()
{

}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();


/*    Unicode::snprintf(numberMinutesBuffer, NUMBERMINUTES_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_8QUJ).getText());
    numberMinutes.setWildcard(numberMinutesBuffer);*/
}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}

/*
void MainView::handleTickEvent()
 {
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
        digitalClock.setTime24Hour(digitalHours, digitalMinutes, digitalSeconds);
    }
    
 }*/

void MainView::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	digitalClock.setTime24Hour(hour, minute, second);
	digitalClock.invalidate();
}


void MainView::minuteScrollListUpdateItem(MinutesContainer& item, int16_t itemIndex)
{
    // Override and implement this function in Main
    item.setNumber(itemIndex);
    if(itemIndex == 25){
        
    }
}


void MainView::secondScrollListUpdateItem(SecondContainer& item, int16_t itemIndex)
{
    // Override and implement this function in Main
    item.setNumber(itemIndex);
}


void MainView::shortBreakUpButtonClicked()
{
    // Override and implement this function in Main

	shortBreakMinute++;

	if (shortBreakMinute >=15) {
		shortBreakMinute = 0;
	}

    Unicode::snprintf(shortBreakTextBuffer, SHORTBREAKTEXT_SIZE, "%02u", shortBreakMinute);
    shortBreakText.invalidate();

}

void MainView::shortBreakDownButtonClicked()
{
    // Override and implement this function in Main
	if (shortBreakMinute > 0) {
		shortBreakMinute--;
	    Unicode::snprintf(shortBreakTextBuffer, SHORTBREAKTEXT_SIZE, "%02u", shortBreakMinute);
	    shortBreakText.invalidate();
	}else {
		shortBreakMinute = 0;
	}

}
