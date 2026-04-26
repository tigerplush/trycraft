#include <carrots.hpp>

using namespace carrots;

int main()
{
    return App::create().add_plugin(WindowPlugin::standard()).run();
}