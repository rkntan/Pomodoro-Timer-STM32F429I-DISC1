#ifndef TIMERVIEW_HPP
#define TIMERVIEW_HPP

#include <gui_generated/timer_screen/TimerViewBase.hpp>
#include <gui/timer_screen/TimerPresenter.hpp>

class TimerView : public TimerViewBase
{
public:
    TimerView();
    virtual ~TimerView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
    virtual void StartTimerToggleFunction();

protected:
    uint16_t mTimer_min_text = 25;
    uint16_t mTimer_sec_text = 0;
    uint16_t mTotalSeconds = mTimer_min_text*60 + mTimer_sec_text;


    static const uint16_t WAITFOR_DURATION = 60;
    uint16_t waitForCounter = WAITFOR_DURATION ;

    bool pomodoro = false;

};

#endif // TIMERVIEW_HPP
