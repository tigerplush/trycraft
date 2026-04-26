#ifndef CARROTS_APP_PLUGIN_PLUGIN_TRAITS_HPP
#define CARROTS_APP_PLUGIN_PLUGIN_TRAITS_HPP

namespace carrots_app
{
    namespace app
    {
        // Forward declaration of App interface.
        class IApp;
    } // namespace app

    namespace plugin
    {
        class IPlugin
        {
        public:
            virtual void build(app::IApp &app) = 0;
        };
    } // namespace plugin

} // namespace carrots_app

#endif