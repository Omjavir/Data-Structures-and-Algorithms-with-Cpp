#include <iostream>
using namespace std;

/*
    // ***** Function Overloading *****
class om
{
public:
    void func()
    {
        cout << "Function with no arguments" << endl;
    }
    void func(int n)
    {
        cout << "Function with int as arguments" << endl;
    }
    void func(double n)
    {
        cout << "Function with double int as arguments" << endl;
    }
};
*/

/*
    //    ***** Operator Overloading *****
class complex
{
private:
    int real, img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    complex operator+(complex const &obj)
    {
        complex res;
        res.img = img + obj.img;
        res.real = real + obj.real;
        return res;
    }
    void display()
    {
        cout << real << " + i" << img << endl;
    }
};
*/

/*
//    ***** Virtual funcations *****
class base
{
public:
    virtual void print()
    {
        cout << "This is print func from base class" << endl;
    }
    void display()
    {
        cout << "This is display func from base class" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "This is print func from derived class" << endl;
    }
    void display()
    {
        cout << "This is display func from derived class" << endl;
    }
};
*/

int main()
{
    /*
    ***** Function Overloading *****
    om obj;
    obj.func();
    obj.func(38);
    obj.func(38.23);
    */

    /*
        //    ***** Operator Overloading *****
        complex c1(12, 8), c2(14, 27);
        complex c3 = c1 + c2;
        c3.display();
    */

    /*
        //    ***** Virtual funcations *****
        base *baseptr;
        derived d;
        baseptr = &d;
        // Will output base class if virtual keyword is not used
        baseptr->print();   // Will print derived because of Virtual keyword
        baseptr->display(); // Will print base because virutal keyword is not provided
    */
    return 0;
}