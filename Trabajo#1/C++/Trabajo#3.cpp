#include <iostream>

using namespace std;
int main(void){
	
	double DIS, TSE, VMS, VKH;
	int MIN, SEG, CEN;
	
	cout<<"Ingrese la distancia recorrida en metros: "<< endl;
	cin >> DIS;
	cout<<"Ingrese la cantidad en minutos: "<< endl;
	cin >> MIN;
	cout<<"Ingrese la cantidad en segundos: "<< endl;
	cin >> SEG;
	cout<<"Ingrese la cantidad en centesimas: "<< endl;
	cin >> CEN;
	TSE = (MIN * 60) + SEG + (CEN / 100);
	VMS = DIS / TSE;
	VKH = (VMS * 3600) / 1000;
	
	cout<< "La velocidad en km/h fue: "<< VKH << endl;
}
