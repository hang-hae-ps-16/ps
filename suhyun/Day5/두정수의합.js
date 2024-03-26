function solution(a, b) {
  // a부터 b까지의 모든 정수의 합을 구하기 위한 변수
  let sum = 0;
  // a부터 b까지 반복하면서 각 정수를 sum에 더함
  for (let i = a; i <= b; i++) {
      sum += i;
  }
  // 계산된 합을 반환
  return sum;
}

// 예시를 테스트합니다.
console.log(solution(3, 5)); // 출력: 12
