// Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) {
            return false;
        }
        
        int original = x;  
        int reversed = 0;
        
        // Reversing the integer
        while (x > 0) {
            int digit = x % 10;
            
            // Check for potential overflow before multiplying
            if (reversed > (INT_MAX - digit) / 10) {
                return false;  // Return false if overflow would happen
            }
            
            reversed = reversed * 10 + digit;
            x = x / 10;
        }
        
        return original == reversed;
    }
};
