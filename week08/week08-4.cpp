///�p��m�H�U�����

#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);

    for(int j=2;j<=m;j++){///�]��1���O��Ƥ��κ�

        int bad=0;
        for(int i=2;i<j;i++){
            if(j%i==0) bad++;
        }
        if(bad==0) printf("%d ",j);
    }
}
