#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool is_upper(char c) {
    return 65 <= c && c <= 90;
}

string solution(string s, int n) {
	vector<int> v;
	string ans = "";
    
	for (char c: s) {
		if (c == ' ') {
			v.push_back(' ');
			continue;
		}
       
		const int num = (int)c;
		int diff = 0;
		bool bUpper = is_upper(c);
        
        // 65 ~ 90
        if (bUpper) {
            if (num + n >= 90) {
                v.push_back((int)'A' + 90 - n - 1);
            } else {
                v.push_back(num + n);
            }
        }
        // 97 ~ 122
        else {
            if (num + n >= 122) {
                v.push_back((int)'a' + 122 - n - 1);
            } else {
                v.push_back(num + n);
            }
        }
	}    
    
	for (int c: v) ans += (char)c;
    
	return ans;
}
int main() {
  cout << (int)'z' << endl;
  cout << (int)'Z' << endl;
  cout << (char)((int)'z' + 1) << endl;
  cout << (char)((int)'Z' + 1) << endl;
  
  const string a1 = solution("a B z", 4);
  cout << a1 << endl;

  const string a2 = solution("ABCDEFGHIJKLMNOPQRSTUWXYZ", 25);
  cout << a2 << endl;

  return 0;
}
