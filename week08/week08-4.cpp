///計算m以下的質數

#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);

    for(int j=2;j<=m;j++){///因為1不是質數不用算

        int bad=0;
        for(int i=2;i<j;i++){
            if(j%i==0) bad++;
        }
        if(bad==0) printf("%d ",j);
    }
}
