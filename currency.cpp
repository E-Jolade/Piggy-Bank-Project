#include <iostream>
#include <string>

using namespace std;

int main() {
	double pesos;
	double reais;
	double soles;

	double dollars;

	cout << "Enter number of Colombian Pesos: ";
	cin >> pesos;
	cout << "Enter number of Brazilian Reais: ";
	cin >> reais;
	cout << "Enter number of Peruvian Soles: ";
	cin >> soles;

	//Pesos Conversion Rate: .00025
	//Reais Conversion Rate: .19
	//Soles Conversion Rate: .26

	double convertP = .00025;
	double convertR = .19;
	double convertS = .26;

	dollars = (pesos * convertP) + (reais * convertR) + (soles * convertS);

	cout << "US Dollars = $" << dollars;
	return 0;
}