#include <stdio.h>
void sort(int a[], int len);
void swap(int *, int *);


int main() {
    int i,n;
    int arr[100];
    int a=1, b=2;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void sort(int a[],int len){
    int i,j;
    for(i=0;i<len-1;i++){ //선택위치
        for(j=i+1;j<len;j++) //비교대상
        {
            if (a[i]>a[j]){
                swap(&a[i], &a[j]);
            }
        }
    }
}
//시험문제 제출