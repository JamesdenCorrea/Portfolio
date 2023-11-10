#include <iostream>

using namespace std;

int main()
{
    int start;
    int end;
    cout << "Enter a number/size: " << endl; cin >> start;
    cout << "Enter a row and column: " << endl;
    cin >> end;
    for (int i = start; i <= end; i++) {
        if (i == start) {
            printHeader(start, end);
        }

        for (int j = start; j <= end; j++) {


            if (j == start) {

                cout << setw(3)<<  i << "";

            }
         cout << setw(3) << (i * j) << " ";
        }
       cout << endl;
    }
    return 0;

}
