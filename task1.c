#include<stdio.h>
int main(){
	int arr[5],i,n;
	printf("enter 5 varaibles");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	n=arr[4];
	for(i=4;i>0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=n;
	printf("shifted array");
		for(i=0;i<5;i++){
			
		printf("%d",arr[i]);
		}
		return 0;
}