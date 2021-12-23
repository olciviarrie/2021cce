///輾轉相除法(有過程版)
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a%b;
    printf("一:%d 二:%d 三:%d\n",a,b,c);

    while(1)///一直做的迴圈
    {
        if(c==0)
        {
            printf("因為c是0，就break離開迴圈");
            break;///離開迴圈
        }
        a=b;
        b=c;
        c=a%b;
        printf("一:%d 二:%d 三:%d\n",a,b,c);
    }
    printf("離開迴圈後，答案是b:%d\n",b);
}

