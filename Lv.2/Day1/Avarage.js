function solution(arr) {
  let sum = 0;
  for (let i = 0; i < arr.length; i++) {
      sum += arr[i];
  }
  const average = sum / arr.length;
  return average;
}
//반복문을 활용하여 배열의 모든 요소를 순회하며 합을 계산
//평균: 합/총길이