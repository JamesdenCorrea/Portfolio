#include <iostream>
#include <iomanip>

using namespace std;
void printHeader(int start, int end) {

    cout << setw(4) << " ";
    for (int firstrow = start; firstrow <= end; firstrow++) { 
	cout << setw(3) << firstrow << " ";
    }
    cout << endl;
    cout << setw(4) << " ";
    for (int secondrow = start; secondrow <= end; secondrow++) { 
    }
    cout << endl;
}
int main() {
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

