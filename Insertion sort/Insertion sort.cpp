#include <iostream>
using namespace std;

int arr[20]				// Membuat Array dengan panjang 20
int n;					// Membuat Variable inputan n

void input() {			// Procedure input
	while (true)
	{
		cout << "Masukkan jumlah data pada array : "; // Membuat inputan jumlah elemen array
		cin >> n;									// Memanggil variable inputan n

		if (n <= 20) {								// Membuat kondisi n tidak lebih dari 20
			break;
		}
	}
}