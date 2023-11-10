#include <iostream>
using namespace std;
int main(){
	int a,b;
	
	
	cout<<"Enter the START and END number:";
	cin>>a>>b;
	
	for(int i = a, n = b; i>=b; i--){
		cout<<i<<", \n";
	}
	cout<<"FIRE!";
	return 0;
}
