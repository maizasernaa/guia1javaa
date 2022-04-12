// guia lab 3 ejercicio 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int N;
	int positivos = 0;
	double num;
	
	cout << "ingresar la cantidad:"<<endl;
	cin >> N;
	for (int i = 1; i <= N;i++) {
		cout << "ingrese un numero:" << endl;
		cin >> num;
		if (num > 0) {
			positivos++;
		}
	}
	cout << "La cantidad de numeros positivos es:" << positivos<<endl;
}

