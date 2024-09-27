// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:
// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.

// Example 2:
// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

// Example 3:
// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

// Constraints:
// -231 <= x <= 231 - 1

#include <stdbool.h>
#include <stdio.h>
bool isPalindrome(int x) {

    int flag = 0;
    if (x < 0){
        flag = 1;
    }
    int k = 0;
    int size = 0;
    
    if (flag == 0){
        int y = x;

        while(y > 0){
            size = size + 1;
            y = y / 10;
        }
        
        if (size > 0){
            int array[size];

            for (int i = 0; i < size; i ++){
                array[i] = x %10;
                x = x / 10;
            }

            for (int i = 0; i < size/2; i ++){
                if (array[i] == array[size - i - 1]) {
                    k = k + 1;
                }
            }
        }
    }
    return (k == size/2 && flag == 0);
}
