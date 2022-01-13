#include <stdio.h>

int main() {

    int b = 87;
    for (int j = 5; j < 23;j++) {
        printf("j=%d, b=%d\n", j, j*b);
        //j=5, b=435
        //j=6, b=522
        //j=7, b=609
        //j=8, b=696
        //j=9, b=783
        //...
        //j=22, b=1914
    }
}
