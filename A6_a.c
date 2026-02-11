#include <stdio.h>
// to incluse fmod(a,b), function to find modulo os two float
#include <math.h>

float add(float a, float b)
{return a+b;}

float subtract(float a, float b)
{return a-b;}

float multiply(float a, float b)
{return a*b;}

float divide(float a, float b)
{return a/b;}

int main()
{
float a,b;
char o;

printf("Enter required operator: a/A for addition, s/S for subtraction, m/M for multiplication, d/D for division, r/R for reminder");
// %c for character, also leave a blank space character before % to ignore leftover newline.ie, " %c"
scanf(" %c", &o);

printf("Enter the two numbers:");
//scanf tells you how many values it successfully match the required input. Here its 2 float 
if (scanf("%f %f", &a, &b) != 2)
  {printf("Invalid input"); return 1;}


//'a' is character and "a" is string, %.3f is float and include to only 3 decimal place after decimal point
if (o == 'a' || o == 'A')
{printf("Sum of %f and %f is : %.3f\n",a,b,add(a,b));
return 0;}

else if (o == 's' || o == 'S') 
{printf("difference of %f and %f is : %.3f\n",a,b,subtract(a,b));
return 0;}

else if (o == 'm' || o == 'M') 
{printf("Product of %f and %f is : %.3f\n",a,b,multiply(a,b));
return 0;}
//Include part to display "Not Defines if denominator is 0"
else if (o == 'd' || o == 'D')
  {if (b == 0)
    {printf("Not Defined"); return 0;}
  else 
    {printf("Quotient of %f and %f is : %.3f\n",a,b,divide(a,b));
    return 0;}}

else if (o == 'r' || o == 'R') 
  {if (b == 0)
    {printf("Not Defined"); return 0;}
  else 
    {printf("%f modulo %f is : %.3f\n",a,b, fmod(a,b));
    return 0;}}
// Easy way to show error for wrong input. eg wrong operator choosen
else
  {printf("Invalid Input");
  return 1;}
}

