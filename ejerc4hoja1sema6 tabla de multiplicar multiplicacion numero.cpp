/*

Escriba un programa en C++ que solicite el ingreso de un número entre el 1 y el 9 y
muestre la tabla de multiplicar del número ingresado.
Ejemplo:
Ingrese un numero: 8
8 x 1 = 8
8 x 2 = 16
8 x 3 = 24
8 x 4 = 32
8 x 5 = 40
8 x 6 = 48
8 x 7 = 56
8 x 8 = 64
8 x 9 = 72
8 x 10 = 80

*/
#include <iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;

int ingresenum()

{
	int num;
	cout << "ingrese numero: "; cin >> num;
	while (num <1 ||num>9)
	{cout << "ingrese numero: "; cin >> num;}
	return num;
}


void generatabla(int num)

{
	int i = 1;
	while (i <= 10)
	{
		cout << num << "x" << i << " = " << num*i << endl;
		i++;
	}
			
}
int main()
{
	int n;
	n = ingresenum();
	
	generatabla(n);
	_getch();
}



