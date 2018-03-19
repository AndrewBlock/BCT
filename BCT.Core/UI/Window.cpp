#include "Window.h"

using namespace BCT::Core::UI;

IMPLEMENT_REFLECTION_TYPE(Window, Object)

Window::Window()
{
    _hWindow = nullptr;
}

Window::~Window()
{
}

bool Window::Create(const wchar_t* lpwWindowName, DWORD dwExStyle, DWORD dwStyle, int x, int y, int nWidth, int nHeight, HWND hParentWindow, HMENU hMenu, HINSTANCE hInstance)
{
    return true;
}

bool Window::Destroy()
{
    return true;
}

Window::operator HWND()
{
    return _hWindow;
}

LRESULT Window::WindowProc(HWND hWnd, UINT nMessage, WPARAM wParam, LPARAM lParam)
{
    return DefWindowProcW(hWnd, nMessage, wParam, lParam);
}