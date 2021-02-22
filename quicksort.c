#include <stdio.h>
#define N 10
void swap(int *i, int *j){
	int swap;
	swap=*i;
	*i=*j;
	*j=swap;
}

int partition(int arr[],int left,int right){
	int i,j,pivot;

	i=left;
	j=right+1;
	pivot=left;
	do{
		do{i++;}while(arr[i]<arr[pivot]);
		do{j--;}while(arr[pivot]<arr[j]);
		if(i<j){swap(&arr[i],&arr[j]);}
	}while(i<j);
	
	swap(&arr[pivot],&arr[j]);

	return j;
}
	
void quicksort(int arr[],int left,int right){
	int pivot;

	if(left<right){
		pivot = partition(arr,left,right);
		quicksort(arr,left,pivot-1);
		quicksort(arr,pivot+1,right);
	}
}
		
int main(){
	int i,arr[N],pivot;
	for(i=0;i<N;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}

	quicksort(arr,0,N-1);

	printf("Sort list\n");
	for(i=0;i<N;i++){
		printf("%d\n",arr[i]);
	}


	
}
