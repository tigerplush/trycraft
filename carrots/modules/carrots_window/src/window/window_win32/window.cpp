#include "window/window_win32/window.hpp"

namespace carrots_window
{
    namespace window
    {
        LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
        {
            switch (uMsg)
            {
            case WM_DESTROY:
                PostQuitMessage(0);
                return 0;
            }
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
        }

        void Window::create()
        {
            const wchar_t CLASS_NAME[] = L"Sample Window Class";

            HINSTANCE hInstance = GetModuleHandle(NULL);

            WNDCLASS wc = {};
            wc.lpfnWndProc = WindowProc;
            wc.hInstance = hInstance;
            wc.lpszClassName = CLASS_NAME;

            RegisterClass(&wc);

            HWND hwnd = CreateWindowEx(
                0,
                CLASS_NAME,
                L"Learn to Program Windows",
                WS_OVERLAPPEDWINDOW,

                CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,

                NULL,
                NULL,
                hInstance,
                NULL);

            if (NULL == hwnd)
            {
                return;
            }

            ShowWindow(hwnd, 10);

            MSG msg = {};
            while (GetMessage(&msg, NULL, 0, 0) > 0)
            {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        }
    } // namespace window

} // namespace carrots_window
