function solution(n) {
  let sum = 0;
  for (let i = 1; i <= n; i++) {
      if (n % i === 0) {
        // 약수들의 합에 현재 약수인 i를 더합니다.
          sum += i;
      }
  }
  return sum;
}
