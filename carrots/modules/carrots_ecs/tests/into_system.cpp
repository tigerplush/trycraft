#include <gtest/gtest.h>
#include <carrots_ecs.hpp>

using namespace carrots_ecs::system;

void setup(){}
void setup_int(int _a) {}

TEST(IntoSystemTest, SystemsFromDifferentFunctions)
{
    IntoSystem system = setup;
    IntoSystem system_int = setup_int;
}