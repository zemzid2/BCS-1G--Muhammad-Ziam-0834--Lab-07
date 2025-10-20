#include<stdio.h>
int main(){
	
	char string[100];
	
	printf("Enter a string (eg: 9764916*&^$$gmail.com)\n");
	scanf("%99[^A-Za-z]", string);
	
	printf("The non alphabetic characters stored were %s \n", string);
	return 0;
}
