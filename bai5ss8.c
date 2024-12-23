#include<stdio.h>
int main(){
int matran[3][4]={{1,2,3,4},{4,5,6,7},{1,2,5,7}};
int tong;
for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		if(i==0||i==3-1||j==0||j==4-1){
		tong+=matran[i][j];
		}
	}
}
printf("%d",tong);
return 0;
}

