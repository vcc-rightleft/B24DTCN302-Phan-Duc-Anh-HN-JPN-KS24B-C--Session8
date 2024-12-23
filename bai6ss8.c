#include<stdio.h>
int main(){
int matran[3][3]={{1,3,4},{1,4,7},{6,4,8}};
int tongcheochinh,tongcheophu,tong;
for(int i=0;i<3;i++){
	tongcheochinh+=matran[i][i];
}
for(int i=0;i<3;i++){
	tongcheophu+=matran[i][3-i-1];
}
tong=tongcheochinh+tongcheophu;
printf("%d",tong);
return 0;
}

