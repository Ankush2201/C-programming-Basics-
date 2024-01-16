
#include <stdio.h>

int main() {
    int eng;
    int maths;
    int Sci;

    printf("enter the marks of Eng , Maths and Sci outof 100 respectively\n");
    scanf("%d", & eng);
    scanf("%d", & maths);
    scanf("%f" , & Sci);
    if (eng>33 && maths>33 && Sci>33 ){
        printf("you are eligible to check the Final settlement\n");
    }
    if (((eng+maths+Sci)/3)<40){
         printf("you are fail buddy\n");
     }
    else {
        printf("you are not eligible ");
    } 

    

    return 0;
}