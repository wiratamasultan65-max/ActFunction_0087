// Library
#include <iostream>
using namespace std;

// Deklarasi Global
float p, l;

// Prosedur input
void input() {
    cout << "Masukkan Panjang : ";
    cin >> p;
    cout << "Masukkan Lebar   : ";
    cin >> l;
}

// Fungsi menghitung luas persegi panjang
float LuasPersegiPanjang() {
    return p * l;
}

// Prosedur output
void Output() {
    cout << "Hasil Luas = " << LuasPersegiPanjang() << endl;
}

// Program Utama
int main() {
    input();
    Output();
    return 0;
}