function solution(num) {
    let count = 0;
    
    while (num !== 1) {
        if (count === 500) return -1; // 500번 반복해도 1이 되지 않으면 -1 반환
        
        if (num % 2 === 0) {
            num = num / 2;
        } else {
            num = num * 3 + 1;
        }
        
        count++;
    }
    
    return count;
}

// 예시 입력
console.log(solution(6)); // 8
