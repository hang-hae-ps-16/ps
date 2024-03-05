// https://school.programmers.co.kr/learn/courses/30/lessons/12925
/**
* @param {string} s
* @returns {number}
*/
function solution(s) {
    s = s.split("");
    const sign = s.shift();
    return Number(sign + s.join(""));
}