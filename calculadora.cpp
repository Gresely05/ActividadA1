//Programa que presenta las operaciones básicas
//Creado por Stalin Francis 
//Fecha: 14-09-2022

#include<iostream>
using namespace std;

int main()
{
	float JAGC_x,JAGC_y,JAGC_s,JAGC_m,JAGC_d,JAGC_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de x=:";
	cin>>JAGC_x;
	cout<<"Ingrese en valor de y=:";
	//Operaciones 
	cin>>JAGC_y;
	JAGC_s=JAGC_x+JAGC_y;
	JAGC_m=JAGC_x*JAGC_y;
	JAGC_d=JAGC_x/JAGC_y;
	JAGC_r=JAGC_x-JAGC_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<JAGC_x<<" + "<<JAGC_y<<" = "<<JAGC_s<<endl;
	cout<<"Las multiplicacion de "<<JAGC_x<<" * "<<JAGC_y<<" = "<<JAGC_m<<endl;
	cout<<"Las division de "<<JAGC_x<<" / "<<JAGC_y<<" = "<<JAGC_d<<endl;
	cout<<"Las resta de "<<JAGC_x<<" - "<<JAGC_y<<" = "<<JAGC_r<<endl;
	return 0 ;

}

