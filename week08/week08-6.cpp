///�o���L*

#include <stdio.h>
int main()
{
    printf("1: *\n");
    printf("2: **\n");
    printf("3: ***\n");
    printf("4: ****\n");

    int n=4;
    for(int i=1;i<=n;i++){
        printf("%d: ",i);///i�h��
        ///i�h��,��i��*
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}

