#ifndef CARROTS_APP_APP_APP_TRAITS_HPP
#define CARROTS_APP_APP_APP_TRAITS_HPP

#include "plugin/plugin_traits.hpp"

namespace carrots_app
{
    namespace app
    {
        using IPlugin = carrots_app::plugin::IPlugin;

        class IApp
        {
        public:
            virtual IApp &add_plugin(IPlugin &plugin) = 0;
        };
    } // namespace app
} // namespace carrots_app

#endif