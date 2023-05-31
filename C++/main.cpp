#include <iostream>

void selection_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // 將最小元素與起始位置進行交換
        std::swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {40, 30, 60, 50, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    // 原始數列.
    std::cout << "original sequence: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // 插入排序.
    selection_sort(arr, size);

    // 排序後數列.
    std::cout << "sorted sequence: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
