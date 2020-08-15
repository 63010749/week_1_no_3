#include<stdio.h>

int main() {
	printf("<<Your profile>>\n");
	printf("First name : ");
	char first_name[30];
	scanf("%s", first_name);
	printf("Last name : ");
	char last_name[30];
	scanf("%s", last_name);
	printf("Gender (Male/Female) : ");
	char gender[10];
	scanf("%s", gender);
	printf("Age : ");
	int age;
	scanf("%s", &age);
	return 0;
}