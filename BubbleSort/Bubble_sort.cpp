#include <iostream>
using namespace std;

void bubble_sort(int n, int arr[]);
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Bubble sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    bubble_sort(n, arr);

    cout << "After Bubble sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void bubble_sort(int n, int arr[])
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
    
}
