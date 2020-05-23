#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
   setlocale(LC_CTYPE, "spanish");
	double edad;
	int fc, fn;
	 
	cout<<"inserte el año actual: " <<endl;
	cin>>fc;
	cout<<"inserte la fecha de nacimiento: "<<endl;
	cin>>fn;
	 
	edad = fc-fn; 
	cout<<"su edad actual es: " << edad <<endl;
	
	
}
