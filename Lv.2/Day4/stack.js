//스택이란? 
//: 스택은 한쪽 끝에서만 데이터를 넣고 뺄 수 있는 제한적으로 접근할 수 있는 후입선출(Last-In-First-Out) 형태의 선형 자료구조이다.

//const fs = require("fs");
//let input = fs.readFileSync("/dev/stdin").toString().trim().split("\n").map((item) => Number(item));
let input = [
    "8", // 입력값 예시
    "5 4 3 2 1" // 입력값 예시
];


const iter = input.shift();

// 답을 담기 위한 배열
let ans = [];

// 스택 생성
let stack = [];

// 스택은 1부터 차례대로만 넣을 수 있기 때문에 1을 시작 숫자로 지정한다.
let stackNum = 1;

for(let i = 0; i < iter; i++){
    // input의 배열값 순서대로 수열을 만들어야하므로
    // 우리가 stack에서 꺼내야할 숫자는 input[i]에 해당하는 숫자이다.
    let num = input[i];
    
    // stack에 stackNum을 push한다.
    // stackNum은 1부터 num까지 증가한다.
    // push할 때마다 ans 배열에 "+" 문자를 push한다.
    // 주의할 점. stackNum은 반복문 외부에 선언되었기 때문에
    // 반복문이 돌아갈 때 다시 1부터 시작될 일은 없다.
    // 즉, 순서대로 증가하면서 push 되는 것이 구현된 것이다.
    while(stackNum <= num){
        stack.push(stackNum);
        stackNum++;
        ans.push("+");
    }
    
    // stack에 num까지 들어갔으므로
    // pop을 하면 num과 같은 숫자가 나오게 된다.
    // pop할 때마다 ans 배열에 "-" 문자를 push한다.
    let stackPop = stack.pop();
    ans.push("-");
    
    // 만약 stack에서 pop한 값과 num이 일치하지않는다면
    // 그 것은 문제 조건에 맞춰서 수열로 만들어낼 수 없는 경우이므로
    // ans 배열을 ["NO"]로 완전히 교체하고, for문을 종료한다.
    if(stackPop !== num){
        ans = ["NO"];
        break;
    }   
}

console.log(ans.join("\n"));

// let fs = require('fs');
// const input = fs.readFileSync('/dev/stdin').toString().split('\n');
// let cases = input[0];
// const cases = 5; // 입력값 예시
// const input = [5, 4, 3, 2, 1]; // 입력값 예시
// let arr = [];
// let stack = [];
// let answer = '';
// for(let i=0; i<cases; i++){
//     arr[i] = i+1;
// }
// for(let j=1; j<=cases; j++){ //4
//     	let count = 1;
//         while(count <= cases && stack[stack.length-1] != input[j]){
//             stack.push(arr.shift());
//             answer += '+\n';
//             count++;
//         }
//     if(stack[stack.length-1] == input[j]){
//         stack.pop();
//         answer += '-\n';
//     }else{
//         answer = 'NO';
//         break;
//     }
// }
// console.log(answer);