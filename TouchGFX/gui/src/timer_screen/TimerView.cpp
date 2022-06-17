#include <gui/timer_screen/TimerView.hpp>

TimerView::TimerView()
{

}

void TimerView::setupScreen()
{
    TimerViewBase::setupScreen();
}

void TimerView::tearDownScreen()
{
    TimerViewBase::tearDownScreen();
}

void TimerView::StartTimerToggleFunction()
{
    // Override and implement this function in Timer
	pomodoro= !pomodoro;

}

void TimerView::handleTickEvent()
{
    // Override and implement this function in Timer
    if(waitForCounter > 0 && pomodoro)
    {
        waitForCounter--;
        if(waitForCounter == 0)
        {
            waitForCounter = WAITFOR_DURATION;

            if (mTotalSeconds > 0) {
                mTotalSeconds--;
                mTimer_min_text = mTotalSeconds / 60;
                mTimer_sec_text = mTotalSeconds -  (mTimer_min_text * 60);
			}
    		Unicode::snprintf(timer_sec_textBuffer, TIMER_SEC_TEXT_SIZE, "%02u", mTimer_sec_text);
    		timer_sec_text.invalidate();

    		Unicode::snprintf(timer_min_textBuffer, TIMER_MIN_TEXT_SIZE, "%02u", mTimer_min_text);
    		timer_min_text.invalidate();
/*

        	mTimer_sec_text--;
    		Unicode::snprintf(timer_sec_textBuffer, TIMER_SEC_TEXT_SIZE, "%02u", mTimer_sec_text);
    		timer_sec_text.invalidate();

        	if (mTimer_sec_text == 0)
        	{
        		mTimer_sec_text = 60;

        		mTimer_min_text--;

        		Unicode::snprintf(timer_min_textBuffer, TIMER_MIN_TEXT_SIZE, "%02u", mTimer_min_text);
        		timer_min_text.invalidate();

        		if (mTimer_min_text==0)
        		{
        			pomodoro = false;
				}
			}
*/

            //timerCountDown
            //When waitFor completed call virtual function
            //Call timerCountDown
/*        	if (mTimer_min_text != 0) {
        		mTimer_min_text = mTimer_min_text- 1;
        		Unicode::snprintf(timer_min_textBuffer, TIMER_MIN_TEXT_SIZE, "%02u", mTimer_min_text);
        		timer_min_text.invalidate();
        	}*/
        }
    }
}
