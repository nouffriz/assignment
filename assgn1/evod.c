#include <stdio.h>
#include<string.h>

int main(void) {
				char str[20];
					char temp;
					int i;
					printf("enter a string\n");
					scanf("%s",&str);
					for(i=0;i<strlen(str)-1;i+=2)
					{
						temp=str[i];
						str[i]=str[i+1];
						str[i+1]=temp;
					}
					printf("%s",str);
					
					
					
					
	return 0;
}
