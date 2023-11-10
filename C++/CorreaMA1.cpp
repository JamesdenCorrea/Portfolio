#include <iostream>
using namespace std;

int main()
{
	int n1,n2,n3,n4,total,total2;
	cout<<"Enter 1st two integers:";
	cin>>n1 >>n2;
	cout<<"Enter 2nd two integers:";
	cin>>n3>>n4;
	
	total=n1+n2;
	total2=n3+n4;
	
	cout<<"Total of 1st two numbers is: "<<total<<endl;
	cout<<"Total of 2nd two numbers is: "<<total2<<endl;
	
	if (total==total2)
	cout<<total<<" is equal to "<<total2<<endl;
	
	if (total!=total2)
	cout<<total<<" is not equal to "<<total2<<endl;
	
	if (total<total2)
	cout<<total<<" is lessthan to "<<total2<<endl;
	
	if(total<=total2)
	cout<<total<<" is lessthan or equal "<<total2<<endl;
	
	if (total>=total2)
	cout<<total<<" is greaterthan or equal to "<<total2<<endl;

	if (total>total2)
	cout<<total<<" is greaterthan to "<<total2<<endl;
	
	return 0;
}
