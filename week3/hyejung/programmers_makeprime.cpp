#include <vector>
using namespace std;

int isPrime(int sum)
{
    for (int i = 2; i < sum / 2; i++)
    {
        if ((sum % i) == 0)
            return false;
    }
    return true;
}

int solution(vector<int> nums)
{
    int answer = 0; //count
    int sum = 0;    //3개 더한 값

    for (int one = 0; one <= nums.size() - 3; one++)
    {
        for (int two = one + 1; two <= nums.size() - 2; two++)
        {
            for (int three = two + 1; three < nums.size(); three++)
            {
                sum = nums[one] + nums[two] + nums[three];

                if (isPrime(sum))
                { //소수라면
                    answer++;
                }
            }
        }
    }

    return answer;
}