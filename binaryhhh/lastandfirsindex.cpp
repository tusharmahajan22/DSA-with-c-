#include <iostream>
using namespace std;
int binarysearchfirst(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        else
        {
            end = end - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int binarysearchlast(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        else
        {
            end = end - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};
    int a = binarysearchfirst(arr, 8, 2);
    int b = binarysearchlast(arr, 8, 2);

    cout << "the first index of 2 is: " << a << endl;
    cout << "the last index of 2 is: " << b << endl;

    return 0;
}