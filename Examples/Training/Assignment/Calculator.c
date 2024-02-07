#include <stdio.h>
#include <math.h> // for Trigonometric, Logarithmic and Exponential function

// Menu function (to be called in switch)
int menu()
{
    int ch;
    printf("\n1. Addition");
    //printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\nEnter your choice: ");

    scanf("%d", &ch);
    return ch;
}

// Function to add numbers
int addition(int num1, int num2, int num3)    
{
    //enter your code here please :)
    return num1 + num2 + num3;
}

// Function to subtract numbers
signed int subtraction(signed int n1, signed int n2, signed int n3)
{
    return n1-n2-n3;
}

// // Function to multiply numbers
long long multiplication(int a,int b,int c)
{
    return a*b*c;
}



// MAIN
void main()
{       

        // Switch Menu
        switch(menu())
        {
            case 1: //addition();
                    break;

        //     case 2: subtraction();
        //             break;

            case 3: multiplication(4*5*6);
                    break;

            default:
                    printf("\nInvalid Choice !");
        }

}
