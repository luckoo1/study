#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> gems)
{
    vector<int> answer;

    set<string> unique_set;
    for (int i = 0; i < gems.size(); i++)
    {
        unique_set.insert(gems[i]);
    }

    int cnt = unique_set.size();
    unique_set.clear();

    int dist = gems.size();

    for (int i = 0; i < gems.size(); i++)
    {
        for (int j = i; j < gems.size(); j++)
        {
            unique_set.insert(gems[j]);
            if (unique_set.size() == cnt)
            {
                if (dist > j - i)
                {
                    dist = j - i;
                    answer.clear();
                    answer.push_back(i + 1);
                    answer.push_back(j + 1);
                    if (dist + 1 == cnt)
                    {
                        return answer;
                    }
                    break;
                }
            }
        }
        unique_set.clear();
    }
    return answer;
}

int main()
{
    vector<int> a = solution({"DIA", "RUBY", "RUBY", "DIA", "DIA", "EMERALD", "SAPPHIRE", "DIA"});
    for (auto n : a)
    {
        cout << n << " ";
    }
    cout << endl;
    vector<int> b = solution({"AA", "AB", "AC", "AA", "AC"});
    for (auto n : b)
    {
        cout << n << " ";
    }
    cout << endl;
    vector<int> c = solution({"XYZ", "XYZ", "XYZ"});
    for (auto n : c)
    {
        cout << n << " ";
    }
    cout << endl;
    vector<int> d = solution({"ZZZ", "YYY", "NNNN", "YYY", "BBB"});
    for (auto n : d)
    {
        cout << n << " ";
    }
    cout << endl;
}