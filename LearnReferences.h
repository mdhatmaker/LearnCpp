//
// Created by Michael Hatmaker on 4/26/17.
//

#ifndef CLIONTEST_LEARNREFERENCES_H
#define CLIONTEST_LEARNREFERENCES_H

#include <iostream>

using namespace std;

namespace LearnReferences
{
    string getName() {
        return "Rufus";
    }

    void printName(const string& name) {
        cout << "Ordinary reference: " << name << endl;
    }

    void printName(string&& name) {
        cout << "Rvalue reference: " << name << endl;
    }


    int main();

} // namespace LearnReferences


#endif //CLIONTEST_LEARNREFERENCES_H
