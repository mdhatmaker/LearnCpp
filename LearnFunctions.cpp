//
// Created by Michael Hatmaker on 4/26/17.
//

#include "LearnFunctions.h"

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

        return 0;
    }

} // namespace LearnFunctions