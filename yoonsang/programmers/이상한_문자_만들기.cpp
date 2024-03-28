// https://school.programmers.co.kr/learn/courses/30/lessons/12930?language=javascript
function solution(s) {
    s = s.split(" ")
    const len = s.length
    const buf = []

    for (let i = 0; i < len; ++i) {
        const token = s[i];
        for (let j = 0; j < token.length; ++j) {
            if (j % 2 === 0) {
                buf.push(token[j].toUpperCase())
                continue
            }

            buf.push(token[j].toLowerCase())
        }
        buf.push(" ")
    }

    buf.splice(buf.length - 1, 1)
    return buf.join("")
}

const res = solution("try hello world");
console.log(res)