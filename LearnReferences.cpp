//
// Created by Michael Hatmaker on 4/26/17.
//

#include "LearnReferences.h"
#include <iostream>

using namespace std;

namespace LearnReferences
{
    int main()
    {
        string name1 = getName();
        //string& name2 = getName();    // cannot get a reference to a temp without using rvalue reference
        string&& name4 = getName();
        cout << name4 << endl;

        string j{"John"};
        printName(j);
        printName(getName());

        return 0;
    }

} // namespace LearnReferences