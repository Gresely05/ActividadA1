#include<iostream>
using namespace std;

int main()
{
	int JAGC_i=0,JAGC_l;
	float JAGC_x,JAGC_s=0;
	cout<<"ingrese el limite l="; cin>>JAGC_l;
	do{
		
	cout<<"ingrese el numero x="; cin>>JAGC_x;
	JAGC_i=JAGC_i+1;
	JAGC_s=JAGC_s+JAGC_x;



	}while(JAGC_i<JAGC_l);
	cout<<"Se ingresaron "<<JAGC_l<<" numeros "<< "que sumaron "<<JAGC_s<<endl;
	return 0;



}
