#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	cout << "Podaj wyraz: ";
	string wyr;
	cin >> wyr;

	int longWyr = wyr.length();

		//cout << longWyr << endl; // check string

	bool value = true;

	for (int i = 0; i <= longWyr / 2; i++) {
		if (wyr[i] != wyr[(longWyr - 1) - i]) {
			value = false;
			break;
		}
	}
	if (value) {
		cout << "yes";
	}
	else {
		cout << "nah";
	}


	return 0;
}