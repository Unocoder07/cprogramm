#include<stdio.h>
#include<conio.h>
void insertionsort(int A[],int n)
{
	int i,key,j;
	for(i=0;i<=n;i++){
     	key=A[i];
     	j=i-1;
     	while(j>0&&A[j]>key)
		 {
     		A[j+1]=A[j];
     	    j=j-1;
		 }
		 A[j+1]=key;
	}
}
void printArray(int A[],int n)
{
    int i;
for(i=0;i<=n;i++){
	printf("%d,",A[i]);
}
}
int main()
{
	int A[]={30,50,12,6,33,56,90,110};
	int n=sizeof(A)/sizeof(A[0]);
	insertionsort(A,n);
	printf("sorted Array\n");
	printf("\n");
	printArray(A,n);
}

