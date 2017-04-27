//
// Created by Michael Hatmaker on 4/26/17.
//

#ifndef CLIONTEST_LEARNCPP11_H
#define CLIONTEST_LEARNCPP11_H

#include <type_traits>
#include <utility>

using namespace std;

namespace LearnCpp11
{
    // auto as return type of functions
    auto meaning_of_life() -> int   // "-> int" not needed for c++14
    {
        return 42;
    }

    template<typename T, typename U>
    auto add(T t, U u) -> decltype(t+u) // "-> decltype..." not needed for c++14
    {
        static_assert(is_integral<T>::value, "First value must be int");
        return t+u;
    }

    auto sum_product(double a, double b) -> decltype(make_pair(a+b, a*b))
    {
        return make_pair(a+b, a*b);
    }

    /* THESE SUM METHODS DON'T SEEM TO WORK
    auto sum() -> decltype(0)
    {
        return 0;
    }

    template <typename H, typename... T>
    auto sum(H h, T... t) -> decltype(h+sum(t...))
    {
        return h+sum(t...);
    }
    */

    // "old-style" enum
    enum OldColor
    {
        Red, Green, Blue
    };

    // c++11 enum class
    enum class NewColor
    {
        Red, Green, Blue, Magenta
    };


    int main();

} // namespace LearnCpp11


#endif //CLIONTEST_LEARNCPP11_H
