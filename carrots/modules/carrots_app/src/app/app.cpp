#include "app/app.hpp"

namespace carrots_app
{
    namespace app
    {
        App App::create()
        {
            return App();
        }

        App App::empty()
        {
            return App();
        }

        App &App::add_plugin(IPlugin &plugin)
        {
            plugin.build(*this);
            return *this;
        }

        int App::run()
        {
            return 0;
        }
    } // namespace app
} // namespace carrots_app