#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define size 80

/* Author: Michael Riversky
 this program gets string from the user,
 and return the same string but when the program 
 see that part of the string goes uprow on A-Z' or a-z'
 transforms to form the first char , - , the last char.
 */

char *shorten(char []);
char str2[size];
int main()
	{
	char str[size+1];
	printf("Enter your string here:\n");
	fgets(str,size,stdin);
	printf("Your string is: %s",str);
	shorten(str);
	printf("\nThe new short string is: %s\n",str);
	return 0;
	}

char *shorten(char str[])
	{
	int length=strlen(str);
	int i,j=0,count=1,k=3,q=1;
	for(i=0;i<=length;i++)/*enter to the for loop*/
	{
	  if(isalpha(str[i]))/*checks if the [i] is a-z or A-Z*/          {		
		if(str[i+1]-str[i]==1){
   			if(count==1)/*save the first char that start the seria*/
			q=i;
		count++;
		if((count==2) && (str[i+2]-str[i+1]!=1))/* if there is 2 character in the row of the seria, the char stay as they are*/
		str2[j++]=str[i];
 		}
		
		     
		else
			{
			if(count>=k)/* if we count 3 or more character in the seria*/
			{
	                /*puts the new form first character,-,last character*/
			str2[j++]=str[q];
			str2[j++]='-';
			str2[j++]=str[i];
			
			count=1;
			}
			else
	                /*if the count is under 3*/
			str2[j++]=str[i];
			count=1;
			
			}
		}
		 else
	/*we go here if there is no seria of characters*/
        str2[j++]=str[i];
	}
        /* copy to the original string*/
        strcpy(str,str2);
	return str;
}
