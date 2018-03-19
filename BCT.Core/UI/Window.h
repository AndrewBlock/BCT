#ifndef BCT_CORE_WINDOW_H
#define BCT_CORE_WINDOW_H

#pragma once

#include "BCT.Core.h"
#include "Object.h"
#include "Text/String.h"

using namespace BCT::Core::Text;

namespace BCT
{
    namespace Core
    {
        namespace UI
        {
            class BCT_CORE_API Window : public Object
            {
                DECLARE_REFLECTION_TYPE()

            public:
                Window();
                virtual ~Window();

            public:
                bool Create(const wchar_t* lpwWindowName, DWORD dwExStyle, DWORD dwStyle, int x, int y, int nWidth, int nHeight, HWND hParentWindow, HMENU hMenu, HINSTANCE hInstance);
                bool Destroy();

            public:
                operator HWND();

            private:
                LRESULT WindowProc(HWND hWnd, UINT nMessage, WPARAM wParam, LPARAM lParam);

            private:
                HWND _hWindow;
                String _windowClassName;
            };
        }
    }
}

#endif //BCT_CORE_WINDOW_H
