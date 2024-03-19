// https://school.programmers.co.kr/learn/courses/30/lessons/12928
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

vector<int> get_divisors(int n)
{
  vector<int> ret;
  for (int i = 1; i <= n; ++i)
  {
    if (0 == n % i)
    {
      ret.push_back(i);
    }
  }
  return ret;
}

vector<int> get_divisors_imprv(int n)
{
  vector<int> ret;
  ret.reserve(n / 2 + 1);
  
  for (int i = 1; i <= n / 2; ++i)
  {
    if (0 == n % i)
    {
      ret.push_back(i);
    }
  }
  ret.push_back(n);
  return ret;
}

int solution2(int n)
{
  vector<int> divisors = get_divisors_imprv(n);
  const int sum = std::accumulate(
      divisors.begin(),
      divisors.end(),
      0);

  return sum;
}