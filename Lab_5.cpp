#include <iostream>
#include<Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int SIZE = 5;
    int matrix[SIZE][SIZE];
    int increment;

    // Введення елементів матриці
    cout << "Введіть елементи матриці 5x5:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
        }
    }

    // Введення величини збільшення
    cout << "Введіть величину, на яку треба збільшити елементи матриці: ";
    cin >> increment;

    // Збільшення всіх елементів матриці
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] += increment;
        }
    }

    // Виведення результату
    cout << "Матриця після збільшення:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
