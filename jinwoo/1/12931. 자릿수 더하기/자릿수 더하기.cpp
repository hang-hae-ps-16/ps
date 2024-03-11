#include <iostream>
#include <string>
using namespace std;

int solution(int n)
{
    int answer = 0;
    
    string num = to_string(n);
    

    for(int i=0; i<num.length();i++)
    {
        // 아스키코드를 이용하여 문자 숫자에서 '0'을 빼어 1로 만들어줌
        answer+=num[i]-'0';
    }

    return answer;
}