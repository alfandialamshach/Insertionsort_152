#include <iostream>
using namespace std;

int arr[20];			// Membuat Array dengan panjang 20
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

	for (int i = 1; i < n; i++) {						// 1. Looping dari i dimulai dari 1 hingga n-1

		temp = arr[i];									// Simpan nilai arr[i] ke variable sementara temp

		j = i - 1;										// 3. Setting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp)					// 4. Looping while dimana j lebih besar sama dengan 0
			//  dan arr[j] lebih besar dari pada temp
		{
			arr[j + 1] = arr[j];						// 4a. Simpan arr[j] ke dalam variable arr[j + 1]
			j--;										// 4b. Descrement nilai j by 1
		}

		arr[j + 1] = temp;								// 5. Simpan temp ke dalam arr[j+1]


		cout << "\nPass " << i << ": ";					//output ke layar
		for (int k = 0; k < n; k++) {					// Looping nilai dimulai dari 0 hingga n-1
			cout << arr[k] << " ";						// output ke layar
		}
	}

}

void display() {										 // Procedure display
	cout << endl;										 // Output baris kosong
	cout << "\n===============================" << endl;			 //Output ke layar
	cout << "Element array yang telah tersusun" << endl;			 //Output ke layar
	cout << "\n===============================" << endl;			 //Output ke layar

	for (int j = 0; j < n; j++) {						// Looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;							// Output ke layar
	}
	cout << endl;											// Output baris kosong
}

int main()
{
	input();					//Memanggil input
	insertionsort();			//Memanggil insertionsort
	display();					//Memanggil display
}