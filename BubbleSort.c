#include <stdio.h>
int main()
{   
    int n,m,j,temp,i,arr[100];
    printf("Enter n number of numbers you want to sort");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	printf("Enter the numbers:");
    	scanf("%d",&arr[i]);
	}
    
    
 for(i=0;i<n;i++){
 	for(j=i+1;j<n;j++){
 		if(arr[i]<arr[j]){
 			temp=arr[i];
 			arr[i]=arr[j];
 			arr[j]=temp;
		 }
	 }
 }
    
    for(m=0;m<n;m++)
        {
            printf("%d ",arr[m]);
        }
}
