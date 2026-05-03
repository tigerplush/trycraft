#ifndef CARROTS_ECS_SYSTEM_INTO_SYSTEM_HPP
#define CARROTS_ECS_SYSTEM_INTO_SYSTEM_HPP

namespace carrots_ecs
{
    namespace system
    {

        class IntoSystem
        {
        public:
            template <typename System>
            IntoSystem(System system)
            {
                
            }
        };
    } // namespace system

} // namespace carrots_ecs

#endif