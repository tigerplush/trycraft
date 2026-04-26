#include "carrots_window.hpp"

#ifdef WIN32
#include "window/window_win32/window.hpp"
#endif

namespace carrots_window
{
    WindowPlugin WindowPlugin::standard()
    {
        return WindowPlugin();
    }

    void WindowPlugin::build(IApp &app)
    {
        #ifdef WIN32
        #pragma message ("win32")
        window::Window::create();
        #endif
        #ifdef UNIX
        #pragma message ("unix")
        #endif
        #ifdef APPLE
        #pragma message ("apple")
        #endif
    }
} // namespace carrots_window
