///�p��n�O�_�����

#include <stdio.h>
int main()
{
    int n,bad=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++){ ///�u�P�_��_�㰣2~n-1,�]����Ưణ�ۤv�M1
        if(n%i==0) bad++;
    }
    if (bad==0) printf("%d�O���",n);
    else printf("%d���O���",n);
}
