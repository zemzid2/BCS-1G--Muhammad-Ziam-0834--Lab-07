#include<stdio.h>
int main(){
	int arr[10], num ,count=0, i;
	
	printf("Enter 10 integers\n");
	
	for (i=0;i<10; i++)
	{
		printf("Enter integer no. %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("enter number to search : ");
	scanf("%d",&num);
	
	for (i = 0; i<10; i++)
	{
		if (arr[i]== num)
		count++;
	}
	
	if (count > 0)
	{
		printf("This number occurred %d times\n", count);
	} 
	else 
	{
		printf("Number not found");
	}
	return 0;
}