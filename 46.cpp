#include <iostream>
using namespace std;
 bool inRange(unsigned l, unsigned h, unsigned x)
{
    return (l <= x  && x <= h);
}
 
int main()
{
    inRange(10, 100, 30)? 
    cout << "Yes\n":
    cout  <<"No\n";
    inRange(10, 100, 5)?  
    cout << "Yes\n": 
    cout  <<"No\n";
}
