#include<stdio.h>
int main(){
	int array[5];
	int n;
	for(int i =0;i<5;i++){
		printf("Nhap gia tri de luu vao mang: ");
		scanf("%d",&n);
		array[i]=n;
	}
	for(int i =0;i<5;i++){
		printf("Gia tri thu %d cua mang da nhap la %d\n",i+1,array[i]);
	}
	return 0 ;
}
