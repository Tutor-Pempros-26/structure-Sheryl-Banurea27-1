// 12S25050 - Sheryl Valentina Banurea
#include <stdio.h>

struct Menu {
    int level;
};

int main(int _argv, char **_argc) {
    struct Menu m;
    
    scanf("%d", &m.level);
    
    if (m.level >= 3) {
        printf("vegetables\n");
    }
    if (m.level >= 2) {
        printf("side dishes\n");
    }
    printf("staple food\n");
    
    if (m.level == 1) {
        printf("you need side dishes\n");
    } else if (m.level == 2) {
        printf("you need vegetables\n");
    } else if (m.level == 3) {
        printf("good\n");
    } else if (m.level == 4) {
        printf("very good\n");
    } else if (m.level == 5) {
        printf("perfect\n");
    }
    
    return 0;
}
