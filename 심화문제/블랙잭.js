//백준에서 안가져오고 인풋값 입력하는 법
const input = [
  [5, 21],
  [5, 6, 7, 8, 9]
];

const NM = input[0]; // 카드의 개수와 목표 합 배열
const N = NM[0]; // 카드의 개수
const M = NM[1]; // 목표 합
const cardArr = input[1]; // 카드 숫자 배열

let max = 0; // 최대 합

//첫번째 카드일때 인덱스 범위
for (let i = 0; i < N - 2; i++) {
  //두번째 카드일때
    for (let j = i + 1; j < N - 1; j++) {
      //세번째 카드일때 
        for (let k = j + 1; k < N; k++) {
          //세장의 카드의 합
            let sum = cardArr[i] + cardArr[j] + cardArr[k];
            //최대 합인 max보다 크면서 목표 합인 M을 넘지 않는지 확인
            if (sum > max && sum <= M) {
                max = sum;
            }
        }
    }
}

console.log(max);
