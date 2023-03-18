#include <iostream>
using namespace std;
void binarysearch(int arr1[], int arr2[])
{
    int brr[6];
    int i = 0;
    int j = 0;
    int a = 0;
    while(i<3 && j<3)
    {
        if (arr1[i] < arr2[j])
        {
            brr[a] = arr1[i];
            i++;
            a++;
        }
        else
        {
            brr[a] = arr2[j];
            j++;
            a++;
        }
    }

    while(i<3){
        brr[a]=arr1[i];
        a++;
        i++;
    }

    while(j<3){
        brr[a]=arr2[j];
        a++;
        j++;
    }

    for (int x = 0; x < 6; x++)
    {
        cout << brr[x] << " ";
    }
}

int main()
{
    int arr1[3] = {1,2,3};
    int arr2[3] = {2,5,6};

    binarysearch(arr1, arr2);

    return 0;
}