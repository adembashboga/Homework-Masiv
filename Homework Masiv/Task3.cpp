#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];
    int sum = 0;
    int count = 0;

    srand(time(0));

    cout << "Массив случайных чисел: " << endl;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 41 - 20;
        cout << arr[i] << " ";
        if (arr[i] > 0) {
            sum += arr[i];
            count++;
        }
    }
    cout << endl;

    if (count > 0) {
        double avg = static_cast<double>(sum) / count;
        cout << "Среднее арифметическое положительных - " << avg << endl;
    }
    else {
        cout << "В массиве нет положительных" << endl;
    }
}
