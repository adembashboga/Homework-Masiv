#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];
    int positivenumber = 0;
    int negativenumber = 0;
    int zeronumber = 0;

    srand(time(0));

    cout << "Массив случайных чисел: " << endl;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 11 - 5;
        cout << arr[i] << " ";

        if (arr[i] > 0) {
            positivenumber++;
        }
        else if (arr[i] < 0) {
            negativenumber++;
        }
        else {
            zeronumber++;
        }
    }
    cout << endl;

    cout << "Положительные - " << positivenumber << endl;
    cout << "Отрицательные - " << negativenumber << endl;
    cout << "Нулевые - " << zeronumber << endl;
}