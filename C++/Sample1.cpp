#include <iostream>
using namespace std;

int main()
{
	int sub1,sub2,sub3,sub4,sub5,avg1,avg2,avg3,avg4;
	string num1;
	
	cout<<"Number of students in the class: ";
	cin>>num1;
	cout<<endl;
	
	cout<<"Grade of Student #1 in Subject 1: ";
	cin>>sub1;
	cout<<"Grade of Student #1 in Subject 2: ";
	cin>>sub2;
	cout<<"Grade of Student #1 in Subject 3: ";
	cin>>sub3;
	cout<<"Grade of Student #1 in Subject 4: ";
	cin>>sub4;
	cout<<"Grade of Student #1 in Subject 5: ";
	cin>>sub5;
	
	avg1=(sub1+sub2+sub3+sub4)/4;
	cout<<"Average of student 1 is: "<<avg1<<endl;
	cout<<endl;
	
	cout<<"Grade of Student #2 in Subject 1: ";
	cin>>sub1;
	cout<<"Grade of Student #2 in Subject 2: ";
	cin>>sub2;
	cout<<"Grade of Student #2 in Subject 3: ";
	cin>>sub3;
	cout<<"Grade of Student #2 in Subject 4: ";
	cin>>sub4;
	cout<<"Grade of Student #2 in Subject 5: ";
	cin>>sub5;
	
	avg2= (sub1+sub2+sub3+sub4)/4;
	cout<<"Average of student 2 is: "<<avg2<<endl;
	cout<<endl;
	
	cout<<"Grade of Student #3 in Subject 1: ";
	cin>>sub1;
	cout<<"Grade of Student #3 in Subject 2: ";
	cin>>sub2;
	cout<<"Grade of Student #3 in Subject 3: ";
	cin>>sub3;
	cout<<"Grade of Student #3 in Subject 4: ";
	cin>>sub4;
	cout<<"Grade of Student #3 in Subject 5: ";
	cin>>sub5;

	avg3= (sub1+sub2+sub3+sub4)/4;
	cout<<"Average of student 2 is: "<<avg3<<endl;
	cout<<endl;
	
	avg4=(avg1+avg2+avg3)/3;
	cout<<"========================================"<<endl;
	cout<<"Class Average is: "<<avg4<<endl;
	if(avg4<70){
		cout<<"Class Performance is Poor";
	}else if (avg4<=74){
		cout<<"Class Performance is For Improvement";
	}else if (avg4<=80){
		cout<<"Class Performance is Good";
	}else if(avg4<=90){
		cout<<"Class Performance is Very Good";
	}else if(avg4<=100){
		cout<<"Class Performance is Excellent";
	}
	
	return 0;
}
