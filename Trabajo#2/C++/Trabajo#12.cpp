#include <iostream>
using namespace std;

int main (){
	int edad,altura,peso;
	
		cout<<"Ingrese su edad porfavor: "<<endl;
	cin>>edad;
		cout<<"Ingrese su estatura porfavor: "<<endl;
	cin>>altura;
		cout<<"Ingrese su peso porfavor: "<<endl;
	cin>>peso;
	
	if(edad<=18){
		cout<<"Cumples con la edad requerida"<<endl;
	}
	
	else {
		cout<< "no cumples con la edad requerida"<<endl;
	}
	
		if(altura>=180){
		cout<<"Cumples con la estatura requerida"<<endl;
	}
	
	else {
		cout<< "no cumples con la estatura requerida"<<endl;
	}
	
		if(peso<=80){
		cout<<"Cumples con el peso requerido"<<endl;
	}
	
	else {
		cout<< "no cumples con el peso requerido"<<endl;
	}
	
	if(edad<=18){
	   (altura>=180);
	   (peso<=80);
	   cout<<"Bienvenido al club"<<endl;
	}
	else{
		cout<<"Lo sentimos intentlo a la proxima"<<endl;
	}
	
     
		
}





