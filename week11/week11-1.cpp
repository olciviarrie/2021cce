#include <stdio.h>
int a[10000000]={};
int main()
{
    int ans=0,m;
    scanf("%d",&m);
    for(int i=2;i<m;i++){
        if(a[i]==0){
            printf("%d ",i);
            ans++;
            for(int k=i+i;k<m;k+=i){
                a[k]=1;
            }
        }
    }
    printf("�`�@:%d",ans);
}
