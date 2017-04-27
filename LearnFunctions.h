//
// Created by Michael Hatmaker on 4/26/17.
//

#ifndef CLIONTEST_LEARNFUNCTIONS_H
#define CLIONTEST_LEARNFUNCTIONS_H

#include <iostream>

using namespace std;

namespace LearnFunctions
{
    struct Foo {
        void display_greeting() {
            cout << "Hello, world\n";
        }
        void display_number(int i) {
            cout << "number: " << i << '\n';
        }
        int data = 7;
    };

    struct FooX
    {
        FooX(int num) : _num(num) {}
        void print_add(int i) const { cout << _num+i << endl; }
        int _num;
    };

    struct PrintNum
    {
        void operator()(int i) const
        {
            cout << i << '\n';
        }
    };

    void print_number(int i);


    int main();

} // namespace LearnFunctions


#endif //CLIONTEST_LEARNFUNCTIONS_H
