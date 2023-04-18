#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    cout << "Введите количество элементов в массиве: ";
    int N;
    cin >> N;
    int* arr = new int[N];
    system("cls");
    cout << "Задайте элементы массива по порядку: \n";
    for (int i = 0; i < N; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    system("cls");

    cout << "Заданный вами массив: \n";
    cout << "arr[" << N << "] = ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\nПроизводится сортировка...\n";

    for (int i = 1; i < N; i++) {
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
            swap(arr[j - 1], arr[j]);
            for (int k = 0; k < N; k++) {
                cout << arr[k] << " ";
            }
            cout << "\n";
        }
    }
}