//자릿수 구하기
function solution(N) {
  let sum = 0;
  while (N > 0) {
      sum += N % 10; // N을 10으로 나눈 나머지는 N의 일의 자릿수
      N = Math.floor(N / 10); // N을 10으로 나눈 몫은 N에서 일의 자릿수를 제외한 나머지 수
  }
  return sum;
}