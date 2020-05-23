#include <iostream>

using namespace std;
int main(){

    int edad,acumulador=0;
    
    for(int i=1; i<=15; i++)
	{
    	
    	cout<<"Porfavor ingresar la edad: "<<endl;
    	cin>>edad;
    	acumulador = acumulador + edad;
	}
	
	cout<<"El promedio de edad de todo el grupo es de: "<< acumulador /15;
}
