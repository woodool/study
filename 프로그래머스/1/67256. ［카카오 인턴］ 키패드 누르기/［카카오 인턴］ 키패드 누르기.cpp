#include <bits/stdc++.h>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int lefthand = 10;
    int righthand = 12;
    for (int number : numbers){
        if (number == 1 || number == 4 || number == 7){
            answer += "L";
            lefthand = number;
        }
        else if (number == 3 || number == 6 || number == 9){
            answer += "R";
            righthand = number;
        }
        else{
            if (number == 0) number = 11;
            int leftdis = abs((number - lefthand)/3) + abs((number - lefthand)%3);
            int rightdis = abs((number - righthand)/3) + abs((number - righthand)%3);
            if (rightdis > leftdis){
                answer += "L";
                lefthand = number;
            }
            else if (leftdis > rightdis){
                answer += "R";
                righthand = number;
            }
            else{
                if (hand == "right"){
                    answer += "R";
                    righthand = number;
                }
                else{
                    answer += "L";
                    lefthand = number;
                }
            }
        }
    }
    return answer;
}