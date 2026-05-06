#include <iostream>
using namespace std;

void shell_sort(int arr[], int data_size) {
    for (int gap = data_size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < data_size; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int partition(int arr[], int kiri, int kanan) {
    int pivot = arr[kanan];
    int i = kiri - 1;
    for (int j = kiri; j < kanan; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
            //int temp = arr[i];
            //arr[i] = arr[j];
            //arr[j] = temp;
        }
    }
    swap(arr[i + 1], arr[kanan]);
    //int temp = arr[i + 1];
    //arr[i + 1] = arr[kanan];
    //arr[kanan] = temp;
    return i + 1;
}

void quick_sort(int arr[], int kiri, int kanan) {
    if (kiri < kanan) {
        int pivot = partition(arr, kiri, kanan);
        quick_sort(arr, kiri, pivot - 1);
        quick_sort(arr, pivot + 1, kanan);
    }
}

int main() {
    int data_size = 5;
    int values[] = {3, 2, 5, 4, 1}; //5 //indeks terakhir = 4
    
    //shell_sort(values, data_size);
    quick_sort(values, 0, data_size - 1);
    cout << "Data yang sudah diurutkan: ";
    for (int i = 0; i < data_size; i++) {
        cout << values[i] << " ";
    }
    return 0;
}