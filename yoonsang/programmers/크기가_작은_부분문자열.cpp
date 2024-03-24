// https://school.programmers.co.kr/learn/courses/30/lessons/147355
#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int ans = 0;
    int cursor = 0;
    const size_t tlen = t.length();
    const size_t plen = p.length();
    while (cursor + plen <= tlen) {
        string slice = t.substr(cursor, plen);
        if (stoll(slice) <= stoll(p)) {
           ++ans;
        }
        
        ++cursor;
    }
    
    return ans;
}