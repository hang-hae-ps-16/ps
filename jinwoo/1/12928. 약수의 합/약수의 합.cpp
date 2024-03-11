#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    int answer = 0;
    
    // i : 1부터 n까지 for문 반복
    for(int i=1; i<=n; i++)
    {
        // n을 i로 나눴을 때 나머지가 0이라면 answer+=i
        if(n%i==0)
        {
            answer+=i;
        }
    }
    
    return answer;
}