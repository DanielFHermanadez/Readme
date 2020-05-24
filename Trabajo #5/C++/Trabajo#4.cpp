#include <iostream>

using namespace std;
int n1, n2,i;
int main(){
	
	cout<<"Ingrese el numero limite superior: ";
	cin>>n1;
	cout<<"Ingrese el numero limite inferior: ";
	cin>>n2;
	n1--;
	while(n1 > n2){
	


	if(n1 % 2 ==1){
		cout<<n1<<" ";
		i--;
	}
	n1--;
}
	cout<<"\n\nEn total hay "<< i <<" Numeros impares ";
	
	}
