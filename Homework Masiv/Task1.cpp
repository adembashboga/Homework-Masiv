#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];
    cout << "Введите 5 чисел - " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Массив в обратном порядке - " << endl;
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
