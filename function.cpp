#include <iostream>
using namespace std;

void sayHi(string name, int age); // declare function and define anywhere

int main()
{
    sayHi("sufiyan", 34);
    sayHi("ali", 44);
    sayHi("ahmed", 54);
    return 0;
}

void sayHi(string name, int age)
{
    cout << "hello " << name << " you are " << age << " old" << endl;
}