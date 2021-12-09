#include <stdio.h>
void printStar(int n)///printstar是函式的名稱
{
    for(int i=0;i<n;i++)
    {
        printf("*");
    }
}
int main()
{
    printStar(7);///呼叫我外面寫的函式
}
