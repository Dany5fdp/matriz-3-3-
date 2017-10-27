#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main(){
	int m1[3][3] = {{0,2,-1},{-1,0,3},{0,2,-1}}; 
	int m2[3][3] = {{1,-2,0},{1,0,3},{1,2,3}};
	int mf[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	int x,y;  /* x renglon, y columna */
	
			for(x=0;x<3;x++){
				for(y=0;y<3;y++){
			printf("%d ", m1[x][y]);
			
			
		
			
			
		}
	printf("\n");
	}
		printf("\n");	
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			printf("%d ", m2[x][y]);
		}
		printf("\n");
	}
	printf("\n");
	for(x=0;x<3;x++){
				for(y=0;y<3;y++){
			mf[x][y]= (m1[x][y]* m2[x][y]+m1[x][y]* m2[x][y]+m1[x][y]* m2[x][y]);
			printf("%d ", mf[x][y]);
}
	
	printf("\n");
}
return 0;
}
