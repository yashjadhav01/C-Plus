#include <iostream>
using namespace std;

int main()
{

    string food = "Pizza"; 
    string &meal = food;

    cout << food << "\n"; // Outputs Pizza
    cout << meal << "\n"; // Outputs Pizza

     cout << &food << "\n"; // Outputs Pizza
    cout << &meal << "\n"; // Outputs Pizza

    return 0;
}
