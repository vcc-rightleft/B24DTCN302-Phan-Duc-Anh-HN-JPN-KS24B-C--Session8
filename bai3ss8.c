#include<stdio.h>
int main(){
int n;
printf("moi nhap vao kich thuoc ma tran: ");
scanf("%d",&n);
int matran[n][n];
printf("nhap vao phan tu cho ma tran: \n");
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		printf("nhap phan tu matran[%d][%d]: ",i,j);
		scanf("%d",&matran[i][j]);
	}
}
printf("ma tran vua nhap la:\n");
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		printf("%d\t",matran[i][j]);
	}
	printf("\n");
}
return 0;
}

