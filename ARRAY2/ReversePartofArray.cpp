#include <bits/stdc++.h>
using namespace std;
void display(vector<int> v)
{
    cout << "Your array:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// rotate array part

void rotate(vector<int> &v, int left, int right)
{
    while (left < right)
    {
        swap(v[left], v[right]);
        left++;
        right--;
    }
}

int main()
{
    vector<int> v = {1, 6, 2, 3, 7, 4};
    display(v);
    rotate(v, 0, 4);
    display(v);
}