#include <iostream>
using namespace std;
int main(){
	double compra, valortotal;
	
	cout<<"Ingrese el valor de la compra: "<<endl;
	cin>>compra;
	
	if(compra>50000){
		valortotal=compra-(compra*0.50);
	}
	
	else if(compra>= 10000 && compra<20000){
				valortotal=compra-(compra*0.10);
	}
	
	else if (compra>=20001 && compra<=50000){
				valortotal=compra-(compra*0.30);
	}
	else{
		valortotal=compra;
	}
	cout<<"el valor total es de: "<<valortotal<<endl;
}
