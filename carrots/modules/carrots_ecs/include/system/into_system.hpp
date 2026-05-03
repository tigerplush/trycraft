#ifndef CARROTS_ECS_SYSTEM_INTO_SYSTEM_HPP
#define CARROTS_ECS_SYSTEM_INTO_SYSTEM_HPP

#include <tuple>

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
                using Traits = FunctionTraits<System>;
                static_assert(std::is_same_v<Traits::ReturnType, void>, "System must return void");
            }

        private:
            template <typename T>
            struct FunctionTraits
            {
                static_assert(false, "System must be a function");
            };

            template <typename Ret, typename... Args>
            struct FunctionTraits<Ret (*)(Args...)>
            {
                using ReturnType = Ret;
                using Arguments = std::tuple<Args...>;
            };
        };
    } // namespace system

} // namespace carrots_ecs

#endif