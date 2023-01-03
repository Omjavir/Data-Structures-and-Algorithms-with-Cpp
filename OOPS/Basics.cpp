#include <iostream>
using namespace std;

class Student
{
    string name; // As we cannot access private object from outside we can use getter function
public:
    // string name;
    int rollNo;
    int age;

    Student()
    {
        cout << "Default Constructor"; // Default constructor
    }

    Student(string s, int r, int a) // Parametarized constructor
    {
        name = s;
        rollNo = r;
        age = a;
    }

    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout << name << endl;
    }

    void printInfo()
    {
        cout << "Name: " << name << " Roll No: " << rollNo << " Age: " << age << endl;
    }
};

int main()
{
    /*
    Student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Name : " << endl;
        cin >> arr[i].name;
        cout << "Roll no : " << endl;
        cin >> arr[i].rollNo;
        cout << "Age : " << endl;
        cin >> arr[i].age;
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }
    */

    //    ***** Setters *****
    /*
    Student arr[3];
    for (int i = 0; i < 3; i++)
    {
        string s;

        cout << "Name : " << endl;
        cin >> s;
        arr[i].setName(s);
        cout << "Roll no : " << endl;
        cin >> arr[i].rollNo;
        cout << "Age : " << endl;
        cin >> arr[i].age;
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }
    */

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }

    Student a("Sarthak", 23, 18);
    a.printInfo();

    Student b; //Default constructor wil run as the new object will be created
    return 0;
}