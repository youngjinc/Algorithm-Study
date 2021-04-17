#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location)
{
    int answer = 0;
    queue<pair<int, int>> q;
    priority_queue<int> pq;

    //1. q(순번, vector 값), pq(vector 값을 내림차순으로) 할당
    for (int i = 0; i < priorities.size(); i++)
    {
        q.push(make_pair(i, priorities[i]));
        pq.push(priorities[i]);
    }

    // 2. 중요도에 따른 location
    while (!pq.empty())
    {
        int i = q.front().first;  //순번
        int v = q.front().second; //vector 값
        q.pop();                  //q에 가장 첫 번째 값 꺼냄

        if (v == pq.top()) //중요도가 높은 순으로 인쇄
        {
            pq.pop();
            answer++; //몇번째로 출력?

            if (i == location) //현재 문서가 내가 요청한 문서
                break;
        }
        else //중요도가 높지 않은 경우 다시 q에 추가
            q.push(make_pair(i, v));
    }

    return answer;
}