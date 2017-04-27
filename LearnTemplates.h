//
// Created by Michael Hatmaker on 4/26/17.
//

#ifndef CLIONTEST_LEARNTEMPLATES_H
#define CLIONTEST_LEARNTEMPLATES_H

#include <cstddef>

using namespace std;

namespace LearnTemplates
{
    template <typename T, size_t Size>
    class Values
    {
        static_assert(Size > 1, "Use a scalar");
        T values[Size];
    };


    int main();

} // namespace LearnTemplates


#endif //CLIONTEST_LEARNTEMPLATES_H
