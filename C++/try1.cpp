#include<iostream>
using namespace std;
int main()
{
	int prelim,midterm,finals,avg;
	char grade;
	
	cout<<"Input Prelim, Midterm, and Finals:";
	cin>>prelim>>midterm>>finals;
	
	avg= (prelim + midterm + finals)/3;
	cout<<"Your average is:"<<avg<<endl;
   
   if(avg<0 || avg>100) 
   {
     cout << "Invalid Input"<<endl <<"Please Try Again." << endl;
     return 0;
   }

   switch(avg)
   {
     case 100:
    case 99:
    case 98:
    case 97:
    case 96:
    grade = 'A';
    break;
    case 95:
    case 94:
    case 93:
    case 92:
    case 91:
    case 90:
     grade = 'B';
       break;
     			
    case 89:
    case 88:
    case 87:
    case 86:
    case 85:
    grade = 'C';
       break;
       
    case 84:
    case 83:
    case 82:
    case 81:
    case 80:
       grade = 'D';
       break;
    case 79:
    case 78:
    case 77:
    case 76:
    case 75:
       grade = 'E';
       break;
     default:
       grade = 'F';
   }

   cout << "Your Grade is: " << grade << endl; 

	
	return 0;
}
