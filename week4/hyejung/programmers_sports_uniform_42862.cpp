#include <string>
#include <vector>
using namespace std;
/*
        도난 당해서 체육복이 없는 학생(lost) == -1
        여분이 있는 학생(reserve) == +1
            여분이 있었지만 도난 O
            여분이 있고 도난 X (== 빌려줄 수 있음 == 0) 
            
        student
        idx 0 1 2 3 4 
           | | | | | |
        num 1 2 3 4 5
    */
int solution(int n, vector<int> lost, vector<int> reserve)
{
    int answer = 0;            //수업을 들을 수 있는 학생들의 수
    vector<int> student(n, 0); //n만큼 0으로 초기화
    for (int i = 0; i < lost.size(); i++)
    {
        student[lost[i] - 1] -= 1; //student vector에 도난 당한 애들 입력
    }
    for (int i = 0; i < reserve.size(); i++)
    {
        student[reserve[i] - 1] += 1; //student vector에 여벌 있는 애들 입력
    }
    for (int i = 0; i < n; i++)
    {
        if (student[i] == -1)
        { //체육복이 없다면
            if (student[i - 1] == 1)
                student[i - 1] = student[i] = 0; //빌리는 의미에서 0
            else if (student[i + 1] == 1)
                student[i + 1] = student[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (student[i] != -1)
            answer++;
        //-1이면 체육복이 없어서 수업을 못듣는 애들이니까 이를 제외한 나머지 -> answer++
    }

    return answer;
}