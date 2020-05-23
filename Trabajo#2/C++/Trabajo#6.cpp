#include <iostream>
using namespace std;
int main(){
    double notas;
	int n1,n3,n4,n5;
	char nombre[30];
	char materia[30];
	 
	cout<<"Inserte el codigo del estudiante:"<<endl;
	cin>>n1;
    cout<<"Ingrese su nombre"<<endl;
    cin>>nombre;
		cout<<"Ingrese la nota 1: "<<endl;
	cin>>n3;
			cout<<"Ingrese la nota 2: "<<endl;
	cin>>n4;
			cout<<"Ingrese la nota 3: "<<endl;
	cin>>n5;
	cout<<"Ingrese la materia"<<endl;
    cin>>materia;
    
        notas= n3+n4+n5/3;
	if (notas>=3.5){
	cout<<"El resultado es aprobado: "<<notas<<endl;
}

else{
	cout<<"El resultado es no aprobado: "<<notas<<endl;
}

   cout<<"\nSu codigo es: "<<n1<<endl;
    cout<<"\nSu nombre es : "<<nombre<<endl;
    cout<<"\nLa materia es : "<<materia<<endl;
    
    
	}
