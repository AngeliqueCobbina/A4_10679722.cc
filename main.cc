
#include <iostream>
#include <cmath>
using namespace std;

// 10679722
// Angelique Cobbina

// this is a gcd method
int gcd (int x,int y)
{
    int small = min(x,y);
    int big = max(x,y);
    if (x==y)
    {
        return x;
    }else
    return gcd(small, big-small);

}

int main()
{

    int x,y;
    cout<< "Enter two numbers"<< endl;
    cin >> x >> y ;

    cout << "Greatest common divisor is:" << gcd(x,y)<<endl;
    return 0;
}
