// if create a senario that is there are no limit for taking input, in that case we can use EOF
// setprecision() means the number of decimal places after the dot. its header file is <iomanip>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a;
    while (cin >> a)
    {
        cout << a << endl;
    }
    
    double b;
    cin >> b;
    cout << fixed << setprecision(2) << b << endl;
    
    return 0;
}