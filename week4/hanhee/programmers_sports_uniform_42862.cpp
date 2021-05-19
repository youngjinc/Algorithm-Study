#include <vector>
#include <iostream>
 
using namespace std;
 
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> check(n, 1);
    for (auto l : lost)        check[l - 1]--;
    for (auto r : reserve)        check[r - 1]++;
    for (size_t i = 0; i < check.size(); i++) {
        if (!check[i]) {
            if (i != check.size() - 1 && check[i + 1] == 2) {
                check[i + 1]--;
                check[i]++;
            }
            else if (i && check[i - 1] == 2) {
                check[i - 1]--;
                check[i]++;
            }
        }
    }
    for (auto a : check)
        if (a != 0)    answer++;
    return answer;
}

void print(int n, vector<int> lost, vector<int> reserve, int answer) {
    int t = solution(n, lost, reserve);
    if (t == answer)        cout << "정답" << endl;
    else        cout << "틀림" << endl;
}
 
int main() {
    print(5, { 2, 4 }, { 1, 3, 5 }, 5);
    print(5, { 2, 4 }, { 3 }, 4);
    print(3, { 3 }, { 1 }, 2);
    print(7, { 2, 3, 4 }, { 1, 2, 3, 6 }, 6);
    return 0;
}