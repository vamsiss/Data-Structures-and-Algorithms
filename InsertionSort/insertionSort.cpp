#include <iostream>
using namespace std;

void insertion_Sort(int n, int arr[]);
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Insertion sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    insertion_Sort(n, arr);

    cout << "After Insertion sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
void insertion_Sort(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j>=0 && arr[j] > current)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}
