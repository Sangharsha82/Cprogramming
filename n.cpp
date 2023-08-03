#include <stdio.h>

int main()
{
	char name [20];
	printf("enter your  name(in uppercase) ");
	scanf("%[A-Z]",name);
	printf(" \n Your name is %s", name);
	
}
