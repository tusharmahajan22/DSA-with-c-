#include <iostream>
using namespace std;
void insertionsorto(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)     //it dipicts rounds
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {22, 33, 8, 99, 10};
    int n = 5;

    insertionsorto(arr, n);

    return 0;
}