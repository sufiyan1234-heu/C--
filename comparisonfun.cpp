#include <iostream>
#include <cmath>
using namespace std;

int maxOftwo(int a, int b)
{
    int result;

    if (a > b)
    {
        result = a;
    }
    else
    {
        result = b;
    }
    return result;
}
int main()
{
    int ans = maxOftwo(3, 5);

    cout << ans;
}
