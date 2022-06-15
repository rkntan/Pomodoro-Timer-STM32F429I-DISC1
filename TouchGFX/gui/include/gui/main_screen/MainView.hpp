#ifndef MAINVIEW_HPP
#define MAINVIEW_HPP

#include <gui_generated/main_screen/MainViewBase.hpp>
#include <gui/main_screen/MainPresenter.hpp>


class MainView : public MainViewBase
{
public:
    MainView();
    virtual ~MainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void updateTime(uint8_t hour, uint8_t minute, uint8_t second);

    virtual void minuteScrollListUpdateItem(MinutesContainer& item, int16_t itemIndex);
    virtual void secondScrollListUpdateItem(SecondContainer& item, int16_t itemIndex);

    virtual void shortBreakUpButtonClicked();
    virtual void shortBreakDownButtonClicked();

protected:
    uint16_t shortBreakMinute = 0;
};

#endif // MAINVIEW_HPP
