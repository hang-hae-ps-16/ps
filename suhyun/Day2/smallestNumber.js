function solution(n) {
  for (let x = 2; x <= n; x++) {
      if (n % x === 1) {
          return x;
      }
  }
}
//for문으로 n까지 순차적 증가
// 각 x에 대해 n으로 나눈 나머지가 1인경우 x를 반환
