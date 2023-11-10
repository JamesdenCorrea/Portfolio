#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number to start countdown: ";
	cin>>n;
	
	while(n>0)
	{
		cout<<n<<", "<<endl;
		--n;
		
	}
	
	return 0;
	
}
