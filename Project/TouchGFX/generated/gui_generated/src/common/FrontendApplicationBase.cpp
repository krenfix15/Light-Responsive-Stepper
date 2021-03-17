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
#include <gui/mainscreen_screen/MainScreenView.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>
#include <gui/motorscreen_screen/MotorScreenView.hpp>
#include <gui/motorscreen_screen/MotorScreenPresenter.hpp>

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

// MainScreen

void FrontendApplicationBase::gotoMainScreenScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoMainScreenScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoMainScreenScreenNoTransitionImpl()
{
    touchgfx::makeTransition<MainScreenView, MainScreenPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoMainScreenScreenSlideTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoMainScreenScreenSlideTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoMainScreenScreenSlideTransitionWestImpl()
{
    touchgfx::makeTransition<MainScreenView, MainScreenPresenter, touchgfx::SlideTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// MotorScreen

void FrontendApplicationBase::gotoMotorScreenScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoMotorScreenScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoMotorScreenScreenSlideTransitionEastImpl()
{
    touchgfx::makeTransition<MotorScreenView, MotorScreenPresenter, touchgfx::SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}