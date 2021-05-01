#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    int answer = 0;
    vector<int> v1; //바구니

    int num_row = board.size();

    for (int i = 0; i < moves.size(); i++)
    { //col
        int col = moves[i] - 1;
        for (int j = 0; j < num_row; j++)
        { //개별row
            if (board[j][col] != 0)
            {
                if (!v1.empty())
                {
                    if (v1[v1.size() - 1] == board[j][col])
                    {
                        v1.pop_back(); //pop 2번 안해줘도 ok
                        answer += 2;
                    }
                    else
                    {
                        v1.push_back(board[j][col]);
                    }
                }
                else
                {
                    v1.push_back(board[j][col]);
                }
                board[j][col] = 0;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    return answer;
}