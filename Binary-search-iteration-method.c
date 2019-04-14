
#include<stdio.h>
int search(int a[],int i,int j,int t)
{
int mid=(i+j)/2;
if(i>j){
	return 0;
    }
if(t==a[mid]){
	return 1;
    }
else if(t<a[mid]){
	search(a,i,mid-1,t);
	}
else{
	search(a,mid+1,j,t);
    }
}
void main()
{
int data,mid,i,j,a[]={1,4,8,9,11,13};
    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }
 printf("\n");
 printf("input data:");
 scanf("%d",&data);
int r=search(a,0,5,data);
	if (r==1){
        printf("found\n");
	}
	else{
		printf("not found\n");
	}
}

