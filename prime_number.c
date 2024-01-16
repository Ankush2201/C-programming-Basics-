# include<stdio.h>

int main(){
 int n;
 printf("what is the value of number\n");
 scanf("%d", &n);
 for ( int a =2; a<100 ; a++)
 {
    if(n%a==0){
    printf(" number is not the prime number\n");
    } 
    else (" prime ");
    break ;

    
 }
 
    

 
 

return 0 ;
}