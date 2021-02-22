#include <stdio.h>
#define N 10

void swap(int *i,int *j){
	int swap=*i;
	*i=*j;
	*j=swap;
}

int main(){
	int arr[N],i,j;
	for(i=0;i<N;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<N;i++){
		for(j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				swap(&arr[j],&arr[j-1]);
			}
		}
	}

	printf("\nSort list\n");
	for(i=0;i<N;i++){
	printf("%d\n",arr[i]);
	}
}
