/*
(Problem Statement)
Every problem starts with a Problem Statement. It tells you in detail about the task to be solved.
Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.

The task is very simple: given two integers A and B, write a program to add these two numbers and output it.

Input Format
This section tells you the format in which your program should receive the input.
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains two Integers A and B.

*/

#include<stdio.h>
int main(){
    
    int t;
    scanf("%d",&t);
    
    while(t--){
        int a,b;
        scanf("%d %d", &a,&b);
        printf("%d \n", a+b);
    }
    return 0;
}
