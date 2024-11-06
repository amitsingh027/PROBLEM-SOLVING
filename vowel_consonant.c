
//check whether an alphabet entered by the user is a vowel or a consonant.
#include <stdio.h>
int main(){
    char c;
    printf("Enter any character");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        printf("VOWEL");

    }
    else{
        printf("consonant");
    }

}