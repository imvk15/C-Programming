#include<stdio.h>
int main()
{
int M;
printf("marks ranging from 0-100:");
scanf("%d",&M);
if (M<=100 && M>80)
printf ("your grade is:A");
else if (M<=80 && M>60)
printf ("your grade is:B");
else if (M<=60 && M>40)
printf ("your grade is:C");
else if (M<=40 && M<=0)
printf ("your grade is:fail");
else
printf ("your number is invalid");
return 0;
}