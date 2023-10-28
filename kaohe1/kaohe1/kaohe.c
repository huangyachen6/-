
//-----------------------输入三个数，输出三个数合成的最大整数------------
// #include <stdio.h>
//int main() {
//    int a, b, c;
//
//    printf("请输入三个非零数字，用空格分隔：");
//    scanf_s("%d %d %d", &a, &b, &c);
//
//    // 将三个数字合成最大的三位整数
//    int maxNum = a > b ? (a > c ? a : c) : (b > c ? b : c);
//    int minNum = a < b ? (a < c ? a : c) : (b < c ? b : c);
//    int midNum = a + b + c - maxNum - minNum;
//
//    int result = maxNum * 100 + midNum * 10 + minNum;
//
//    printf("合成的最大三位整数为：%d\n", result);
//
//    return 0;
//}
//----------------------输入一个字符串ASCII码，输出字符串形式------------
//#include <stdio.h>
//
//int main() {
//    int asciiCode;
//
//    printf("请输入一个ASCII码：");
//    scanf_s("%d", &asciiCode);
//
//    printf("转义后的字符串形式为：\"%c\"\n", asciiCode);
//
//    return 0;
//}
//---------------------求两个数的最大公因数，使用循环------------
//#include <stdio.h>
//
//int main() {
//    int num1, num2;
//
//    printf("请输入两个整数：");
//    scanf_s("%d %d", &num1, &num2);
//
//    // 确保num1大于等于num2
//    if (num1 < num2) {
//        int temp = num1;
//        num1 = num2;
//        num2 = temp;
//    }
//
//    while (num2 != 0) {
//        int remainder = num1 % num2;
//        num1 = num2;
//        num2 = remainder;
//    }
//
//    printf("最大公因数为：%d\n", num1);
//
//    return 0;
//}
//-----------------------用一个字节的一个变量，存储8位数，请问如何如何把它提取出来这8个数，用循环----
//#include <stdio.h>
//
//int main() {
//    unsigned char byte = 0b10101010; // 二进制数10101010，等价于十进制数170
//
//    printf("原始字节值为：%d\n", byte);
//
//    for (int i = 7; i >= 0; i--) {
//        unsigned char bit = (byte >> i) & 1;
//        printf("第%d位的值为：%d\n", 7 - i, bit);
//    }
//
//    return 0;
//}
//------------------输入一个英文句子，输出的时候首字母大写------------
//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//
//void capitalizeFirstLetter(char* sentence) {
//    int length = strlen(sentence);
//    int i = 0;
//
//    // 将句子的第一个字符转换为大写
//    sentence[0] = toupper(sentence[0]);
//
//    // 循环遍历句子中的字符
//    for (i = 1; i < length; i++) {
//        // 如果当前字符是空格，则将下一个字符转换为大写
//        if (sentence[i] == ' ') {
//            sentence[i + 1] = toupper(sentence[i + 1]);
//        }
//    }
//}
//
//int main() {
//    char sentence[100];
//
//    printf("请输入一个英文句子：");
//    fgets(sentence, sizeof(sentence), stdin);
//
//    capitalizeFirstLetter(sentence);
//
//    printf("首字母大写的句子为：%s\n", sentence);
//
//    return 0;
//}