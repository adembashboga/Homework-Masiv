#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];
    cout << "������� 5 ����� - " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "������ � �������� ������� - " << endl;
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
