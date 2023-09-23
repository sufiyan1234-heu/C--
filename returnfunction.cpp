#include <iostream>
using namespace std;

double cube(double num)
{
    double result = num * num * num;
    return result;
}

int main()
{
    double ans = cube(3.0);
    cout << ans;
}