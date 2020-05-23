#include <iostream>

using namespace std;
int main(){

    int estatura,acumulador=0;
    
    for(int i=1; i<=18; i++)
	{
    	
    	cout<<"Porfavor ingresar la estatura: "<<endl;
    	cin>>estatura;
    	acumulador = acumulador + estatura;
	}
	
	cout<<"El promedio de edad de todo el grupo es de: "<< acumulador /18;
	
    if(acumulador<140)
{
	cout<<"\nEstudiantes muy bajos"<<endl;
}
else if(acumulador>170)
		cout<<"\nEstudiantes muy altos"<<endl;
		
	else
	{
		(acumulador>140<170);
		cout<<"\nEstudiantes normales"<<endl;
	}
}
