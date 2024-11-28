#include<stdio.h>
int main(){
	int n;
	while(n<1){
		printf("Nhap so luong gia tri cua mang: ");
		scanf("%d",&n);
	}
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap gia tri cho mang: ");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0 ;
}
