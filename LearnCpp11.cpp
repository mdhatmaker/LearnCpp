//
// Created by Michael Hatmaker on 4/26/17.
//
// demonstrate features new to C++11

#include "LearnCpp11.h"

#include <iostream>
#include <vector>

namespace LearnCpp11
{

    int main()
    {
        // auto as variable type
        auto name = "sally";
        auto age = 34;
        auto pi = 3.14;

        // "old-style" enum vs new class enum
        OldColor oc = Green;
        int g = oc;
        NewColor nc = NewColor::Blue;
        //int g2 = nc;  // cannot cast new-style enum to int

        // static_assert to check type(s) passed to function
        cout << add(3, 2.5) << endl;
        //cout << add(1.6, 2.8) << endl;    // causes static_assert to fail

        // lambda function called within a for_each loop
        vector<int> scores = {8, 2, 4, 1};
        for_each(begin(scores), end(scores), [](int n) -> float
        {
            cout << n << endl;
            return n;
        });

        // lambda function used to test for positive integers
        auto zero = 0;
        auto is_positive = [zero](int n) { return n > zero; };
        cout << boolalpha << is_positive(-2) << endl;

        // recursive lambda function to calculate Fibonacci sequence
        function<int(int)> fib = [&fib](int x) { return x < 2 ? 1 : fib(x-1)+fib(x-2); };
        cout << fib(8) << endl;

        // make_pair returned from sum_product function (use tie function to receive values)
        float s;
        tie(s, ignore) = sum_product(3, 4);
        cout << "sum = " << s << endl;



        return 0;
    }
} // namespace LearnCpp11