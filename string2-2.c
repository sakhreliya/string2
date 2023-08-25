#include<stdio.h>
#include<string.h>
int main()
{
	char email[]="com";
	char pass[]="123456";
	
	char c_email[100];
	char c_pass[100];
	
	printf("enter email= ");
	gets(c_email);
	printf("enter password= ");
	gets(c_pass);
	
	if(strcmp(email,c_email)==0 || strcmp(pass,c_pass)==0)
	{
		printf("login successfully");
	}
	else
	{
		printf("login not successfully");
	}
}
