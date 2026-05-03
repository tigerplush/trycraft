#include <iostream>

#include <carrots.hpp>

using namespace carrots;

void startup(int zero)
{
    std::cout << "Test";
}

int main()
{
    return App::create()
        .add_plugin(WindowPlugin::standard())
        .add_system(ScheduleLabel(), startup)
        .run();
}