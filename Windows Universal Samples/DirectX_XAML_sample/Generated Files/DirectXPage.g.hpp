﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "DirectXPage.xaml.h"

void ::DirectX_XAML_sample::DirectXPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///DirectXPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::DirectX_XAML_sample::DirectXPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                this->swapChainPanel = safe_cast<::Windows::UI::Xaml::Controls::SwapChainPanel^>(__target);
            }
            break;
        case 2:
            {
                this->appIDTextBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 3:
            {
                this->InitSDK = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->InitSDK))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX_XAML_sample::DirectXPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&DirectXPage::InitSDK_Click);
            }
            break;
        case 4:
            {
                this->ButtonsPanel = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
            }
            break;
        case 5:
            {
                this->placement1TextBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 6:
            {
                this->placement1IDTextBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 7:
            {
                this->PlayPlacement1 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->PlayPlacement1))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX_XAML_sample::DirectXPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&DirectXPage::PlayPlacement1_Click);
            }
            break;
        case 8:
            {
                this->embeddedControl = safe_cast<::VungleSDK::UI::VungleAdControl^>(__target);
            }
            break;
        case 9:
            {
                this->placement2TextBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 10:
            {
                this->placement2IDTextBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 11:
            {
                this->PlayPlacement2 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->PlayPlacement2))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX_XAML_sample::DirectXPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&DirectXPage::PlayPlacement2_Click);
            }
            break;
        case 12:
            {
                this->LoadPlacement2 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->LoadPlacement2))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX_XAML_sample::DirectXPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&DirectXPage::LoadPlacement2_Click);
            }
            break;
        case 13:
            {
                this->placement3TextBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 14:
            {
                this->placement3IDTextBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 15:
            {
                this->PlayPlacement3 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->PlayPlacement3))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX_XAML_sample::DirectXPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&DirectXPage::PlayPlacement3_Click);
            }
            break;
        case 16:
            {
                this->LoadPlacement3 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->LoadPlacement3))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX_XAML_sample::DirectXPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&DirectXPage::LoadPlacement3_Click);
            }
            break;
        case 17:
            {
                this->cachedTextBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 18:
            {
                this->bottomAppBar = safe_cast<::Windows::UI::Xaml::Controls::AppBar^>(__target);
            }
            break;
        case 19:
            {
                ::Windows::UI::Xaml::Controls::AppBarButton^ element19 = safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(element19))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::DirectX_XAML_sample::DirectXPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&DirectXPage::AppBarButton_Click);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::DirectX_XAML_sample::DirectXPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}


