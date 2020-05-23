//Programa que permita determinar cuántos hombres y mujeres hay en un curso de 25 estudiantes.
#include <iostream>

using namespace std;
int main(){
	double Hombres,Mujeres;
	int a,b,c;
	
	cout<<"Cuantos estudiantes hay en su salon"<<endl;
	cin>>a;
		cout<<"Introduzcan el numero de hombres: "<<endl;
		cin>>b;
		cout<<"Introduzcan el numero de mujeres: "<<endl;
		cin>>c;
	for(int i=0;i<2;i++)
	{
	
	int Estudiantes[a];
	
	if(Estudiantes[i]<25)	
{
	Hombres=(b*c)/25;
		cout<<"En el salon los hombres son"<<Hombres<<endl;
}
	else
	Mujeres=(b*c)/25;
	{
		cout<<"En el salon las mujeres son:"<<Mujeres<<endl;
	}
}
}
