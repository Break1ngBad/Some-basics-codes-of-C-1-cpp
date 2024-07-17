#include<stdio.h>

int main ()
{
    int DaysinJan=31;
    int DaysinFeb=28;
    int DaysinLFeb=DaysinFeb+1;
    int DaysinMarch=31;
    
    int DaysinApril=30;
    int DaysinMay=31;
    int DaysinJune=30;
    
    int DaysinJuly=31;
    int DaysinAug=30;
    int DaysinSept=31;
    
    int DaysinOct=31;
    int DaysinNov=30;
    int DaysinDec=31;
    
    int Q1=DaysinJan +DaysinFeb +DaysinMarch;
    int LQ1=DaysinJan +DaysinLFeb +DaysinMarch;
    
    int Q2=DaysinApril +DaysinMay +DaysinJune;
    int LQ2=Q2;
    
    int Q3=DaysinJuly +DaysinAug +DaysinSept;
    int LQ3=Q3;
    
    int Q4=DaysinOct +DaysinNov +DaysinDec;
    int LQ4=Q4;
    
    
    printf("A leap year \n");
    printf("Days in Q1 of the current year: %d\n", LQ1);
    printf("Days in Q2 of the current year: %d\n", LQ2);
    printf("Days in Q3 of the current year: %d\n", LQ3);
    printf("Days in Q4 of the current year: %d\n", LQ4);  
    
    printf("An Ordinary year \n");
    printf("Days in Q1 of the current year: %d\n", Q1);
    printf("Days in Q2 of the current year: %d\n", Q2);
    printf("Days in Q3 of the current year: %d\n", Q3);
    printf("Days in Q4 of the current year: %d\n", Q4);  
    
    return 0;
}