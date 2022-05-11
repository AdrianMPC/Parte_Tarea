#include <iostream>
using namespace std;

int pasajes;
float descuento, total, impdescuento, precio, cantidad_chocolates;

void totalepico()
{
	total = pasajes * precio;
}

void descuentoawesome()
{
	descuento = total * 0.07;
}

void impdescuentoawesome()
{
	impdescuento = total - descuento;
}

void cantchocolates()
{
	cantidad_chocolates = pasajes * 3;
}

int main(){
	cout<<"Antes de empezar, digame cuanto cuesta el pasaje: "<<"S/.";cin>>precio;
	cout<<"\n";cout<<"Bienvenido, ¿Cuantos pasajes comprara?"<<"\n"; cin>>pasajes;
	totalepico();
	descuentoawesome();
	impdescuentoawesome();
	cantchocolates();
	cout<<"Total neto: "<<total<<"\n";
	cout<<"Descuento: "<<descuento<<"\n";
	cout<<"Total con descuento: "<<impdescuento<<"\n";
	cout<<"Chocolates gratis: "<<cantidad_chocolates<<"\n";
}
