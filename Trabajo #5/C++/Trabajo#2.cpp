#include <iostream>
#include<math.h>
using namespace std;
int n, n4, n5,o,resultado1=0,resultado2=0,resultado3=0,total1,total2,total3;
int main(){
	cout<<"Ingrese el numero: ";
	cin>>n;
	cout<<"Desea ingresar otro numero?"<<"Digite 1 si o 2 para no ";
	cin>>o;
	while (o==1){
		cout<<"Ingrese el numero: ";
		cin>>n;
		cout<<"Desea ingresar otro numero? "<<"Digite 1 si o 2 para no ";
		cin>>o;
	}
	resultado1=(pow(n,2)-1);
	total1=resultado1*resultado1;
	cout<<"El cubo es: "<<total1<<endl;
		resultado2=(pow(n,4)-1);
		total2=resultado2/4;
	cout<<"la cuarta parte es:  "<<total2<<endl;
		resultado3=(pow(n,5)-1);
		total3=resultado3/5;
	cout<<"la quinta parte es: "<<total3<<endl;
	}
