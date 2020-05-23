#include <iostream>

using namespace std;

int main(){
	
	double numero, numero1, numero2;
	int n1, n2, n3;
	 
	cout<<"Inserte el numero que desea saber el 30%: " <<endl;
	cin>>n1;
		cout<<"Inserte el numero que desea saber el 60%: " <<endl;
	cin>>n2;
		cout<<"Inserte el numero que desea saber el 90%: " <<endl;
	cin>>n3;

	 
	numero = n1*30/100; 
	numero1 = n2*60/100;
	numero2 = n3*90/100;
	
	cout<<"Su resultado es: " << numero <<endl;
	cout<<"Su resultado es: " << numero1 <<endl;
	cout<<"Su resultado es: " << numero2 <<endl;
	
	
	
	
	
}
