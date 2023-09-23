#include <iostream>
using namespace std;
int main()
{
    string phrase = "my name is sufiyan";
    cout << phrase.length() << endl; // to find the length of string
    cout << phrase[0] << endl;       // to print single char in the string
    // phrase[0] = 'k';                 // assign value or change the value of the string char
    cout << phrase.find("sufiyan", 4) << endl; // to find the starting index of sub string in the string second argument is the position from where to start the search
    cout << phrase.substr(8, 7) << endl;       // to display the sub string
    cout << phrase;
}
