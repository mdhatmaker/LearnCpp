//
// Created by Michael Hatmaker on 4/26/17.
//

#include "LearnFunctions.h"

#include <iostream>
#include <functional>

using namespace std;

namespace LearnFunctions
{
    void print_number(int i)
    {
        cout << i << '\n';
    }

    int main()
    {
        cout << "\nLearnFunctions::main\n";

        Foo f;

        auto greet = mem_fn(&Foo::display_greeting);
        greet(f);

        auto print_num = mem_fn(&Foo::display_number);
        print_num(f, 42);

        auto access_data = mem_fn(&Foo::data);
        cout << "data: " << access_data(f) << '\n';

        // store a free function
        function<void(int)> f_display = print_number;
        f_display(-9);

        // store a lambda
        function<void()> f_display_42 = []() { print_number(42); };
        f_display_42();

        // store the result of a call to std::bind
        function<void()> f_display_31337 = bind(print_number, 31337);
        f_display_31337();

        // store a call to a member function
        function<void(const FooX&, int)> f_add_display = &FooX::print_add;
        const FooX foo(314159);
        f_add_display(foo, 1);

        // store a call to a data member accessor
        function<int(FooX const&)> f_num = &FooX::_num;
        cout << "_num: " << f_num(foo) << '\n';


        return 0;
    }

} // namespace LearnFunctions