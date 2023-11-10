#include <iostream>
using namespace std;

int main ()
{
	double uk, eu, us, cm;
	
	cout<<"Input size in UK:";
	cin>>uk;	
	
	if (uk == 1) {
		eu = 34;
		us = 1.5;
		cm = 20;
	} else if (uk == 2) {
		eu = 34.5;
		us = 2.5;
		cm = 20.5;
	}else if (uk == 2.5) {
		eu = 35;
		us = 3;
		cm = 21;
	}else if (uk == 3) {
		eu = 35.5;
		us = 3.5;
		cm = 21.5;
	}else if (uk == 3.5) {
		eu = 36;
		us = 4;
		cm = 22;
	}else if (uk == 4) {
		eu = 36.5;
		us = 4.5;
		cm = 22.5;
	}else if (uk == 4.5) {
		eu = 37;
		us = 5;
		cm = 23;
	}else if (uk == 5) {
		eu = 37.5;
		us = 5.5;
		cm = 23.5;
	}else if (uk == 5.5) {
		eu = 38;
		us = 6;
		cm = 24;
	}else if (uk == 6) {
		eu = 39;
		us = 6.5;
		cm = 24.5;
	}else if (uk == 6.5) {
		eu = 39.5;
		us = 7;
		cm = 25	;
	}else if (uk == 7) {
		eu = 40;
		us = 7.5;
		cm = 25.5;
	}else if (uk == 7.5) {
		eu = 40.5;
		us = 8;
		cm = 26;
	}else if (uk == 8) {
		eu = 41;
		us = 8.5;
		cm = 26.5;
	}else if (uk == 8.5) {
		eu = 42;
		us = 9;
		cm = 27;
	}else if (uk == 9) {
		eu = 43;
		us = 9.5;
		cm = 27.5;
	}else if (uk == 9.5) {
		eu = 44;
		us = 10;
		cm = 28;
	}else if (uk == 10) {
		eu = 44.5;
		us = 10.5;
		cm = 28.5;
	}else if (uk == 10.5) {
		eu = 45;
		us = 11;
		cm = 29;
	}else if (uk == 11) {
		eu = 45.5;
		us = 11.5;
		cm = 29.5;
	}else if (uk == 11.5) {
		eu = 46;
		us = 12;
		cm = 30;
	}else if (uk == 12) {
		eu = 46.5;
		us = 12.5;
		cm = 30.5;
	}else if (uk == 12.5) {
		eu = 47;
		us = 13;
		cm = 31;
	} else {
		cout<<"--------------------------------"<<endl;
		cout<<"Invalid Shoe size."<<endl;
		cout<<"Please input the right size.";
		return 0;
	}
	
	cout<<"EU=" <<eu;
	cout<<" US="<<us;
	cout<<" CM="<<cm;

	return 0;
}
