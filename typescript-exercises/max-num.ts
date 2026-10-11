function findMax(numbers: number[]): number | null {
    if (numbers.length === 0) {
        return null;
    }

    let maxNum = numbers[0];
    for (let num of numbers) {
        if (num > maxNum) {
            maxNum = num;
        }
    }
    return maxNum;
}

console.log(findMax([3, 41, 56, 9, 4, 12]));