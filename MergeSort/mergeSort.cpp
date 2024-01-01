#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high);
void merge_Sort(int arr[], int low, int high);

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Merge sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    merge_Sort(arr, 0, n - 1);

    cout << endl;
    cout << "After MergeSort sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // temp arrays
    int arr1[n1], arr2[n2];

    for (int i = 0; i < n1; i++) // arr1 has low to mid
    {
        arr1[i] = arr[low + i];
    }

    for (int i = 0; i < n2; i++) // arr2 has mid to high
    {
        arr2[i] = arr[mid + 1 + i];
    }

    // Merge the temp arrays back into arr[low..high]
    int i = 0;   // Initial index of first subarray
    int j = 0;   // Initial index of second subarray
    int k = low; // Initial index of merged subarray

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    // Copy the remaining elements of arr1[], if there are any
    while (i < n1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    // Copy the remaining elements of arr2[], if there are any
    while (j < n2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void merge_Sort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_Sort(arr, low, mid); // Sort the first half
        merge_Sort(arr, mid + 1, high); // Sort the second half

        merge(arr, low, mid, high); // Merge the sorted halves
    }
}