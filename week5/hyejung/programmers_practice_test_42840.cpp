#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//수포자 3인의 정답 패턴을 배열로 생성
int one[5] = {1, 2, 3, 4, 5};
int two[8] = {2, 1, 2, 3, 2, 4, 2, 5};
int thr[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers)
{
    vector<int> answer;
    vector<int> high(3); //정답 count를 담은 vector
    vector<int> v;       //return할 v == 맞춘 사람들
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;

    for (int i = 0; i < answers.size(); i++)
    {
        int n = answers[i]; //if문마다 접근하니까 따로 변수 선언
        if (n == one[i % 5])
            high[0]++;
        if (n == two[i % 8])
            high[1]++;
        if (n == thr[i % 10])
            high[2]++;
    }

    int max_score = max(max(high[0], high[1]), high[2]);

    for (int i = 0; i < 3; i++)
    {
        if (max_score == high[i])
            v.push_back(i + 1);
    }

    return v;
}