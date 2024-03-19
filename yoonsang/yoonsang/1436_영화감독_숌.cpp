#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
//1 -> 666
//2 -> 1666
//3 -> 2666
//6 -> 5666
//7 -> 6660
//16 -> 6669
// 17 -> 10666
//      
//107 -> 106660
//108 -> 106661
//109 -> 106662
//110 -> 106663
//116 -> 106669
//117 -> 116660

//       166699
//       196669
//       199666
//       266699
//       366699
//       466699
//       566699
//       666999
//       996669
//       1006660
//187 -> 66666
//500 -> 166699

int main() {
    int target = 0;
    cin >> target;

    for (int title = 666, i = 0; ; ++title) {
        const string s = to_string(title);

        bool found = s.find("666");
        if (s.find("666") != string::npos) {
            ++i;
            if (i == target) {
                cout << title << "\n";
                break;
            }
        }
    }

    return 0;
}