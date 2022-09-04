#include<stdio.h>
#include<conio.h>
 void swap(int* a,int *b){
 	int temp=*a;
 	*a=*b;
 	*b=temp;
 }
 int partition(int A[],int low,int high){
 	int pivot=A[high];
 	int i=low-1;
 	int j;
 	for(j=low;j<=high-1;j++)
	 {
 		if(A[j]<pivot)
		 {i++;
		 swap(&A[i],&A[j]);
 		  	
		 }
	 }
	 swap(&A[i+1],&A[high]);
	 return (i+1);
 }
 void quicksort(int A[],int low,int high){
 	if(low<high)
	 {
      int pi=partition(A,low,high);
 	   quicksort(A,low,pi-1);
 	   quicksort(A,pi+1,high);
    }
 }
 void printArray(int A[],int size){
 	int i;
 	for(i=0;i<size;i++)
	 {
 		printf("%d",A[i]);
	 }
 }
 int main(){
 	int A[]={5,6,2,8,20,13,45,12,90};
 	int n=sizeof(A)/sizeof(A[0]);
 	quicksort(A,0,n-1);
 	printf("sorted Array");
 	printArray(A,n);
 }
