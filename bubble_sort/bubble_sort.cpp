#include <iostream>
using namespace std;


int a[20];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "===================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "===================" << endl;
	
	for (int 1 = 0; 1 < n; 1++) {
		cout << "Data ke-" << (1 + 1) << ": ";
		cin >> a[1];
	}
}