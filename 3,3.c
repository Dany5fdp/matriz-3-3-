#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main(){
	int m1[3][3] = {{2,1,2},{2,1,2},{2,1,2}}; 
	int m2[3][3] = {{2,3,2},{2,3,2},{2,3,2}};
	int mf[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	int i,j;
	
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
			printf("%d ", m1[i][j]);
			
			
		
			
			
		}
	printf("\n");
	}
		printf("\n");	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", m2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++){
				for(j=0;j<3;j++){
			mf[i][j]= (m1[i][j]* m2[i][j]);
			printf("%d ", mf[i][j]);
}
	
	printf("\n");
}
return 0;
}
