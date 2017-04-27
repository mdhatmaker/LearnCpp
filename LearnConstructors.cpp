//
// Created by Michael Hatmaker on 4/25/17.
//

#include "LearnConstructors.h"
#include <set>
#include <vector>

namespace LearnConstructors {

    class AA {
    public:
        AA(int i) : m_i(i) {}

    public:
        int operator()(int i = 0) const { return m_i + i; }

        operator int() const { return m_i; }

    private:
        int m_i;

        friend int g(const AA &);
    };

    int f(char c) {
        return c;
    }

    int g(const AA &a) {
        return a.m_i;
    }

    int main() {
        cout << "\nLearnConstructors::main()\n";

        AA f(2), g(3);
        cout << f(1) << g(f) << endl;

        return 0;
    }

} // namespace LearnConstructors