#include <iostream>
using namespace std;
void f(int n)
{
    if (n != 0)
    {
        if (n % 2 == 0)
        {
            cout << n * n * n <<endl;
        }
        f(n-1);
    }
}
main()
{
    f(6);
}