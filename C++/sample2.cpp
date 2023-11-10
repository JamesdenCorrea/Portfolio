#include <iostream>
using namespace std;

int main()
{
int num1;
cout<<"Number of Students in the Class?: "<<endl;
cin>>num1;

if (num1<0){
	cout<<"Invalid input: Please Enter nonnegative integer";
}

return 0;	
	
}
