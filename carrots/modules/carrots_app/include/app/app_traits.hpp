#ifndef CARROTS_APP_APP_APP_TRAITS_HPP
#define CARROTS_APP_APP_APP_TRAITS_HPP

#include "carrots_ecs.hpp"

#include "plugin/plugin_traits.hpp"

namespace carrots_app
{
    namespace app
    {
        using ScheduleLabel = carrots_ecs::schedule::ScheduleLabel;
        using IntoSystem = carrots_ecs::system::IntoSystem;
        using IPlugin = carrots_app::plugin::IPlugin;

        class IApp
        {
        public:
            virtual IApp &add_plugin(IPlugin &plugin) = 0;
            virtual IApp &add_system(ScheduleLabel label, IntoSystem system) = 0;
        };
    } // namespace app
} // namespace carrots_app

#endif