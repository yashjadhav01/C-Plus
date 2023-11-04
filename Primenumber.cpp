#include <iostream>
using namespace std;

int main()
{
    int i, n;
    bool is_prime = true;
    cout << "Enter an Integer:";
    cin >> n;

    if (n == 0 || n == 1)
    {
        is_prime = false;
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            
        is_prime = false;
    }
    if (is_prime)
        cout << "It is a prime number";
    else
        cout << "Not a prime number";

    return 0;
}