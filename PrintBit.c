#include <stdio.h>
int main() {

    char a;
    char b=0x1;
    for(int i=0; i<8; i++) {
        a=0x7a;
        b<<=i;
        printf("%#x에서 %d번 비트는 %x입니다. \n", a,i,b>>i);

    }

}