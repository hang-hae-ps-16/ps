// // let input = require('fs').readFileSync('dev/stdin').toString().trim().split('\n');
// let input = `So when I die (the [first] I will see in (heaven) is a score list).
// [ first in ] ( first out ).
// Half Moon tonight (At least it is better than no Moon at all].
// A rope may form )( a trail in a maze.
// Help( I[m being held prisoner in a fortune cookie factory)].
// ([ (([( [ ] ) ( ) (( ))] )) ]).
// .`;


// function isBalanced(str) {
//     const stack = [];
//     const opening = ['(', '['];
//     const closing = [')', ']'];
//     const pairs = {
//         ')': '(',
//         ']': '['
//     };

//     for (let i = 0; i < str.length; i++) {
//         const char = str[i];
//         if (opening.includes(char)) {
//             stack.push(char);
//         } else if (closing.includes(char)) {
//             if (stack.length === 0 || stack.pop() !== pairs[char]) {
//                 return false;
//             }
//         }
//     }
//     return stack.length === 0;
// }


// const inputLines = input.split('\n');
// for (let i = 0; i < inputLines.length; i++) {
//     const line = inputLines[i].trim(); 
//     if (line === '.') break;
//     console.log(isBalanced(line) ? 'yes' : 'no');
// }

const fs = require('fs');

let input = (fs.readFileSync('./test') + '').toString().trim().split('\n');
const open = ['(', '['];
const close = [')', ']'];
let bracketStack;
const stack = [];

input.pop();//마지막 줄 온점 제거
input.forEach((sentence) => {
  let isBalance = false;
  bracketStack = [];

  for(let i = 0; i < sentence.length; i++) {
    if (open.includes(sentence[i])) {
        bracketStack.push(sentence[i]); // 여는 괄호일 경우 스택에 추가합니다.
    } else if (close.includes(sentence[i])) {
        // 닫는 괄호일 경우
        if (bracketStack.pop() !== open[close.indexOf(sentence[i])]) {
            stack.push('no'); // 'no'를 결과 배열에 추가합니다.
            isBalance = true; //  변수를 true로 설정하여 더 이상 검사하지 않도록 합니다.
            break;
        }
    }
}

  if (!isBalance) {
    if (bracketStack.length === 0) stack.push('yes');
    else stack.push('no');
  }
});