#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;
    
    if(0<angle&&angle<90)
        return answer=1;
    if(angle==90)
        return answer=2;    
    if(90<angle&&angle<180)
        return answer=3;    
    if(angle==180)
        return answer=4;
}