#include <iostream>
using namespace std;

int main()
{
	int n;
		
	do{
		cout<<"Enter a number (0 to end):";
		cin>>n;
		cout<<"You Entered:"<<n<<endl;
	}
	while (n!=0);
	
	return 0;
}
