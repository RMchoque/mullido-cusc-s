#include <iostream>
#include <sstream>
#define cantMaxima 50

const int mayoresQue = 100;
const int menoresQue = -10;

using namespace std;

int main()
{
	int numIngresados[cantMaxima];
    int promedioNumeros = 0;
	int sumaNumeros = 0;
	int contadorNumeros = 0;
	int entrada = 0;

	for (int i = 0; i < cantMaxima; i++)
	{
		cout << "INGRESA UN NUMERO: ";
		cin >> numIngresados[i];

		if (numIngresados[i] > mayoresQue)
		{
			promedioNumeros = promedioNumeros + numIngresados[i];
			contadorNumeros++;

		}

		else  if (numIngresados[i] < menoresQue)
		{
			sumaNumeros = numIngresados
			[i] + sumaNumeros;
		}
	}
	cout << "EL PROMEDIO DE LOS NUMEROS MAYORES QUE 100 ES: " << (promedioNumeros/contadorNumeros) << endl;
	cout << "LA SUMA DE LOS NUMEROS MENORES QUE -10 ES: " << sumaNumeros;
}
