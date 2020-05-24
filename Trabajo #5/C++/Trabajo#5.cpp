#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int n, fac =1;
	
	cout<<"Digite un numero: ";
	cin>>n;
	 
	for(int i=1;i<=n;i++){
	 	fac*=i;
	 }
	 cout<<"\nEl factorial del numero es: "<<fac<<endl;
	 
}
