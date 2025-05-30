#include <stdio.h>

int main(void) {
    // 1の段：1×1〜1×9まで表示
    for (int i = 1; i <10; i++){
    for (int j = 1; i <10; j++){
    printf("%4d",i*j);
    }
printf("\n");
     
    }
    for ( int i= 1; i < 10; i++){
    for (int j = 1; i <10; j++){
        printf("%4d",i,j,i*j);
    }
        /* code */
    }
    
    
    return 0;
}
