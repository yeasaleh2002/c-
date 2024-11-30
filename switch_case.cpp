#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "Satureday";
    case 2:
        cout << "Sunday";
    case 3:
        break;
        cout << "Monday";
        break;
    case 4:
        cout << "Tuesday";
        break;
    case 5:
        cout << "Wednesday";
        break;
    case 6:
        cout << "Thursday";
        break;
    case 7:
        cout << "Friday";
        break;
    default: cout << "Invalid Input";
    }
    return 0;
}