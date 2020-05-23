#include <iostream>

using namespace std;

int main(){
	
	double numero, resultado, n3;
	int n1, n2;
	 
	cout<<"Inserte el valor del producto : " <<endl;
	cin>>n1;
		cout<<"Inserte la cantidad : " <<endl;
	cin>>n2;
	cout<<"Mas un iva del 16% "<<endl;
	
	numero = (n1*n2);
	resultado = numero*16/100;
	
	n3= numero+resultado;
	cout<<"Su resultado es: "<<n3<<endl;
}

		

