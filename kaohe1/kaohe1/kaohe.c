
//-----------------------����������������������ϳɵ��������------------
// #include <stdio.h>
//int main() {
//    int a, b, c;
//
//    printf("�����������������֣��ÿո�ָ���");
//    scanf_s("%d %d %d", &a, &b, &c);
//
//    // ���������ֺϳ�������λ����
//    int maxNum = a > b ? (a > c ? a : c) : (b > c ? b : c);
//    int minNum = a < b ? (a < c ? a : c) : (b < c ? b : c);
//    int midNum = a + b + c - maxNum - minNum;
//
//    int result = maxNum * 100 + midNum * 10 + minNum;
//
//    printf("�ϳɵ������λ����Ϊ��%d\n", result);
//
//    return 0;
//}
//----------------------����һ���ַ���ASCII�룬����ַ�����ʽ------------
//#include <stdio.h>
//
//int main() {
//    int asciiCode;
//
//    printf("������һ��ASCII�룺");
//    scanf_s("%d", &asciiCode);
//
//    printf("ת�����ַ�����ʽΪ��\"%c\"\n", asciiCode);
//
//    return 0;
//}
//---------------------�������������������ʹ��ѭ��------------
//#include <stdio.h>
//
//int main() {
//    int num1, num2;
//
//    printf("����������������");
//    scanf_s("%d %d", &num1, &num2);
//
//    // ȷ��num1���ڵ���num2
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
//    printf("�������Ϊ��%d\n", num1);
//
//    return 0;
//}
//-----------------------��һ���ֽڵ�һ���������洢8λ�������������ΰ�����ȡ������8��������ѭ��----
//#include <stdio.h>
//
//int main() {
//    unsigned char byte = 0b10101010; // ��������10101010���ȼ���ʮ������170
//
//    printf("ԭʼ�ֽ�ֵΪ��%d\n", byte);
//
//    for (int i = 7; i >= 0; i--) {
//        unsigned char bit = (byte >> i) & 1;
//        printf("��%dλ��ֵΪ��%d\n", 7 - i, bit);
//    }
//
//    return 0;
//}
//------------------����һ��Ӣ�ľ��ӣ������ʱ������ĸ��д------------
//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//
//void capitalizeFirstLetter(char* sentence) {
//    int length = strlen(sentence);
//    int i = 0;
//
//    // �����ӵĵ�һ���ַ�ת��Ϊ��д
//    sentence[0] = toupper(sentence[0]);
//
//    // ѭ�����������е��ַ�
//    for (i = 1; i < length; i++) {
//        // �����ǰ�ַ��ǿո�����һ���ַ�ת��Ϊ��д
//        if (sentence[i] == ' ') {
//            sentence[i + 1] = toupper(sentence[i + 1]);
//        }
//    }
//}
//
//int main() {
//    char sentence[100];
//
//    printf("������һ��Ӣ�ľ��ӣ�");
//    fgets(sentence, sizeof(sentence), stdin);
//
//    capitalizeFirstLetter(sentence);
//
//    printf("����ĸ��д�ľ���Ϊ��%s\n", sentence);
//
//    return 0;
//}