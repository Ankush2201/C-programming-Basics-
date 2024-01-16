# include<stdio.h>

int main(){
 int a=0;
 int n;
 printf("enter the number you want table of \n");
scanf( " %d" , &n);
while (a<10)
{
     printf("%d\n", n * a   );
     a++;
}

return 0 ;
}