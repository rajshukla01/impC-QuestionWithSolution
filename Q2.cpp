// Topic:Ambiguity problem / diamond problem / multipath problem(Inheritance problem j)
// Author: Raj Shukla
// Date:14/12/2021

#include <iostream>
using namespace std;
class base
{
public:
    int a;
};
class derived1 : public base
{
public:
    int b;
};
class derived2 : public base
{
public:
    int c;
};

class derived : public derived1, public derived2
{
public:
    int d;
};
int main()
{
    derived dobj;
    dobj.derived1::a = 10;
    dobj.derived2::a = 100;
    dobj.b = 10;
    dobj.c = 10;
    dobj.d = 10;
    cout << dobj.derived2::a << endl
         << dobj.b << endl
         << dobj.c << endl
         << dobj.d << endl;

    return 0;
}