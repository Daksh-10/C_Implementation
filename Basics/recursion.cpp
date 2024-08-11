#include <iostream>
using namespace std;
// Basic factorial recursive function
int factorial(int val)
{
    if (val < 2)
    {
        return 1;
    }
    return val * factorial(val - 1);
}

int fibonacci(int term)
{
    if (term < 2)
    {
        return term;
    }

    int val = fibonacci(term - 1) + fibonacci(term - 2);
    return val;
}

int main()
{
    cout << "The factorial of 7 is :" << factorial(7);
    int a;
    cout << "write the term you fibonacci value for " << endl;
    cin >> a;
    cout << "The term on " << a << "place is " << fibonacci(a);
    return 0;
}