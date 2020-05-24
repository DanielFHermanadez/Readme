#include <iostream>
using namespace std;
int num,maximo,minimo, cantidades;
int main(){
	cout<<"Ingrese cantidad de numeros ";
	cin>>cantidades;
	for(int i=0; i<cantidades;i++){
	
	
		cout<<"Ingrese los numeros ";
		cin>>num;
		if(num>maximo)
		{
			maximo=num;
		}
		else if(num<=minimo)
		{
			minimo=num;
			
		}
	}
	cout<<"maximo es "<<maximo<<endl;
	cout<<"minimo es "<<minimo;
}
