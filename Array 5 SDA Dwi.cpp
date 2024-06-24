#include <iostream>
using namespace std;

int main(){
	// mendeklarasikan array integer secara dinamis
	int integerArray[10];
	int n;
	
	// memasukkan jumlah elemen untuk integerArray pada variabel n
	cout << "Masukkan jumlah data: ";
	cin >> n;
	
	// memasukkan nilai elemen satu persatu pada variabel i
	for (int i = 0; i<n; ++i){
		cout << "Masukkan data ke-" << i << ": ";
		cin >> integerArray[i];
	}
	
	// menampilkan nilai elemen keseluruhan sesuai urutan masuk
	cout << "\nMenampilkan data yang telah dimasukkan: ";
	
	for (int i = 0; i<n; i++){
		cout << integerArray[i] << " ";
	}
	 
	return 0;
}
