#include <iostream>
#include <string>
using namespace std;

int main(){

double pesos, reais, soles;

cout << "Enter number of Colombian Pesos: ";
cin >> pesos;

cout << "Enter number of Brazilian Reais: ";
cin >> reais;

cout << "Enter number of Peruvian Soles: ";
cin >> soles;

double ratePesosToEuro = 4300;
double rateReaisToEuro = 5.25;
double rateSolesToEuro = 4.00;

double eurosFromPesos = pesos / ratePesosToEuro;
double eurosFromReais = reais / rateReaisToEuro;
double eurosFromSoles = soles / rateSolesToEuro;

double totalEuros = eurosFromPesos + eurosFromReais + eurosFromSoles;

cout << "Euros = €" << totalEuros << endl;




    return 0;

}