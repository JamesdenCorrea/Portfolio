#include<iostream>
using namespace std;
int main()
{
	int value;
	string grade;
	
	cout<<"Enter Number";
	cin>>value;
	
	switch (value){
	
	case value >=95 && value <=100:
	grade= "A";
	break;
	
	case value >=90 && value< =94:
	grade= "B";
	break;
		
	case value >=85 && value <=89:
	grade= "C";
	break;
		
	case value >=80 && value <=84:
	grade= "D";
	break;
	
	case value >=75 && value <=79:
	grade= "E";
	break;
	
	default:
		grade="F";
	}
		cout<<"Your Grade is: "<<grade;
		
	return 0;
}
