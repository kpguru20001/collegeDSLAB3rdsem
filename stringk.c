#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strcopy(char *s1, char *s2)
{
 while(*s2!='\0')
 {
  *s1=*s2;
  s1++;
  s2++;
 }
 *s1='\0';
}
int strcomp(char *s1, char *s2)
{
  
}
void strconcat(char *s1, char *s2)
{
 while(*s1!='\0')
  s1++;
 while(*s2!='\0')
 {
  *s1=*s2;
  s1++;
  s2++;
 }
 *s1='\0';
}
void strreverse(char *s1)
{
 int i=0,j=0,k=0;
 char s3[60];
 while(*s1)
 {
  s1++;
  k++;
 }
 for(i=0,j=k-1;j>=0;i++,j--)
 {
  --s1;
  s3[i]=*s1;
 }
 s3[i]='\0';
 strcopy(s1,s3);
}
void main()
{
 char s1[80],s2[80],t1[80];
 int choice,result;
 printf("enter 2 strings\n");
 gets(s1);
 gets(s2);
 strcopy(t1,s1);
 printf("_______menu________\n");
 printf("1.strcomp\n2.strcopy\n3.strconcat\n4.strreverse\n");
  printf("Enter the choice\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1: strcopy(s1,t1);
            result=0;
           result=strcomp(s1,s2);
	   if(result>0)
	     printf("%s is greater than %s\n",s1,s2);
	   else if(result<0)
	     printf("%s is greater than %s\n",s2,s1);
	   else
	     printf("given strings are equal\n");
	   break;
   case 2: strcopy(s1,t1);
	   printf("before copying, s1=%s\t s2=%s\n",s1,s2);
	   strcopy(s1,s2);
	   printf("after copying, s1=%s\t s2=%s\n",s1,s2);
	   break;
   case 3: strcopy(s1,t1);
	   printf("before concatenation, s1=%s\t s2=%s\n",s1,s2);
	   strconcat(s1,s2);
	   printf("after concatenation, s1=%s\t s2=%s\n",s1,s2);
	   break;
   case 4: strcopy(s1,t1);
	   printf("before reversing, s1=%s\t s2=%s\n",s1,s2);
	   printf("after reversing\n");
	   strreverse(s1);
	   printf("s1=%s\n",s1);
	   strreverse(s2);
	   printf("s2=%s\n",s2);
	   break;
   default : printf("enter correct choice\n");
  }
}
