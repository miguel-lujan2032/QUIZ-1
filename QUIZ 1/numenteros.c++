#include <iostream>

void printAllPairs(const int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << arr[i] << "-" << arr[j] << std::endl;
        }
    }
}

// Ejemplo de uso
int main() {
    int a[] = {1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    printAllPairs(a, n);
    return 0;
}