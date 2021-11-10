#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> people, int limit)
{
    int answer = 0;
    int head = 0;
    int tail = people.size() - 1;
    sort(people.begin(), people.end());

    while (head <= tail)
    {
        if (people[head] + people[tail] <= limit)
        {
            head++;
            tail--;
        }
        else
        {
            tail--;
        }
        answer++;
    }
    return answer;
}
int main()
{
    vector<int> a{1, 2, 3, 4, 5, 7};
    int b = 6;
    int ans = solution(a, b);
    cout << endl;
    cout << "answer : " << ans;
}