function solution(n) {
  // 정수를 문자열로 변환하여 각 자릿수를 배열에 저장
  let digits = String(n).split('');
  // 각 자릿수를 내림차순으로 정렬
  let sortedDigits = digits.sort((a, b) => b - a);
  // 정렬된 자릿수를 다시 문자열로 결합하여 정수로 변환하여 반환
  return parseInt(sortedDigits.join(''));
}

// 예시를 테스트합니다.
console.log(solution(118372)); // 출력: 873211
