#include <iostream>
using namespace std;
int indexomount(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;  //==(start+end)/2
    }
    return start;
}

int main()
{
    int arr[4] = {3, 4, 5, 1};
    int a = indexomount(arr, 4);
    cout << a;

    return 0;
}