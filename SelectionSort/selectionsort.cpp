#include <iostream>
using namespace std;

void selection_sort(int n, int arr[]);  // Function prototype

int main() {
    int arr[] = {7, 5, 9, 2, 8};

    // Determining the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before selection sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selection_sort(n, arr);

    cout << "After selection sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
       
    return 0;
}

void selection_sort(int n, int arr[]) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            // Swap arr[i] and arr[min]
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}
