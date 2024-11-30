#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    // normal way
    if (a < b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }
    cout << "\n";

    cout << min(a, b) << endl; // min
    // if there are multiple values then you need to use ({}) second bracket
    cout << min({2, 1, 42, 13, 42}) << endl;
    cout << max(a, b) << endl; // max
    // swap normal way 
    // int temp = a;
    // a = b;f
    // b = temp;

    swap(a, b); // swap
    cout << a << " " << b << endl; //swap


    return 0;
}