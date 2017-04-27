//
// Created by Michael Hatmaker on 4/26/17.
//

#ifndef CLIONTEST_LEARNERRORS_H
#define CLIONTEST_LEARNERRORS_H

#include <iostream>
#include <stdexcept>

using namespace std;

namespace LearnErrors
{
    class A
    {
    public:
        A(int n) : m_n(n) {
            if (0 == n) {
                throw logic_error("0");
            }
        }

        ~A() { cout << m_n; }

    public:
        const int m_n;
    };


    int main();

} // namespace learnErrors


#endif //CLIONTEST_LEARNERRORS_H
