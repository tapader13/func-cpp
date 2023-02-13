#include <iostream>
using namespace std;
void addition(int, int);
void division(int, int);
int main()
{
    addition(10, 30);
    division(30, 9);
}
void addition(int a, int b)
{
    int sum = a * b;
    cout << "Sum is " << sum << endl;
}
void division(int a, int b)
{
    float division = (float)a / b;
    cout << "Sum is " << division << endl;
}
