const fs = require('fs');
const root = process.platform === 'linux' ? '/dev/stdin' : './11866.txt';
const [N, K] = fs.readFileSync(root, 'utf8').toString().trim().split(' ').map(a => +a);

const nums = []
for (let i = 1; i <= N; ++i) nums.push(i)

const res = []
let i = 0

while (res.length < N) {
  for (let j = 0; j < K; ++j) {
    if (i >= N) {
      i -= N
    }

    ++i
  }

  res.push(nums[i - 1])
  nums.splice(i - 1, 1)

  // if (progress === K - 1) {
  //   res.push(nums[cursor])
  //   nums.splice(cursor, 1)
  //   progress = 0
  // }
  //
  // if (cursor >= nums.length) {
  //   cursor = 0
  // }
  //
  //
  // cursor++
  // progress++
}

console.log("<" + res.join(", ") + ">")

// const res = []
//
// const nextCur = cur => {
//   cur += +K - 1
//
//   if (cur > nums.length) {
//     cur -= nums.length
//   }
//
//
//   return cur
// }
//
// let cur = +K - 1
// while (res.length < N - K + 1) {
//   const a = nums[cur]
//   res.push(a)
//   nums.splice(cur, 1)
//
//   cur = nextCur(cur)
// }
//
// nums.forEach(x => res.push(x))
//
// console.log('<' + res.join(", ") + '>')
//
// // if (+K - 1 >= nums.length) {
// //   let c = 0
// //   for (let i = 0; i < +K; ++i) {
// //     if (i > nums.length - 1) {
// //       c = 0
// //       continue
// //     }
// //     c++
// //   }
// //
// //   return c
// // } else if (cur > nums.length) {
// //   cur -= nums.length
// // }
