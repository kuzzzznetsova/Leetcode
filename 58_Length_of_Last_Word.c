// Given a string s consisting of words and spaces, return the length of the last word in the string.

// A word is a maximal substring consisting of non-space characters only.

// Example 1:
// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.

int lengthOfLastWord(char* s) {
    int count = 0; // Инициализируем счетчик для длины последнего слова
    while ((*s) != '\0') { // Пока не достигнут конец строки
        // Если текущий символ пробел, следующий символ не пробел и не конец строки
        if ((*s) == ' ' && (*(s + 1)) != ' ' && (*(s + 1)) != '\0') 
            count = 0; // Обнуляем счетчик, начинаем новое слово
        else {
            if (*s != ' ') // Если текущий символ не пробел
                count++; // Увеличиваем счетчик длины слова
        }
        s++; // Переходим к следующему символу строки
    }
    return count; // Возвращаем длину последнего слова
}
