#include <vector>
#include <iostream>
using namespace std;

void reverseArray(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }
}
void evenIndexedEle(vector<int> v)
{
    vector<int> c;
    int index = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (index < v.size())
        {
            c.push_back(v[index]);
            index += 2;
        }
    }

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    // reverseArray(v);
    evenIndexedEle(v);
    return 0;
}