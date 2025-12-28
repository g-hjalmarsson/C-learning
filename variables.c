#include <stdio.h>
#include <stdbool.h> //Includes standard booleans

int main(){

    //This is a variable in c, int is for the type. Int only displays whole numbers. 
    int age = 25;
    int year = 2025;

    //%d This is used to insert varibles into strings.     
    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);

    //A float can diplay numbers with decimal points. At most 6 digits.
    float gpa = 3.9;
    float price = 19.99;

    printf("Your gpa is %.2f\n", gpa);
    printf("The price is %.2f\n", price);

    //A double can display more decimals than a float.
    double pi = 3.14159265358979;

    printf("The value of pi is %.15lf\n", pi);

    //Variables can also display charecters. Char can only have one charecter in them.
    char grade = 'A';
    char currency = 'S';
    //The c stands for char in the print function.
    printf("Your grade is %c\n", grade);
    printf("Your currency is %c\n", currency);

    //To create a string in c you create a array of char.
    char name[] = "Gustav"; //This is a string

    printf("Hello %s\n", name);

    //This is a boolean
    bool isOnline = true;
    printf("%d", isOnline);//This returns one, one stand for true and zero for false

    return 0;
} 