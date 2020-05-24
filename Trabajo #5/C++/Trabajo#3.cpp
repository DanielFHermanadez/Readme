#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;
void cuenta (int vec[],int t, int n){

	int x=0;
	int l;
	for(int i= 0; i<t; i++){
	
	if(n== vec[i]){
		x++;
		l=vec[i];
	}
}
	cout<<" El numero "<<setw(3)<<l<<" Se repite "<<setw(2)<<x<<" veces "<<endl;
}
void elimina(int vec[], int t, int n){
	for(int i=0; i<t; i++){
		if(n==vec[i]){
			vec[i]=0;
		}
	}
}
int main()
{
	int vec[10];
	srand(time(0));
	int n;
	for(int i=0; i<10; i++){
		vec[i]=1+rand()%15;
		
		}
	for(int i=0; i<10; i++){
		cout<<vec[i]<<" ";
		}cout<<endl;
		
	for(int i=0; i<10; i++){
		n=vec[i];
		if(n!=0){
			cuenta (vec, 10, n);
			elimina(vec, 10, n);
		}
	}
	

}

	
	


		
	
