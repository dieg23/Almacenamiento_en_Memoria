#include<iostream>

//Diego Gomez Torres

using namespace std;

int arreglo[]={1,2,3,4,5,6,7,8,9,10};
int *p;
int n2;
int suma=0;
float promedio;

int main(int argc, char** argv)
{
	for(int i=0; i<10;i++)
	{
		p=&arreglo[i];
		cout<<"Arreglo de direccion: "<<p<<endl;
		cout<<"Memoria char: "<<&n2<<endl;
		cout<<"Arreglo valor: "<<*p<<endl;
		p++;
		cout<<"Arreglo valor: "<<*p<<endl<<endl;
		suma+=arreglo[i];
	}
	cout<<endl<<"La suma de lo elem. es: "<<suma<<endl;
	promedio=suma/10;
	cout<<"Promedio: "<<promedio<<endl<<endl;
	return 0;
}
