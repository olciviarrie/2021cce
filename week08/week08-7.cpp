///聰明印平行四邊形

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("\n");

    for(int i=1;i<=n;i++){

        printf("%d: ",i);///i層樓

        ///i層樓,有i顆*,有i個空格

        for(int j=1;j<=i;j++){
            printf(" ");
        }

        for(int k=1;k<=n;k++){
            printf("*");
        }
        printf("\n");
    }
}
