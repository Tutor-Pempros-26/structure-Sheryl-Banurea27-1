// 12S25050 - Sheryl Valentina Banurea
#include <stdio.h>

struct Calculator {
    char operator;
    long result;
    int count;
};

int main(int _argv, char **_argc) {
    struct Calculator calc;
    long bilangan;
    
    scanf(" %c", &calc.operator);
    
    if (calc.operator == '+') {
        calc.result = 0;
    } else if (calc.operator == '-') {
        calc.result = 0;
    } else if (calc.operator == '*') {
        calc.result = 1;
    }
    
    printf("%c\n", calc.operator);
    
    calc.count = 0;
    while (calc.count < 5) {
        scanf("%ld", &bilangan);
        
        if (bilangan == -1) {
            printf("-1\n");
            printf("0\n");
            break;
        }
        
        printf("%ld\n", bilangan);
        
        if (calc.operator == '+') {
            calc.result = calc.result + bilangan;
        } else if (calc.operator == '-') {
            calc.result = calc.result - bilangan;
        } else if (calc.operator == '*') {
            calc.result = calc.result * bilangan;
        }
        
        printf("%ld\n", calc.result);
        
        calc.count++;
    }
    
    return 0;
}
