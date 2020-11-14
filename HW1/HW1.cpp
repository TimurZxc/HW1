
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input N: ";
	do {
		cin >> n;
	} while (n <= 0);


	for (int i = 0; i < n; ++i) {
		for (int p = 0; p < n; p++) {
			for (int j = 0; j < n - i; ++j) {
				cout << " ";
			}
			for (int j = 1; j <= 2 * i - 1; ++j) {
				cout << "*";
			}
			for (int j = 0; j < n - i; ++j) {
				cout << " ";
			}
		}
		cout << endl;
	}


	for (int i = n; i >= 0; --i) {
		for (int p = 0; p < n; p++) {
			for (int j = n - i; j > 0; --j) {
				cout << " ";
			}
			for (int j = 2 * i - 1; j >= 1; --j) {
				cout << "*";
			}
			for (int j = 0; j < n - i; ++j) {
				cout << " ";
			}
		}
		cout << endl;
	}

}
