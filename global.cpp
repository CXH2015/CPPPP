#include<stdio.h>
int units=0;
void critic(void)
{
printf("No luck,chummy.Try again.\n");
scanf("%d",&units);
}
int main(void)
{
printf("How many pounds to a firkin of butter?\n");
scanf("%d",&units);
while(units!=56)
critic();
printf("You must've look it up!\n");
return 0;
}

