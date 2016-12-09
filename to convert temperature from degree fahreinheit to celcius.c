/*
Student name: anuj shrestha
Subject: Programming Fundamental
Roll:05
Program: WAP to program to convet temperature from deree fahreinheit to celcius
Lab sheet no:
Date: 28th nov
*/

#include<stdio.h>
#include<conio.h>
int main(){
    float celc,fah;
    printf("Enter the temperature in Fahrenheit:\n");
    scanf("%f",&fah);
    celc=fah*1.8+32;
    printf("The temperature in Celcius is :%f",celc);
    getch();
    return 0;
}
