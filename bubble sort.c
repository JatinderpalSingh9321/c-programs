#include<stdio.h>
int main(){
    int i, j, min, n,temp, a[25];
    printf("how many numbers are u going to enter?:");
    scanf("%d",&n);
    printf("Enter %d numbers :",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted elemets: ");
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf("_");
    }
    return 0;
}