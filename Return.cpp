#include <iostream>
using namespace std;
double add(double, double);
int main()
{
    double result = add(10.7, 30.1);
    cout << result;
}
double add(double a, double b)
{
    double sum = a + b;
    return sum;
}