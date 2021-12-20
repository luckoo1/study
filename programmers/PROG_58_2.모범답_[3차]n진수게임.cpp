#include <string>
#include <algorithm>
#include <vector>

using namespace std;

char number[18] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                   'A', 'B', 'C', 'D', 'E', 'F'};

string number_to_n(int num, int n) // number,n진수
{
    string result;
    if (num == 0)
    {
        return "0";
    }
    while (num > 0)
    {
        result += number[num % n];
        num /= n;
    }
    reverse(result.begin(), result.end());
    return result;
}

string solution(int n, int t, int m, int p)
{
    string answer = "";
    string temp;
    int mt = m * t;
    for (int num = 0; temp.size() <= mt; num++)
    {
        string ngame = number_to_n(num, n);
        temp += ngame;
    }

    for (int i = 0; i < t; i++)
    {
        answer += temp.at((m * i) + (p - 1));
    }

    return answer;
}