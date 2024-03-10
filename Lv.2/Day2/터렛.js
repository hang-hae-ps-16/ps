const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().split("\n");

const numOfInputs = parseInt(input[0]); //테스트 케이스의 개수를 확인

for(let i = 1; i <= numOfInputs; i++) {
  //테스트 케이스의 정보를 공백으로 분할하여 배열로 만든 후, 각 요소를 정수로 변환하여 변수에 할당합니다. 이 정보는 두 터렛의 좌표와 반지름에 관한것
  const [x1, y1, r1, x2, y2, r2] = input[i].split(" ").map(el => parseInt(el))
  
  //터렛 좌표 객체화
  const p1 = {x: x1, y: y1}
  const p2 = {x: x2, y: y2}

  // sqet(root)를 취하는 경우 소수점의 오차 때문에 비교가 힘들기 때문에 제곱된 값을 그대로 사용
  //두 터렛 사이의 거리의 제곱을 계산
  const squaredDistance = getSquaredDistance(p1, p2)
  // 가능한 위치의 수 계산 및 출력:
  console.log(findPointsCount(squaredDistance, r1, r2))
}


// 두 점 사이의 거리의 제곱을 계산하는 함수와 가능한 위치의 수를 계산하는 함수
function getSquaredDistance(p1, p2) {
  return ((p1.x - p2.x) ** 2) + ((p1.y - p2.y) ** 2)
}

function findPointsCount(d, r1, r2) {
  const squaredSumR = (r1 + r2) ** 2
  const squaredDiffR = (r1 - r2) ** 2

  if(d == 0) {
    // 원점이 같을 때
    //두 터렛의 위치가 동일하기 때문에 류재명이 위치할 수 있는 곳은 무한대
    if(r1 == r2) return -1
    // 두 터렛의 반지름도 동일해야 합니다. 그렇지 않으면 류재명이 위치할 수 있는 곳이 없으므로 0을 반환
    return 0
  } else {
    if(d > squaredSumR || d < squaredDiffR) {
      // Case4 : 0개일때
      return 0
    } else if(d == squaredDiffR || d == squaredSumR){
      // case 1,2: 1개일때(내접 또는 외접)
      return 1
    } else if(d < squaredSumR){
      // case 3: 2개일떄
      return 2
    }
  }
}

