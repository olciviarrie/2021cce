///�o���L����|���

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("\n");

    for(int i=1;i<=n;i++){

        printf("%d: ",i);///i�h��

        ///i�h��,��i��*,��i�ӪŮ�

        for(int j=1;j<=i;j++){
            printf(" ");
        }

        for(int k=1;k<=n;k++){
            printf("*");
        }
        printf("\n");
    }
}
