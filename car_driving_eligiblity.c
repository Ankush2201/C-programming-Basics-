# include<stdio.h>

int main(){
 int umar ; 
 printf("aapki  umar kitni hai\n");
scanf("%d",&umar);
if (umar>=18 && umar<=90 ){
    printf("you can drive\n");
}
else if (umar==17 || umar==16){
    printf("beta pehle sikhlo aur chlao\n ");
}
else if ( umar>=90){
    printf(" budhe ghar bethna .. heheheheh\n ");
}
else {
printf(" you cannot drive \n");
}
return 0 ;
}