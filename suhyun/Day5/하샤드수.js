function solution(x) {
  // x를 문자열로 변환하여 각 자릿수를 배열에 저장
  let digits = String(x).split('');
  // 각 자릿수의 합을 계산
  let sum = digits.reduce((a, b) => a + parseInt(b), 0);
  // x가 각 자릿수의 합으로 나누어떨어지는지 확인하여 결과 반환
  return x % sum === 0;
}

// 예시를 테스트합니다.
console.log(solution(11)); // 출력: true
console.log(solution(10)); // 출력: false
