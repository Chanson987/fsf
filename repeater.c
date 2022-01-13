#include <stdio.h>

main() {
    int i=0;
    printf("請輸入數字，程式將會回覆你相同的數字 \n");
    scanf("%d", &i);
    printf("%d", i);
int main() {

    int input;

    printf("每輸入一個數字，程式會再印出相同的數字。\n");
    //fill some condition into the following while loop
    //only ONE line code is you need
    //please refer page 4 of homework request4
    while (scanf("%d", &input)) {
        printf("%d\n", input);
    };
}
