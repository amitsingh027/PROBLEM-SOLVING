
//Find the largest number among the three numbers entered by the user.
#include <stdio.h>
void main(){
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is the largest number");

        }
        else{
            printf("c is the largest number");
        }
    }
    if(b>a){
        if(b>c){
            printf("b is the largest number");

        }
        else{
            printf("c is the largest number");
        }
    }
}






