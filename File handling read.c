#include<stdio.h>
int main(){
    FILE *fp1;
    char c;
    fp1=fopen("C:\\Users\\GAGAN\\Desktop\\New folder\\student.txt","r");
    while(c!=EOF){
        c=fgetc(fp1);
        if(c==EOF){
            break;
        }else{
            printf("%c",c);
        }
    }
    fclose(fp1);
    return 0;
}