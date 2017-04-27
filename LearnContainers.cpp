//
// Created by Michael Hatmaker on 4/26/17.
//

#include "LearnContainers.h"
#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <map>

using namespace std;

namespace LearnContainers
{

    struct P
    {
        bool operator()(const int &n) const {
            return n % 3 == 0;
        }
    };

    bool p(const int &n)  {
        return n % 3 == 0;
    }

    int main()
    {
        vector<int> values = {1, 2, 3, 4, 5};

        map<string, string> capitals = {
                { "UK", "London" },
                { "USA", "Washington DC"}
        };
        cout << capitals["UK"] << endl;

        vector<double> dvalues;
        typedef decltype(dvalues.begin()) dvi;  // declare type of iterator of dvalues

        vector<int> vv = {1, 2, 3};
        /*for (int i = 0; i < v.size(); ++i)
        {
            // old-style loop iteration
        }*/
        for (int& a : vv)    // for (int a : v) to use value rather than reference
        {
            a *= a;
            cout << a << endl;
        }

        map<string, int> histogram = {
                {"hello", 111},
                {"world", 222}
        };
        for (const auto& kvp: histogram)
        {
            cout << kvp.second << endl;
        }


        list<int> l({5, 2, 6, 1, 13, 9, 19});
        cout << l.size() << endl;
        l.erase(remove_if(l.begin(), l.end(), &p), l.end());
        for (int i : l) { cout << i << " "; }
        cout << endl << l.size() << endl;

        set<int> x({4, 2, 7, 11, 12, 14, 17, 2});
        cout << "\nx: " << x.size() << "    ";
        for (int i : x) { cout << i << " "; }
        cout << "\n\n";

        //vector<int> v = { 4, 2, 7, 11, 12, 14, 17, 2 };
        vector<int> v = {11, 12, 14, 4, 2, 7, 17, 2};

        cout << "{";
        for (int i : v) { cout << (i == *(v.begin()) ? " " : ", ") << i; }
        cout << " }\n";
        set<int, C> z;
        //set<int, Creverse> z;
        //set<int, Cdefault> z;
        for (int i : v) {
            z.insert(i);
            cout << i << "->  ";
            for (int i : z) { cout << i << " "; }
            cout << endl;
        }

        set<int, C> y(x.begin(), x.end());          // create y with x iterator and C compare struct
        cout << "\ny: " << y.size() << "    ";
        for (int i : y) { cout << i << " "; }
        cout << endl;

        return 0;
    }

} // namespace LearnContainers