package main

import "fmt"

func findMax(numbers []int) int {
	// Assumes numbers slice is not empty
	maxNum := numbers[0]
	for _, num := range numbers {
		if num > maxNum {
			maxNum = num
		}
	}
	return maxNum
}

func main() {
	input := []int{3, 41, 56, 9, 4, 12}
	fmt.Println(findMax(input)) // output 56
}