#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // array printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // spiral printing
    int minr = 0;
    int maxr = 2;
    int minc = 0;
    int maxc = 3;

    while (minr <= maxr && minc <= maxc)
    {

        // right ke liye loop

        for (int i = minc; i <= maxc; i++)
        {
            cout << a[minr][i] << " ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        // down
        for (int i = minr; i <= maxr; i++)
        {
            cout << a[i][maxc] << " ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        // left ke liye

        for (int i = maxc; i >=minc; i--)
        {
            cout << a[maxr][i] << " ";
        }

        maxr--;
        if(minr>maxr || minc>maxc) break;
        // up

        for (int i = maxr; i >=minr; i--)
        {
            cout << a[i][minc] << " ";
        }
        minc++;
    }
}