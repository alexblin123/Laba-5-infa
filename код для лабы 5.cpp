#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    const int rows = 3;
    const int cols = 4;

    int originalArray[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Преобразуем двумерный массив в одномерный 

    const int totalElements = rows * cols; 
    int oneDimensionalArray[totalElements];
    int index = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            oneDimensionalArray[index++] = originalArray[i][j];
        }
    }

    // Восстанавливаем исходный двумерный массив

    int restoredArray[rows][cols];
    index = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            restoredArray[i][j] = oneDimensionalArray[index++];
        }
    }

    // Выводим исходный и восстановленный массивы

    cout << "Исходный массив: " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << originalArray[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Восстановленный массив:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << restoredArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
