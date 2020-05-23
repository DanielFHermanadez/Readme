#include <iostream>

using namespace std;
int main(){
	int a;
	
	cout<<"Cuantas personas hay en el salon?"<<endl;
	cin>>a;
	cout<<"Introduzcan sus edades porfavor: "<<endl;
	for(int i=0;i<a;i++)
	{
	
	int edad[a];
	
	cin>>edad[i];
	
	if(edad[i]>=18)
	{
		cout<<"es mayor de edad"<<endl;
	}
	else
	{
		cout<<"Es menor de edad<<"<<endl;
	}
}
}
