// https://school.programmers.co.kr/learn/courses/30/lessons/77884

int yaksu_cnt(int n) {
  int cnt = 0;

  for (int i = 1; i <= n; ++i) {
    if (n % i == 0)
      ++cnt;
  }

  return cnt;
}

int solution(int left, int right) {
  int sum = 0;
  for (int i = left; i <= right; ++i) {
    const int cnt = yaksu_cnt(i);

    if (cnt % 2 == 0) sum += i;
    else sum -= i;
  }

  return sum;
}