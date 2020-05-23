#include <iostream>

using namespace std;

int main(){
	
	double numero, numero1, numero2;
	int n1, n2, n3,n4;
	 
	cout<<"Inserte el valor unitario: " <<endl;
	cin>>n1;
		cout<<"Inserte la cantidad: " <<endl;
	cin>>n2;
	 
	numero = n1*n2; 

if(numero<20000){
		numero1= numero*10/100;
	cout<<"Tiene descuento del 15%: " <<endl;
	cout<<"su valor total es: "<< numero<<endl;
}
else{
	cout<<"no tiene descuento: "<<endl;
	cout<<"Gracias por su compra: "<<endl;
	
}
if(numero>20000){
		numero1= numero*35/100;
	cout<<"Tiene descuento del 35%: " <<endl;
	cout<<"su valor total es: "<< numero1<<endl;
}
else{
	cout<<"no tiene descuento: "<<endl;
	cout<<"Gracias por su compra: "<<endl;
}

}
