#include <iostream>

using namespace std;

int main(){
	
	double numero, resultado,resultado2, n8, iva;
	int n1, n2, n3, n4;
	 
	cout<<"Inserte el salario : " <<endl;
	cin>>n1;
		cout<<"Inserte los dias trabajados : " <<endl;
	cin>>n2;
    		cout<<"Se le descuenta un iva del 15% " <<endl;
			cout<<"Se le descuenta un iva del 10%  " <<endl; 
	
	numero = n1*n2;
	resultado = numero*15/100;
	resultado2= resultado*10/100;

	
	cout<<"Su resultado es: "<<resultado2<<endl;
}

		

