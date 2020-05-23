#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
   setlocale(LC_CTYPE, "spanish");
	double numero;
	int fn;
	 
	cout<<"Inserte el numero: "<<endl;
	cin>>fn;
	 
	numero= fn/2; 
	
		
    if(numero>100){
	
    
    	cout<<"La mitad del numero es mayor de 100: "<<numero;
	
}


     else{
	 

		cout<<"La mitad del numero es menor de 100: "<<numero <<endl;
	}
     
	
	 
	 


	
	
}
