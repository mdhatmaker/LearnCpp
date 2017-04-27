//
// Created by Michael Hatmaker on 4/26/17.
//

#include "LearnErrors.h"

#include <iostream>

using namespace std;

namespace LearnErrors
{
    int main()
    {
        cout << "\nLearnErrors::main()\n";

        try {
            A a(1);
            A b(0);
            A c(2);
        }
        catch (const exception &) {
            cout << 3;
        }

        cout << endl;

        return 0;
    }

} // namespace LearnErrors