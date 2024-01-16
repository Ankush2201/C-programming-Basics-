# include<stdio.h>

int main(){
 int marks;
 printf("what  is your marks\n");
 scanf("%d", marks);

switch (marks)
{
case ( 90-100):
printf("Awesome\n");
    break;

case  (89>80):
printf("better\n");
 break;
    
case  (70-79):
printf("good\n");
break;
    
case (0-69) :
printf("ghatiya\n");
break;

default:
printf( "beta ghar betho tum tho");
    break;
}
return 0 ;
}