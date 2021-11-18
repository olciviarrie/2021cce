#include <stdio.h>
int main()
{
    int a=100;
    int b=200;
    int c;
    printf("a:%d b:%d c:%d\n",a,b,c);
    ///一次宣告很多變數
    int d[3]={100,200,300};
    printf("d[0]:%d\n",d[0]);
    printf("d[1]:%d\n",d[1]);
    printf("d[2]:%d\n",d[2]);

    int e[3];
    printf("e[0]:%d\n",e[0]);
    printf("e[1]:%d\n",e[1]);
    printf("e[2]:%d\n",e[2]);
}
