#include<stdio.h>
int main ()
{
	int x;
	int cnt=0;
	
	//for(x=1;x<=100;x++){
	x=1;
	while (cnt<50){
		int i;
		int isprime=1;       //  x是素数
		for(i=2;i<x;i++){
			if(x%i==0){
				isprime=0;
				break; 
			}
		}
		if(isprime==1){
			cnt ++;
			printf("%d ",x);
			if(cnt%5==0){
				printf("\n");
			}
		} 
		x++;
	}
	return 0; 
}
