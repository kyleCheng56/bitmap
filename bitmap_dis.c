#include"bitmap_dis.h"

void set_pos(int pos){
	int index=pos>>SHIFT;
	int loca_set=pos&0x1f;	
	arr[index] |=1<<loca_set;	
}

//-1 ,the entry is not exist; 0 ,the entry is exsit;
int find(int pos){
	
	return 0;
}

//return the distance between the head entry and the finded entry;
int get_distance(int pos){
	int cur_pos = (pos%512);   //  pos%512
	int index = cur_pos>>SHIFT;
	int loca_set = pos&0x1f;  //0x1f = 31;
	
	int flags=0;
	int count=0;
	int cur_value=0;	
	int i;
	int size;
	for(i=index;i>=0;i--){ 
           size = 31;
	    if(i==index){	       	   
	       	 size=loca_set;
		   }
	    while(size!=0){
		   cur_value=arr[i]>>size;
			   printf("i = %d,size = %d \n",i,size) ;     	
	       	if((cur_value&0x1)==1){
			  	flags=1;
			  	return count;			  	
			}else{
				count++;
			}
			    size--;	
		   }  
	   }				
	return count;
}
