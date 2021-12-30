#include <stdio.h>
char line[300];
int main()
{
    printf("請輸入你的字串: ");
    scanf("%s",line);///字串不用&
    printf("剛剛輸入的是=%s=",line);
}
