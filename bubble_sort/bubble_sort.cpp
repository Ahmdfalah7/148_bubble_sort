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
	
	for (int i = 0; 1 < n; i++) {
		cout << "Data ke-" << (1 + 1) << ": ";
		cin >> a[1];
	}
}

void bubbleSortArray() {
	for (int i = 1; 1 < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void unsorted() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Elemen Array yang belum tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
	cout << endl;
}

void display() {
	cout << endl;
	cout << "==================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
	cout << endl;
}

