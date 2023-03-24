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
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; // Menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;									// Membuat jarak per baris program
	cout << "=====================" << endl;			// Membuat tampilan susunan data elemen array
	cout << "Masukkan Elemen Array" << endl;			// Membuat tampilan susunan data elemen array
	cout << "=====================" << endl;


	for (int i = 0; i < n; i++)							// Menggunakan perulangan for untuk menyimpan data array
	{
		cout << "Data ke-" << (i + 1) << ": ";			// Memasukkan atau menginputkan nilai data ke n
		cin >> arr[i];									// Menyimpan nilai data n k edalam array arr
	}
}

void insertionsort() {									//Procedure insertionsort

	int temp;											// Membuat variable data temporer atau penyimpanan sementara
	int j;												// Membuat variable j sebagai penanda
}