#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){


	cout << "Podaj liczbe: ";
	int number;
	cin >> number;

	int resztaZDzielenia;
	int kwadrat = 0;
	int wynik = 0;

	while (number > 0) {
		resztaZDzielenia = number % 10;
		wynik = resztaZDzielenia;
		kwadrat = pow(wynik, 2);
		cout << kwadrat << endl;

		number = number / 10;
	}

	return 0;
}
