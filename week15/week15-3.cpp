///����۰��k(���L�{��)
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a%b;
    printf("�@:%d �G:%d �T:%d\n",a,b,c);

    while(1)///�@�������j��
    {
        if(c==0)
        {
            printf("�]��c�O0�A�Nbreak���}�j��");
            break;///���}�j��
        }
        a=b;
        b=c;
        c=a%b;
        printf("�@:%d �G:%d �T:%d\n",a,b,c);
    }
    printf("���}�j���A���׬Ob:%d\n",b);
}

