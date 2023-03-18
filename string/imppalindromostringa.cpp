#include <iostream>
using namespace std;
int checkin(char c[])
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        if (c[i] >= 'A' && c[i] <= 'Z')
        {
            c[i] = c[i] - 'A' + 'a'; // imp formulae for converting the given charachter to lower case, similarly if we want to convert the ch to uper case we will use-> c[i] = c[i] - 'a' + 'A' ;
        }
    }

    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (c[start] != c[end])
        {
            return 0;
        }
        
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
int main()
{
    char c[9];
    cin >> c;
    if (checkin(c))
    {
        cout << "yeah boi" << endl;
    }
    else
    {
        cout << "nahh boi" << endl;
    }

    return 0;
}