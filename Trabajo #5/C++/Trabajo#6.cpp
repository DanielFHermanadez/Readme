#include <iostream>

using namespace std;
int va, na, iva, st, v, des;
int main(){
	cout<<"Ingrese el numero de articulos: ";
	cin>>na;
	cout<<"Ingrese el valor de los articulos: ";
	cin>>va;
	cout<<"Desea ingresar otro articulo?"<<"Digite 1 si o 2 para no ";
	cin>>v;
	st=va*na;
	while (v==1){
		cout<<"Ingrese el numero de articulos: ";
		cin>>na;
		cout<<"Ingrese el valor de articulos: ";
		cin>>va;
		st= st+(va*na);
		cout<<"Desea ingresar otro articulo? "<<"Digite 1 si o 2 para no ";
		cin>>v;
	}
	iva=st*0.16;
	cout<<"Cual es su forma de pago? "<<"Digite 1 credito o 2 efectivo ";
	cin>>v;
	if(v==1){
		cout<<"Su compra fue de: "<<st<<"\nIva = "<<iva<<" \nTotal= "<<st+iva;
	}
	else{
		cout<<"Su compra fue de: "<<st<<" \nIva= "<<iva<<"\nDescuento: "<<(st+iva)*0.16;
	}
		
	}
