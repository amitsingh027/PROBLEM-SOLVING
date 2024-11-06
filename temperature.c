// "Write a C program to read temperature in centigrade and display a suitable message according to temperature state below : Go to the editor
// Temp < 0 then Freezing weather
// Temp 0-10 then Very Cold weather
// Temp 10-20 then Cold weather
// Temp 20-30 then Normal in Temp
// Temp 30-40 then Its Hot
// Temp >=40 then Its Very Hot"
#include<stdio.h>
void main(){
    int temp;
    printf("Enter the temperature in celsius");
    scanf("%d",&temp);
    if(temp<=0){
        printf("freezing weather");
    }
    else if(temp>0 && temp<=10){
        printf(" Very cold weather");
    }
    else if(temp>10 && temp<=20){
        printf("Cold weather");
    }
    else if(temp>20 && temp<=30){
        printf("normal");
    }
    else if(temp>30 && temp<=40){
        printf("hot");
    }
    else{
        printf("very hot");
    }
}