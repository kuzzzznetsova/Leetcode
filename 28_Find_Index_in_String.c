// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.

int strStr(char* haystack, char* needle) {
    int len1 = strlen(haystack);
    int len2 = strlen(needle);
    int index = -1;

    for (int i = 0; i <= len1 - len2; i++) {
        int k = 0;
        for (int j = 0; j < len2; j++) {
            if (haystack[i+j] == needle[j]) {
                k++;
            } else {
                break;
            }
        }
        
        if (k == len2) {
            index = i;
            break;
        }
    }
    
    return index;
}
