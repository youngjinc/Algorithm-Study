#include <string>
#include <vector>
using namespace std;

/*
//segmentation fault -> for문 사용으로 인해서
string solution(string s) {
	string answer = "";
	int idx = 0;
    int length = s.length()-1;

	if (length % 2 == 0) { // s의 길이가 짝수라면 (index는 홀수)
		idx = length / 2;
		for (int i = idx; i <= i + 1; i++) {
			answer += s[i];
		}
	}
	else { //홀수라면 (index는 짝수)
		idx = length / 2;
		answer = s[idx];
	}

	return answer;
}
*/

string solution(string s)
{
    string answer = "";
    int idx = 0;
    int length = s.length() - 1;

    if (length % 2 == 0)
    { //s의 길이가 짝수라면 (index는 홀수)
        idx = length / 2;
        answer = s[idx];
    }
    else
    { //홀수라면 (index는 짝수)
        idx = length / 2;
        answer += s[idx];
        answer += s[idx + 1];
    }

    return answer;
}
