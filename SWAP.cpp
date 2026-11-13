#include<stdio.h>
int main(){
	int arr[]={1,2,3,4};
	int boy[]={4,6,4,8};
	int temp;

for(int i=0;i<4;i++){
	temp=arr[i];
	arr[i]=boy[i];
	boy[i]=temp;
	
	printf("%d\n",arr[i]);
	}

	
	return 0;
}
