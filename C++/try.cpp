#include <iostream>
using namespace std;

int main( )
{
int numberPeople;
float size, totalSize;
float averageSize;

//initialize
totalSize = 0;
numberPeople = 0;

//loop
while (size > 0)
{
cout << "Please enter next persons shoe size: ";
cin >> size;

//Update totals
totalSize += size;
numberPeople++;
}//End of loop

//Display the number of people
cout << "The number of people is " << numberPeople << endl;
{

//Average 0.5 is added in order to round off
if (numberPeople > 0)
	averageSize = int (totalSize / numberPeople + 0.5);
else
	averageSize = 0;

cout << "The average shoe size is " << averageSize << endl;
}

return 0;
}

