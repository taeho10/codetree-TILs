#include <stdio.h>
#include<stdlib.h>
int main() {
    int n;
    int *p;
    int i;
    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        if(p[i]==2){
            printf("%d",i+3);
            break;
        }
    }
    return 0;
}