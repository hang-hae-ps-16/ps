// https://school.programmers.co.kr/learn/courses/30/lessons/68935

#include <string>
#include <cmath>

using namespace std;

string convert_10_to_3(int n)
{
  string r = "";

  while (n != 0)
  {
    r = r + to_string(n % 3);
    n /= 3;
  }

  return r;
}

int convert_3_to_10(string s)
{
  int r = 0;
  for (int i = 0; i < s.size(); ++i)
  {
    const int cur = stoi(s.substr(i, 1));
    if (cur == 0)
      continue;

    r += cur * pow(3, (s.size() - i - 1));
  }

  return r;
}

int solution(int n)
{
  const string s = convert_10_to_3(n);
  return convert_3_to_10(s);
}