#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct tanggal_lahir
{
    int tanggal;
    int bulan;
    int tahun;
};
struct Mahasiswa
{
    string nama;
    int umur;
    tanggal_lahir tgl_lahir;
};

void isiDataMahasiswa(Mahasiswa &m){
    cout << "Nama: ";
    cin.ignore();
    getline(cin, m.nama);
    cout << "Input Umur: ";
    cin >> m.umur;
    cout << "Input Tanggal Lahir: (dd-mm-yyyy) ";
    cin >> m.tgl_lahir.tanggal >> m.tgl_lahir.bulan >> m.tgl_lahir.tahun;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
};

void displayMahasiswa(Mahasiswa m){
    cout << "Nama: " << m.nama << endl;
    cout << "Umur: " << m.umur << endl;
    cout << "Tanggal Lahir: " << m.tgl_lahir.tanggal << "-" << m.tgl_lahir.bulan << "-" << m.tgl_lahir.tahun << endl;
};

int main() {
    int jml_mhs = 0;
    Mahasiswa mhs[40];

    int pilihan;

    do {
        cout << "===Menu Mahasiswa===" << endl;
        cout << "1. Input Data Mahasiswa" << endl;
        cout << "2. Tampilkan Data Mahasiswa" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:{
            int input_mhs;
            cout << "Input jumlah mahasiswa: " << endl;
            cin >> input_mhs;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            //mhs[0].nama = "Dimas";
            //mhs[0].umur = 18;
            //mhs[0].hobi = "Bermain Game";
            for (int i = 0; i < input_mhs; i++) {
                
                cout << "Input Data Mahasiswa ke - " << i << ": " << endl;
                isiDataMahasiswa(mhs[jml_mhs]);
                jml_mhs++;
            }
                break;
        }
        case 2:{
            if (jml_mhs < 1)
            {
                cout << "Belum ada data mahasiswa yang dimasukkan." << endl;
            }

            else{
                for (int i = 0; i < jml_mhs; i++) {
                    cout << "Data Mahasiswa ke - " << i << ": " << endl;
                    displayMahasiswa(mhs[i]);
                }
            }
                break;
        }
       case 3:
            cout << "Keluar dari program." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan pilih menu yang tersedia." << endl;
        }
    } while (pilihan != 3);

    return 0;
}