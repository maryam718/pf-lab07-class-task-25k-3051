#include<stdio.h>
int main(){
	char str[100];
	printf("enter a string:");
	scanf("%[A-Za-z]", str);
	printf("you entered :%s\n",str);
	printf("non alphabetic value");
	scanf("%s-%[A-Za-z]",str );
	printf("you entered :%s\n",str);
	return 0;
}