#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int size = 20;
    int arr[size];

    srand(time(0));
    cout << "Массив случайных чисел - " << endl;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Элементы с четными индексами - " << endl;
    for (int i = 0; i < size; i += 2) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}