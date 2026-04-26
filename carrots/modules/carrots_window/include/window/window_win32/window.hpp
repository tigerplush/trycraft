#ifndef CARROTS_WINDOW_WINDOW_WINDOW_WIN32_WINDOW_HPP
#define CARROTS_WINDOW_WINDOW_WINDOW_WIN32_WINDOW_HPP

#ifndef UNICODE
#define UNICODE
#endif

#include <windows.h>

namespace carrots_window
{
    namespace window
    {
        LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
        class Window
        {
        public:
            static void create();
        };
    } // namespace window

} // namespace carrots_window

#endif