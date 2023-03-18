#include <iostream>
using namespace std;
void reversea(int arr1[], int arr2[])
{
    int i = 0;
    int j = 0;
    int arr[8];
    int a=0;

    
        while (i < 5 && j < 3)
        {
            if (arr1[i] < arr2[j])
            {
                arr[a++] = arr1[i];
                i++;
            }
            else if (arr1[i] > arr2[j])
            {
                arr[a++] = arr2[j];
                j++;
            }
        }

        while(i<5){
            arr[a++]=arr1[i];
            i++;
        }

        while(j<3){
            arr[a++]=arr2[j];
            j++;
        }

    

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[5] = {1, 4, 5, 6, 8};
    int arr2[3] = {2, 3, 7};
    reversea(arr1, arr2);

    return 0;
}
