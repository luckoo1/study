#include <string>
#include <iostream>
using namespace std;

int main()
{
    string a = "[[1,2,1],[1,3,2],[2,3,2],[3,4,3],[3,5,2],[3,5,3],[5,6,1]]";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '[')
            a[i] = '{';
        if (a[i] == ']')
            a[i] = '}';
    }
    cout << a << endl;
}