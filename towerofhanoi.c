#include <stdio.h>
void toh(int, char, char, char);
int main()
{
int n;
printf("Enter the number of disks : ");
scanf("%d", &n);
printf("The sequence of moves involved in the Tower of Hanoi are :\n");
toh(n, 'A', 'C', 'B');
return 0;
}

void toh(int n, char fr, char tr, char ar)
{
if (n == 1)
{
printf("\n Move disk 1 from rod %c to rod %c", fr, tr);
return;
}
toh(n - 1, fr, ar, tr);
printf("\n Move disk %d from rod %c to rod %c", n, fr, tr);
toh(n - 1, ar, tr, fr);
}