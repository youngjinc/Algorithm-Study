#include <string>
#include <vector>
#include <algorithm> 
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int n1[5]={1,2,3,4,5},
    n2[8]={2,1,2,3,2,4,2,5},
    n3[10]={3,3,1,1,2,2,4,4,5,5};
    int sum[3]={0,};
    
    for(int i=0; i<answers.size(); i++){
        int ans = answers[i];
        if(ans==n1[i%5]) sum[0]++;
        if(ans==n2[i%8]) sum[1]++;
        if(ans==n3[i%10]) sum[2]++;

    }
    
    int max = *max_element(sum, sum+3);
    
    for(int i=0; i<3; i++) {
        if(sum[i]==max) answer.push_back(i+1);
    }
    
    return answer;
}