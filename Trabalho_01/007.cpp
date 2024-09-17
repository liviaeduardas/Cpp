/* EXERCÍCIO 07
 Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio R.
  Essa função deve obedecer ao protótipo:
     -> void calc_esfera(float R, float *area, float *volume)
  A área da superfície e o volume são dados, respectivamente, por:
    1. A = 4 * p * R^2
    2. V =  4/3 * p * R^2     */

#include<iostream>
#include<math.h>
using namespace std;

void cal_esfera(float R, float *area, float *volume)
{
	*area= 4 * 3.14 * pow(R,2);
	*volume = 1.33 * 3.14 * pow(R,2);
}

int main()
{
	float ar = 0;
	float vol = 0;
	float raio;
	
	cout << "--- ESFERA: Area da Superfice e Volume ---" << endl;
	cout << "Informe o raio da esfera em cm: ";
	cin >> raio;
	cal_esfera(raio, &ar, &vol);
	cout << "AREA DA SUPERFICE: " << ar << " cm^2" << endl;
	cout << "VOLUME: " << vol << " cm^3";
	
	return 0;
}