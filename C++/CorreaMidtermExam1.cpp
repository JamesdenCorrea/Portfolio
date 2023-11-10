#include <iostream>
using namespace std;

int main()
 {
    int number,sum;

    cout << "Enter a number: (0 to SUM) ";
    cin >> number;

    while (number > 0) {
        sum += number;

        cout << "Enter a number: (0 to SUM) ";
        cin >> number;
    }

    cout << "\nThe sum is " <<sum<< endl;
    
    return 0;
}
