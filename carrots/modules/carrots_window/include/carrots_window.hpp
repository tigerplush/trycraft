#ifndef CARROTS_WINDOW_CARROTS_WINDOW_HPP
#define CARROTS_WINDOW_CARROTS_WINDOW_HPP

#include <carrots_app.hpp>

namespace carrots_window
{
    using IApp = carrots_app::app::IApp;
    using IPlugin = carrots_app::plugin::IPlugin;
    class WindowPlugin : public IPlugin
    {
    public:
        static WindowPlugin standard();
    public:
        void build(IApp &app) override;
    };
} // namespace carrots_window

#endif