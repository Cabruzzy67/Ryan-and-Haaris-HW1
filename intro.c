#include <stdio.h>
int main() {
	char name[68];
	int favoritenumber = 68;
printf("Hi, what's ur name?\n");
scanf("%s, name");
fflush(stdout);
printf("That's cool, %s \nWhat about a favorite number?\n", name); 
scanf("%d", favoritenumber);
fflush(stdout);
favoritenumber = favoritenumber *2;
printf("Your number is tuff, but doubled is even tuffer, which is %d" , favoritenumber);
return 0;

}
