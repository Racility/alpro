#include <iostream>
using namespace std;

int main() {
    int mat[2][2];
    int mat2[2][2];
    int hasil [2][2];

    cout << "input mat1: \n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "input mat [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
    cout << "MATRIKS 2\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "input mat2 [" << i << "][" << j << "]: ";
            cin >> mat2[i][j];
        }
    }
    cout << "\n";
    cout << "MATRIKS 1\n";
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "MATRIKS 2\n";
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << mat2[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "HASIL PENJUMLAHAN\n";
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasil[i][j] = mat[i][j] + mat2[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << "\n";
    }
}   