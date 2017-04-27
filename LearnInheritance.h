//
// Created by Michael Hatmaker on 4/26/17.
//

#ifndef CLIONTEST_LEARNINHERITANCE_H
#define CLIONTEST_LEARNINHERITANCE_H

#include <iostream>
#include <cassert>

using namespace std;

namespace LearnInheritance
{

    class A {
    public:
        A(int n = 2) : m_n(n) {}

    public:
        int get_n() const { return m_n; }

        void set_n(int n) { m_n = n; }

    private:
        int m_n;
    };

    class B {
    public:
        B(char c = 'a') : m_c(c) {}

    public:
        char get_c() const { return m_c; }

        void set_c(char c) { m_c = c; }

    private:
        char m_c;
    };

    class C : virtual public A, public B {
    };

    class D : virtual public A, public B {
    };

    class E : public C, public D {
    };


    class BB {
    public:
        virtual int shift(int n = 2) const {
            return n << 2;
        }
    };

    class DD : public BB {
    public:
        DD() {}

    public:
        int shift(int n = 3) const {
            return n << 3;
        }
    };


    class AAA {
    public:
        AAA() : m_size(sizeof(AAA)) {}

    public:
        virtual void f() const { cout << 1; cout << " sizeAAA=" << m_size << "   "; }

        virtual ~AAA() {}

    public:
        static bool compare(const AAA *a, const AAA *b) {
            assert(a != nullptr);
            assert(b != nullptr);
            return a->m_size < b->m_size;
        }

    protected:
        size_t m_size;
    };

    class BBB : public AAA {
    public:
        BBB() : m_b(nullptr) { m_size = sizeof(BBB); }

    public:
        virtual void f() const { cout << 2; cout << " sizeBBB=" << m_size << "   "; }

    private:
        char *m_b;
    };

    class CCC : public AAA {
    public:
        CCC() { m_size = sizeof(CCC); }

    public:
        virtual void f() const { cout << 3; cout << " sizeCCC=" << m_size << "   "; }

    private:
        static int *m_c;
    };


    class AAAA
    {
    public:
        AAAA(int n = 0) : m_i(n) { cout << " m_i=" << m_i; }

    protected:
        int m_i;
    };

    class BBBB : public AAAA
    {
    public:
        BBBB(int n) : m_j(n) , m_a(--m_j) , m_b() { cout << " m_j=" << m_j; }

    private:
        int m_j;
        AAAA m_a;
        AAAA m_b;
        static AAAA m_cccc;
    };


    class Axx
    {
    public:
        Axx() { f(); }

        virtual ~Axx() { }

    public:
        virtual void f() const { cout << 1; }
    };

    class Bxx : public Axx
    {
    public :
        Bxx() { f(); }

    private:
        virtual void f() const { cout << 2; }
    };

    class Azz
    {
    public:
        virtual ~Azz() { f(); }

    public:
        virtual void f() const { cout << 1; }
    };

    class Bzz : public Azz
    {
    public:
        ~Bzz() { f(); }

    private:
        virtual void f() const { cout << 2; }
    };


    class Ayy
    {
    public:
        virtual ~Ayy() { }
    };

    class Byy : public Ayy
    {
    };

    class Cyy : public Ayy
    {
    };


    int main();

} // namespace LearnInheritance

#endif //CLIONTEST_LEARNINHERITANCE_H
