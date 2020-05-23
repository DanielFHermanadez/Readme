#include <iostream>

using namespace std;
int main(){
	double iva,ValorTotal,Resultado;
	int a,b,c;
	
	cout<<"Ingresar los articulos"<<endl;
	cin>>a;
		cout<<"Ingresar la cantidad: "<<endl;
		cin>>b;
		cout<<"Ingresar el valor unitario: "<<endl;
		cin>>c;

	if(iva=b*c*16/100){
		cout<<"El valor del iva es: "<<iva<<endl;
}
	{
		Resultado=c+iva;
		cout<<"El valor final es: "<<Resultado<<endl;
}
	
}

