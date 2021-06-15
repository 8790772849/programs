#include<stdio.h>
void main()
{
 int i;
 printf("\n1. red\n2. blue\n3. yellow\n4. orange");
 printf("\n select any number from the above options \n");
 scanf("%d",&i);
 switch(i)
 {
  case 1:
   printf("you choosed red color");
   break;
  case 2:
   printf("you choosed blue color");
   break;
  case 3:
   printf("you choosed yellow color");
   break;
  case 4:
   printf("you choosed orange color");
   break;
  default:
   printf("you choosed wrong number");
  }
 }
