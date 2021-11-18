///縵猭
///秨﹍產计常琌0,琌计эΘ1礛奔
#include <stdio.h>
int a[10000000]={0,0,0,0};///⊿Τ糶,常穦干0
                    ///跑计,ゑ耕癘拘丁
int main()
{
    int ans=0;
    for(int i=2;i<10000000;i++){
        if(a[i]==0){
            ans++;///printf("%d ",i);

            ///痙i逞(i计)常奔
            for(int k=i+i;k<10000000;k=k+i) a[k]=1;
        }
    }
    printf("ans:%d",ans);
}
