#include <stdio.h>
#include <string.h>
#define size 80
 
/* Author: Michael Riversky
 this program ask from the user a character
 and a string, and show in the output
 all suffix of the string that starts in 
 the character that entered.
 */
int suffix(char[],char);
int main()
{
 char str[size+1];
 char ch,c;
 int res;
 printf("Insert a character please: ");
  ch=getchar();/*gets char*/
 printf("Insert a string here: ");
  c=getchar(); /*this getchar for collect the "garbage"*/
 fgets(str,size,stdin);/*gets string*/
 printf("The character is: %c , and the string is: %s",ch,str);
 printf("All the suffix in the string are:\n%c",c);
  res = suffix(str,ch);
 printf("The number of suffix in the string is: %d\n",res);
 return 0;
}

int suffix(char str[],char ch)
{
int count=0;
/* this loop runs all over the string , when we meet
 the character that entered, it will print the string from 
 the index of this character and makes count+1.
*/
while((str=strchr(str,ch)))
	{
          printf("%s\n",str++);
          count++;
	}
return count;
}

