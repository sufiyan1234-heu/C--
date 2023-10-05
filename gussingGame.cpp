#include <iostream>
using namespace std;
int main()
{
    int secretNum = 7;
    int guess;

    while (secretNum != guess)
    {
        cout << "Enter a number: ";
        cin >> guess;
        }
    cout << "You win!!";
}