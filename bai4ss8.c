#include<stdio.h>
int main(){
int matran[4][3]={{10,1,2,4,},{5,6,7}};
int max=matran[0][0];
for(int i=0;i<4;i++){
	for(int j=0;j<3;j++){
		if(matran[i][j]>max){
			max=matran[i][j];
		}
	}
}
printf("%d",max);
return 0;
}

