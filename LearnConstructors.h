//
// Created by Michael Hatmaker on 4/25/17.
//

#ifndef CLIONTEST_LEARNCONSTRUCTORS_H
#define CLIONTEST_LEARNCONSTRUCTORS_H

#include <iostream>

using namespace std;

namespace LearnConstructors {

    class A {
    public:
        A(int n = 2) : m_i(n) { cout << "A constructor (n = " << n << ")\n"; }

        ~A() { cout << "~A() " << m_i << endl; }

    protected:
        int m_i;
    };

    class B : public A {
    public:
        B(int n) : m_a1(m_i + 1), m_a2(n) { cout << "B constructor (n = " << n << ")\n"; }

        ~B() {
            cout << "~B() " << m_i << endl;
            --m_i;
        }

    private:
        A m_a1;
        A m_a2;
    };


    int main();

} // namespace LearnConstructors

#endif //CLIONTEST_LEARNCONSTRUCTORS_H
