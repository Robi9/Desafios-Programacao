//go
//Desafio 01 em Go
//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

package main

func findNumbers(nums []int) int {
    var final []int
    for _, i := range(nums){
        aux :=  len(strconv.Itoa(i))%2
        if aux == 0 {
            final= append(final, i)
        }
    }
    return len(final)
    
}
