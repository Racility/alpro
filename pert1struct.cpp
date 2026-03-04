#include <iostream>
using namespace std;

int main() {
    struct Mahasiswa
    {
        string nama;
        int umur;
        string hobi;
    };

    Mahasiswa mhs[40];
    int input_mhs;
    cout << "Input jumlah mahasiswa: " << endl;
    cin >> input_mhs;
    
    //mhs[0].nama = "Dimas";
    //mhs[0].umur = 18;
    //mhs[0].hobi = "Bermain Game";
    for (int i = 0; i < input_mhs; i++) {
        cout << "Input Data Mahasiswa ke - " << i << ": ";
        cout << "Nama: ";
        cin >> mhs[i].nama;
        cout << "Input Umur: ";
        cin >> mhs[i].umur;
        cout << "Input Hobi: ";
        cin >> mhs[i].hobi;
    }

    for (int i = 0; i < input_mhs; i++) {
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "Umur: " << mhs[i].umur << endl;
        cout << "Hobi: " << mhs[i].hobi << endl;
    }
    
}