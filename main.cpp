#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;
    cout << "Program Kalkulator Sederhana\n";
    cout << "==============================\n\n";
    cout << "Masukkan Angka Pertama : ";
    cin >> a;
    cout << "Pilih Operator +, -, *, / : ";
    cin >> aritmatika;
    cout << "Masukkan Angka Kedua : ";
    cin >> b;
    cout <<"\n";
    cout << "Hasil Perhitungan : ";
    cout << a << aritmatika << b;
    if (aritmatika == '+' ){
        hasil = a+b;
    }
    else if (aritmatika == '-'){
        hasil = a-b;
    }
    else if (aritmatika == '*'){
        hasil = a*b;
    }
    else if (aritmatika == '/'){
        hasil = a/b;
    }
    else {
        cout << "Operator Anda Salah" << endl;
    }
    cout << " = " <<hasil <<endl;
    cout << "==============================\n\n";
    return 0;
}
