#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
   setlocale(LC_CTYPE, "spanish");
	int n1,n2;
	 
	cout<<"Inserte el numero: "<<endl;
	cin>>n1;	
		cout<<"Inserte el numero: "<<endl;
	cin>>n2;
	 
	
    if(n1>n2){
	
    
    	cout<<"El numero mayor es: "<<n1<<endl;
	}
	


     else{
	 

		cout<<"el numero mayor es: "<<n2<<endl;
	}
     
	
	 
	 


	
	
}
