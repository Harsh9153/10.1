#include<stdio.h>

 ans()
{
      int a,cube;
	  printf("enter value of a ");
	  scanf("%d",&a);
	  
	  cube=a*a*a;
	  return cube;	
}

void main()
{
	printf("cube=%d",ans());
	
}