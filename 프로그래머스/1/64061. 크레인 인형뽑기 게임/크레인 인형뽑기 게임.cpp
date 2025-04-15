#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> S; // 바구니 스택형으로 
    for(int i=0; i<moves.size(); i++){ // 입력받는 moves배열
        for(int j=0; j<board.size(); j++){ // 행(높이) 
            if(board[j][moves[i]-1]!=0){ // moves[i] - 1열에서 j행에 인형존재 여부 (0은 빈칸이니깐)
                if(!S.empty() && S.top()==board[j][moves[i]-1]){ // 비어있지않고 스택 탑이 뽑으려는 거랑 같을 경우
                    S.pop();
                    board[j][moves[i]-1]=0;
                    answer+=2;
                    break;
                }
                else{ // 인형은 존재하는데 스택이 비어있거나 스택 탑이 뽑으려는 거랑 다를 경우는 스택에 추가해주는
                    S.push(board[j][moves[i]-1]);
                    board[j][moves[i]-1]=0;
                    break; 
                }
            }
        }
    }
    return answer;
}