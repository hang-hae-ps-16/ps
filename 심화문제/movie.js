// let fs = require("fs");
// let input = fs.readFileSync("/dev/stdin").toString();
let input = 187;
const N = Number(input);
let current = 666;
let count = 0;
let answer;
while (true) {
  if (String(current).includes("666")) {
    count++;
    if (count === N) {
      answer = current;
      break;
    }
  }
  current++;
}

console.log(answer);