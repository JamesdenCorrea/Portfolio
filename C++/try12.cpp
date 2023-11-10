#include<iostream>
using namespace std;
int main()
{
	int Arr[100],n,i,small,large;
	cout<<"Enter 10 Scores:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"Score: "<<i+1<<":";
		cin>>Arr[i];
	}
	small=Arr[0];
	large=Arr[0];
	for(i=1;i<10;i++)
	{
		if(Arr[i]<small)
			small=Arr[i];
		if(Arr[i]>large)
			large=Arr[i];
	}
	cout<<"\n Lowest Score:"<<small;
	cout<<"\n Highest Score:"<<large;
    
	return 0;
}
