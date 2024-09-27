// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.

// Example 1:
// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].


int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1;  // Переменная для хранения переноса
    for (int i = digitsSize - 1; i >= 0; i--) {
        digits[i] += carry; //Добавляем единицу к числу
        if (digits[i] < 10) { //если сумма меньше 10, то все ок и возвращаем увеличенный массив
            *returnSize = digitsSize;
            return digits;
        }
        //если все не ок, то есть сумма = 10, то присваеваем 0 и продолжаем счёт
        digits[i] = 0;
        //в конечном итоге если в массиве не все 9, 
        //то мы в какой-то момент "вылетим из цикла" и вернем массив
        //если этого не произошло и мы не вылетели, значит в числе все 9,
        //следовательнл, надо выделять память под другой массив
    }

    // Если мы дошли до сюда, значит все цифры были 9 и у нас теперь массив вида 000...1
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
    result[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        result[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return result;
}
