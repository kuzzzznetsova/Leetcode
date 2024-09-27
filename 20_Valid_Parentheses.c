// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

// Example 1:
// Input: s = "()"
// Output: true

// Example 2:
// Input: s = "()[]{}"
// Output: true

// Example 3:
// Input: s = "(]"
// Output: false

// Example 4:
// Input: s = "([])"
// Output: true

// Constraints:
// 1 <= s.length <= 104
// s consists of parentheses only '()[]{}'.

bool isValid(char* s) {
    int len = strlen(s);
    char stk[len];
    int top = -1;

    for(int i=0; i < len; i++){
        if(s[i]=='(' || s[i] == '{' || s[i] == '[' ) 
            stk[++top] = s[i];
        else{
            if(top == -1) return false; // Impossible to remove item from empty stack
            if((s[i] == ')' && stk[top] != '(') || (s[i] == '}' && stk[top] != '{') || (s[i] == ']' && stk[top] != '['))
                return false;
            top--;
        } 
    }  
    return top == -1; 
}
