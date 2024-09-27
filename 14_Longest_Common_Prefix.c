// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"

// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 
// Constraints:
// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters.

char* longestCommonPrefix(char** strs, int strsSize) {
    char* prefix = (char*)malloc(sizeof(char) * (strlen(strs[0]) + 1));
    int i = -1;

    do{
        i++;
        prefix[i] = strs[0][i];
        for(int j=0; j < strsSize; j++){
            if(!strs[j][i] || prefix[i] != strs[j][i]) 
            // Если текущий символ строки strs[j][i] равен нулю (\0, что означает конец строки) 
            // или не равен символу в prefix[i], то prefix[i] устанавливается в ноль (\0).
                prefix[i] = '\0';
        }
        // Цикл продолжается, пока prefix[i] не станет нулем (\0), что означает конец общего префикса.
    } while(prefix[i]);
    return prefix;
        
    free(prefix);
}
