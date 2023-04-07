#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("2진수로 변환된 값: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    char hex[10];
    int decimal;

    printf("16진수를 입력하세요: ");
    scanf("%s", &hex);
    decimal = strtol(hex, NULL, 16);
    decimalToBinary(decimal);

    return 0;
}
