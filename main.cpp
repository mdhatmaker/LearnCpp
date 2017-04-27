#include "LearnConstructors.h"
#include "LearnContainers.h"
#include "LearnInheritance.h"
#include "LearnPointers.h"
#include "LearnErrors.h"
#include <iostream>
#include <list>

using namespace std;


int main()
{
    //{ B b(5); }

    LearnConstructors::main();
    LearnContainers::main();
    LearnInheritance::main();
    LearnPointers::main();
    LearnErrors::main();

    return 0;
}