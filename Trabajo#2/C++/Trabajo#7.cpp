#include <iostream>

using namespace std;

int main(){
	
	double numero, numero1, numero2;
	int n1, n2, n3;
	 
	cout<<"Inserte el valor unitario: " <<endl;
	cin>>n1;
		cout<<"Inserte la cantidad: " <<endl;
	cin>>n2;


	 
	numero = n1*n2; 

if(numero>100000){
		numero1= numero*20/100;
	cout<<"Tiene descuento del 20%: " <<endl;
	cout<<"su valor total es: "<< numero1<<endl;
}
else{
	cout<<"no tiene descuento: "<<endl;
	cout<<"Gracias por su compra: "<<endl;
}

}
