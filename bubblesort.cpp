
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	
	for(int j=0;j<n-1;j++){
		int max=array[0];
		for(int i=0;i<n-j-1;i++){
			if(array[i]<=array[i+1]){
				max=array[i+1];
			}
			if(array[i]>array[i+1]){
				int y=array[i];
				array[i]=array[i+1];
				array[i+1]=y;
				max=array[i+1];
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
