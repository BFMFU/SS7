#include<stdio.h>
int main(){
	int arr[5];
	int arr1[5];
	for(int i=0;i<5;i++){
		printf("Nhap gia tri cho mang:");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
			
		}
	}
	return 0; 
}
