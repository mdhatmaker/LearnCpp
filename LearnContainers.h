//
// Created by Michael Hatmaker on 4/26/17.
//

#ifndef CLIONTEST_LEARNCONTAINERS_H
#define CLIONTEST_LEARNCONTAINERS_H

#include <iostream>

using namespace std;

namespace LearnContainers
{

    struct C {
        bool operator()(const int &a, const int &b) const {
            return a % 10 < b % 10;
        }
    };

    struct Cdefault {
        // The following will just do a standard compare (sort lowest to highest)
        bool operator()(const int &a, const int &b) const {
            return a < b;
        }
    };

    struct Creverse {
        // The following will just do a reverse sort (sort highest to lowest)
        bool operator()(const int &a, const int &b) const {
            return a > b;
        }
    };


    int main();

} // namespace LearnContainers

#endif //CLIONTEST_LEARNCONTAINERS_H
