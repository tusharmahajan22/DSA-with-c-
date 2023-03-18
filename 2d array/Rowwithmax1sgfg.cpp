#include <iostream>
using namespace std;
void maxoness(int arr[][4])
{

    int a = INT_MIN;
    int start;
    int x;

    for (int i = 0; i < 4; i++)
    {
        int count = 0;

        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        start = count;
        if (start > a)
        {
            a = start;
            x = i;
        }
    }

    cout << "the row with highst no of 1's is " << x;
}

int main()
{
    int arr[4][4] = {{0, 1, 1, 1},
                     {0, 0, 1, 1},
                     {1, 1, 1, 1},
                     {0, 0, 0, 0}};

    maxoness(arr);

    return 0;
}
