#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
   setlocale(LC_CTYPE, "spanish");
	double edad;
	int fn;
	 
	cout<<"inserte la fecha de nacimiento: "<<endl;
	cin>>fn;
	 
	edad = 2020-fn; 
	
	cout<<"su edad actual es: " << edad <<endl;


		
    if(edad>=18){
	
    
    	cout<<"Es mayor de edad";
	}
	


     else{
	 

		cout<<"es menor de edad"<<endl;
	}
     
	
	 
	 


	
	
}
