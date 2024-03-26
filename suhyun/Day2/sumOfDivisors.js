function solution(n) {
  let sum = 0;
  for (let i = 1; i <= n; i++) {
      if (n % i === 0) {
          sum += i;
      }
  }
  return sum;
}
//for문 1~n까지의 모든 수 반복 
//약수: n을 i로 나눴을때 나머지가 0이면
//if(약수인 경우에만){합한다}