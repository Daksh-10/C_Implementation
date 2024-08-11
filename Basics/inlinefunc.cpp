#include <iostream>
using namespace std;
// Inline function

inline int product(int a, int b)
{
    static int d = 0;
    d = d + 1;
    int c = a * b + d;
    return c;
}

float moneyrec(int money, float factor = 1.04)
{
    return money * factor;
}
int main()
{
    // int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is"<<product(a,b);
    // cout<<"The product of a and b is"<<product(a,b);
    // cout<<"The product of a and b is"<<product(a,b);
    // cout<<"The product of a and b is"<<product(a,b);
    // cout<<"The product of a and b is"<<product(a,b);
    // cout<<"The product of a and b is"<<product(a,b);
    int money;
    scanf("%d", &money);
    cout << "If you have " << money << "You will recieve " << moneyrec(money, 1.1) << "after an year";
    return 0;
}