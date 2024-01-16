# include<stdio.h>

int main(){
     float a ;
     float b ;
     float c;
    printf(" what is the principle \n");
    scanf("%f", &a);
    printf(" what is the rate of intrest \n");
    scanf(" %f", &c );
    printf(" for how much of year \n");
    scanf(" %f", &b );
    printf("total simple intrest %f" ,  (b*a*c)/100 );
     return 0;
}