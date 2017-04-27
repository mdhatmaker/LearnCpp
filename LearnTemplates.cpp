//
// Created by Michael Hatmaker on 4/26/17.
//

#include "LearnTemplates.h"

#include <iostream>

using namespace std;

namespace LearnTemplates
{

    int main()
    {
        Values<int, 3> stuff;
        //Values<int, 1> more_stuff;    // fails with "Use a scalar"

        //cout << sum(1, 2.4) << endl;

        return 0;
    }

} // namespace LearnTemplates