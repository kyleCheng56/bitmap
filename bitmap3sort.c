#include<stdio.h>
#include<inttypes.h>
#define M 10

int32_t a=0;

int main(void){
	int arr[M]={15,7,3,21,11,4,13,31,12,7};
	int i=0;	
	for(;i<M;i++){
		set(arr[i]);
	}
	print_arr();
}
int set(int pos){
	a|=1<<pos;
};

int print_arr(){
	int len = 2<<sizeof(a);	
	int flags=0;
	int pos=0;
	int temp=0;
	
	while(!flags){
		len--;
		//输出==1，对应的pos 
		if((a&0x1)==1){
			printf(" %d",pos);
		}
		pos++;
		a=a>>1;
		if(len==0) flags=1;		
	}	
}
