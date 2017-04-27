//
// Created by Michael Hatmaker on 4/26/17.
//

#include "LearnPointers.h"
#include "tools.h"
#include <iostream>
#include <memory>

using namespace std;

namespace LearnPointers
{

    typedef unique_ptr<int> Pint;

    struct is_null {
        bool operator()(const Pint &p) const {
            return !bool(p);                        // a nullptr cast to a bool equals false
        }
    };

    template <std::size_t size>
    void print_array( Pint (&arr)[size] ) {
    //void print_array(Pint *p) {
        //int length = (sizeof(p)/sizeof(Pint));
        for (int i = 0; i < size; ++i) {
            cout << "p[" << i << "] ";
            if (arr[i] == nullptr)
                cout << "null" << endl;
            else
                cout << *arr[i] << endl;
        }
    }

    int main()
    {
        cout << "\nLearnPointers::main()\n";

        Pint p[] = { Pint(new int(1)), Pint(new int(0)), Pint(nullptr), Pint(new int(2)), Pint() };

        auto b = begin(p);
        auto e = end(p);

        print_array(p);
        cout << "null count: " << count_if(b, e, is_null()) << "\n\n";

        Pint x = move(p[0]);
        Pint &y = p[1];
        static_cast<void>(y);
        p[2] = move(p[3]);

        print_array(p);
        cout << "null count: " << count_if(b, e, is_null()) << "\n\n";

        return 0;
    }


} // namespace LearnPointers