#include <iostream>
using namespace std;

int main() 
{
    int exponent;
    float base, result = 1;

    cout << "Enter base :";
    cin >> base;
    cout<<"enter expo:";
    cin>>exponent;

    cout << base << "^" << exponent << " = ";

    while (exponent != 0) {
        result *= base;
        --exponent;
    }
cout<<result;
return 0;
}
