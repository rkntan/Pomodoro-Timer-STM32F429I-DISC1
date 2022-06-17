/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <new>
#include <gui_generated/common/FrontendApplicationBase.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <platform/driver/lcd/LCD16bpp.hpp>
#include <gui/main_screen/MainView.hpp>
#include <gui/main_screen/MainPresenter.hpp>
#include <gui/timer_screen/TimerView.hpp>
#include <gui/timer_screen/TimerPresenter.hpp>

using namespace touchgfx;

FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
    : touchgfx::MVPApplication(),
      transitionCallback(),
      frontendHeap(heap),
      model(m)
{
    touchgfx::HAL::getInstance()->setDisplayOrientation(touchgfx::ORIENTATION_PORTRAIT);
    touchgfx::Texts::setLanguage(GB);
    reinterpret_cast<touchgfx::LCD16bpp&>(touchgfx::HAL::lcd()).enableTextureMapperAll();
}

/*
 * Screen Transition Declarations
 */

// Main

void FrontendApplicationBase::gotoMainScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoMainScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoMainScreenNoTransitionImpl()
{
    touchgfx::makeTransition<MainView, MainPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoMainScreenBlockTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoMainScreenBlockTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoMainScreenBlockTransitionImpl()
{
    touchgfx::makeTransition<MainView, MainPresenter, touchgfx::BlockTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Timer

void FrontendApplicationBase::gotoTimerScreenBlockTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoTimerScreenBlockTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoTimerScreenBlockTransitionImpl()
{
    touchgfx::makeTransition<TimerView, TimerPresenter, touchgfx::BlockTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}
