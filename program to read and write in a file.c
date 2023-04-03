#include <stdio.h>
int main() {
	char name[50];
	int marks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
    char c;
	fptr=(fopen("C:\\Users\\GAGAN\\Desktop\\New folder\\student.txt","w"));
	if(fptr==NULL) {
		printf("Error!");
	}
	for (i=0;i<n;i++) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
    fptr=fopen("C:\\Users\\GAGAN\\Desktop\\New folder\\student.txt","r");
    while(c!=EOF){
        c=fgetc(fptr);
        if(c==EOF){
            break;
        }else{
            printf("%c",c);
        }
    }
    fclose(fptr);
    return 0;
}