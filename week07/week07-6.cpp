#include <stdio.h>
int main()
{
    int n;///��n�ӤH
    scanf("%d",&n);

    float sum=0;///���n:�[�` ///���X�Ӧ��p���I�n��float

    for(int i=1; i<=n ;i++){
        int now;///�{�b�����Z
        scanf("%d",&now);
        sum=sum+now;///���n
    }

    printf("%.2f",sum/n);
}
