#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>

using namespace std;

int main(){
	double r;
	double a;
	double b;
	double x[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	double y[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	string k;


	cout << "r = "; cin >> r;


	for (int i = 0; i <= 9; i++) {
		cout << "x" << i << "=" << endl; cin >> x[i];
	}

	for (int i = 0; i <= 9; i++) {
		cout << "y" << i << "=" << endl; cin >> y[i];
	}

	cout << "------------------------------\n";
	cout << "|" << setw(4) << setprecision(2) << "n" << "|" << setw(7) << setprecision(2) << "x" << "|" << setw(7) << setprecision(2) << "y" << "|" << setw(7) << setprecision(2) << "res" << "|" << "\n" << "------------------------------\n";

	for (int i = 0; i <= 9; i++) {
		if ((y[i] >= x[i] && pow(y[i] + r, 2) <= r * r - pow(x[i] + r, 2)) || ((y[i] <= x[i] && pow(y[i] - r, 2) <= r * r - pow(x[i] - r, 2)))) {
			k = "Yes";
			cout << "|" << setw(4) << setprecision(2) << i << "|" << setw(7) << setprecision(2) << x[i] << "|" << setw(7) << setprecision(2) << y[i] << "|" << setw(7) << setprecision(2) << k << "|" << "\n" << "------------------------------\n";
		} 
		else {
			k = "No";
			cout << "|" << setw(4) << setprecision(2) << i << "|" << setw(7) << setprecision(2) << x[i] << "|" << setw(7) << setprecision(2) << y[i] << "|" << setw(7) << setprecision(2) << k << "|" << "\n" << "------------------------------\n";
		}
	}

	cout << "min = \n"; cin >> a;
	cout << "max = \n"; cin >> b;

	if (a > b) {
		a, b = b, a;
	}

	srand((unsigned)time(NULL));
	for (int i = 0; i <= 9; i++) {
		x[i] = a + rand() * (b - a) / RAND_MAX; ;
	}

	for (int i = 0; i <= 9; i++) {
		y[i] = a + rand() * (b - a) / RAND_MAX; ;
	}

	cout << "------------------------------\n";
	cout << "|" << setw(4) << setprecision(2) << "n" << "|" << setw(7) << setprecision(2) << "x" << "|" << setw(7) << setprecision(2) << "y" << "|" << setw(7) << setprecision(2) << "res" << "|" << "\n" << "------------------------------\n";

	for (int i = 0; i <= 9; i++) {
		if ((y[i] >= x[i] && pow(y[i] + r, 2) <= r * r - pow(x[i] + r, 2)) || ((y[i] <= x[i] && pow(y[i] - r, 2) <= r * r - pow(x[i] - r, 2)))) {
			k = "Yes";
			cout << "|" << setw(4) << setprecision(2) << i << "|" << setw(7) << setprecision(2) << x[i] << "|" << setw(7) << setprecision(2) << y[i] << "|" << setw(7) << setprecision(2) << k << "|" << "\n" << "------------------------------\n";
		}
		else {
			k = "No";
			cout << "|" << setw(4) << setprecision(2) << i << "|" << setw(7) << setprecision(2) << x[i] << "|" << setw(7) << setprecision(2) << y[i] << "|" << setw(7) << setprecision(2) << k << "|" << "\n" << "------------------------------\n";
		}
	}



	return 0;
}