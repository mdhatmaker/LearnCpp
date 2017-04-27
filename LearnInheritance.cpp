//
// Created by Michael Hatmaker on 4/26/17.
//

#include "LearnInheritance.h"
#include <iostream>
#include <vector>

using namespace std;

namespace LearnInheritance
{

    int *CCC::m_c = nullptr;

    AAAA BBBB::m_cccc(3);


    int main()
    {
        cout << "\nLearnInheritance::main()\n";


        // Using public virtual to avoid "dangerous diamond" inheritance problem
        E e;
        C &c = e;
        D &d = e;
        cout << c.get_c() << d.get_n();

        c.set_n(3);
        d.set_c('b');
        cout << c.get_c() << d.get_n() << endl;


        // Which method is called with an override?
        const DD dd;
        const BB *bb = &dd;
        cout << bb->shift() << endl;


        // How static class variables affect size of a class (vs how member variables affect size)
        vector<AAA *> v({new CCC, new BBB, new AAA});

        for_each(v.begin(), v.end(), mem_fn(&AAA::f));
        cout << endl;

        stable_sort(v.begin(), v.end(), AAA::compare);

        for_each(v.begin(), v.end(), mem_fn(&AAA::f));
        cout << endl;

        for_each(v.begin(), v.end(), default_delete<AAA>());


        // class member initialization (why does static class member not seem to trigger initialization?)
        BBBB b(2);

        std::cout << std::endl;


        // private member methods called before public member methods?
        // override of public virtual method with private virtual method?
        const Axx *axx = new Bxx;
        delete axx;

        std::cout << std::endl;

        // overriding destructors
        // when child class is deleted, child class destructor is called first followed by base class destructor
        const Azz *azz = new Bzz;
        delete azz;

        std::cout << std::endl;

        // more virtual destructor
        try {
            Byy byy;
            Cyy cyy;
            Ayy *pa1 = &byy, *pa2 = &cyy;

            cout << ((dynamic_cast<Byy*>(pa1) != nullptr) ? 1 : 0);
            cout << ((dynamic_cast<Byy*>(pa2) != nullptr) ? 1 : 0);

            Byy &b1 = dynamic_cast<Byy&>(*pa2);
            pa1 = &b1;

            cout << ((static_cast<Cyy*>(pa1) != nullptr) ? 1 : 0);
        }
        catch(const std::exception &) {
            std::cout << 2;
        }

        std::cout << std::endl;


        return 0;

    }

} // namespace LearnInheritance