#include<iostream>
using namespace std;
int main()
{
   int score ;
   char grade;

   cout << "Enter Your Grade (0-100): ";
   cin >> score;
   
   if(score<0 || score>100) 
   {
     cout << "Invalid Input"<<endl <<"Please Try Again." << endl;
     return 0;
   }

   switch(score/100)
   {
     case 10:
     case 9:
       grade = 'A';
       break;
     case 8:
       grade = 'B';
       break;
     case 7:
       grade = 'C';
       break;
     case 6:
       grade = 'D';
       break;
     case 5:
       grade = 'E';
       break;
     default:
       grade = 'F';
   }

   cout << "Your Grade is: " << grade << endl; 

   return 0;
}
