//https://school.programmers.co.kr/learn/courses/30/lessons/12935

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
  if (arr.size() == 1) return { -1 };

  int min = 9999;
  int min_i = 0;
  for (int i = 0; i < arr.size(); ++i) {
    if (min > arr[i]) {
      min = arr[i];
      min_i = i;
    }
  }

  arr.erase(arr.begin() + min_i);

  return arr;
}
