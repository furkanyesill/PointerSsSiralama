#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int *p,arr[20],i,j,temp;
	p=arr;
	
	printf("dizi:\n");
	
	for(i=0;i<20;i++){
		arr[i]=rand()%100;
		printf("%d ",*(p+i));
	}
	
	for(i=0;i<19;i++){
		for(j=i+1;j<20;j++){
			if(*(p+j) > *(p+i)){
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}	
	printf("\n\nsiralanmis dizi:\n");
	
	for(i=0;i<20;i++){
		printf("%d ",*(p+i));
	}	
}

