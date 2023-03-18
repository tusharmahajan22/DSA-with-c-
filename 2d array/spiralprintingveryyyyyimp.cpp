// // approach
// // first print the first row
// // than print last column
// // then last row
// // than first column
// // repeat

// #include <iostream>
// using namespace std;

// void tusha(int arr[][100], int r, int c){

//     int firstrow=0;
//     int firstcol=0;
//     int lastrow=r-1;
//     int lastcol=c-1;

//     int count=0;
//     int total=r*c;

//     while(count<total){

//         for(int i=firstcol;i<=lastcol;i++){
//             cout<<arr[firstrow][i];
//             count++;
//         }                                             //first row printed and then next row is our first row
//         firstrow++;

//         for(int i=firstrow; i<=lastrow;i++){
//             cout<<arr[firstrow][lastcol];
//             count++;
//         }
//         lastcol--;

//         for(int i=lastcol;i>=firstcol;i--){
//             cout<<arr[lastrow][i];
//             count++;
//         }
//         lastrow--;

//         for(int i=lastrow;i>=firstrow;i--){
//             cout<<arr[i][firstcol];
//             count++;

//         }
//         firstcol++;

//     }

//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<arr[r][c];
//         }
//     }
// }

// int main (){

//     int row;
//     int col;

//     cin>>row;
//     cin>>col;

//     int arr[row][col];

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>arr[row][col];
//         }
//     }

//     tusha(arr, row, col);

//     return 0;
// }

#include <iostream>
using namespace std;

void spiraldisplay(int arr[][3], int r, int c)
{

    int firstrow = 0;
    int firstcol = 0;
    int lastrow = r - 1;
    int lastcol = c - 1;

    int count = 0;
    int total = r * c;

    while (count < total)
    {

        for (int i = firstcol; count < total && i <= lastcol; i++)
        {
            cout << arr[firstrow][i] << " ";
            count++;
        } // first row printed and then next row is our first row
        firstrow++;

        for (int i = firstrow; count < total && i <= lastrow; i++)
        {
            cout << arr[i][lastcol] << " ";
            count++;
        }
        lastcol--;

        for (int i = lastcol; count < total && i >= firstcol; i--)
        {
            cout << arr[lastrow][i] << " ";
            count++;
        }
        lastrow--;

        for (int i = lastrow; count < total && i >= firstrow; i--)
        {
            cout << arr[i][firstcol] << " ";
            count++;
        }
        firstcol++;
    }
}

int main()
{

    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    spiraldisplay(arr, 3, 3);

    return 0;
}

// complexity ----->>>>> O(rows x col)