#include<stdio.h>
int main(){
int a[]={1,2,3,4,5};
int n,kt;
printf("moi nhap vao phan tu: ");
scanf("%d",&n);
for(int i=0;i<5;i++){
	if(a[i]==n){
		printf("vi tri phan tu trong mang la:%d\n",i);
		kt=1;
		break;
		
	}
	if(!kt){
		printf("phan tu khong ton tai trong mang");
	}
}
return 0;
}

