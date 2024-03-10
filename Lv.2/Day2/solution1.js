function solution(x, n) {
  const result = [];
  for (let i = 1; i <= n; i++) {
      result.push(x * i);
  }
  return result;
}
//정수 x씩 증가하는 숫자를 n개 지니는 리스트를 반환
//for 반복문을 사용하여 x를 n번 곱한 값을 배열에 추가하고, 배열을 반환