#include <iostream>
using namespace std;

int main()
{
    bool isMale = true; // bool data type is used to store the true or false
    bool isTall = false;
    // if (isMale && isTall) //&& represent the "AND"
    if (isMale && isTall) //|| represent the "OR"
    {
        cout << "you are a tall male";
    }
    else if (isMale && !isTall)
    {
        cout << "You are a short male";
    }
    else if (!isMale && isTall)
    {
        cout << "You are not a male but you are tall ";
    }

    else
    {
        cout << "You are female";
    }

    return 0;
}