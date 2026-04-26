#ifndef CARROTS_APP_APP_APP_HPP
#define CARROTS_APP_APP_APP_HPP

#include "app_traits.hpp"

namespace carrots_app
{
    namespace app
    {
        ///
        class App : public IApp
        {
        public:
            static App create();

            static App empty();

        public:
            virtual App &add_plugin(IPlugin &plugin) override;

        public:
            int run();
        };
    } // namespace app
} // namespace carrots_app

#endif CARROTS_APP_APP_APP_HPP