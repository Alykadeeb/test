#include <stdio.h>
#include <math.h> // for Trigonometric, Logarithmic and Exponential function

// Menu function (to be called in switch)
int menu()
{
    int ch;
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Remainder");
    printf("\n6. Factorial");
    printf("\n7. Sine");
    printf("\n8. Cosine");
    printf("\n9. Tangent");
    printf("\n10.SquareRoot");
    printf("\n11.CubeRoot");
    printf("\n12.Power");
    printf("\n13.logBase10");
    printf("\nEnter your choice: ");

    scanf("%d", &ch);
    return ch;
}

// Function to add numbers
void addition()
{
    //enter your code here please :)
}

// Function to subtract numbers
void subtraction()
{
     //enter your code here please :)
}

// Function to multiply numbers
void multiplication()
{
     //enter your code here please :)
}

// Function to divide numbers
void division()
{
    //enter your code here please :)
}

// Function to find remainder
void remainder()
{
     //enter your code here please :)
}

// Function to calculate factorial of a number
void factorial()
{
     //enter your code here please :)
}

// Function to calculate sine of angle in radians
void sine()
{
     //enter your code here please :)
}

// Function to calculate cosine of angle in radians
void cosine()
{
     //enter your code here please :)
}

// Function to calculate tangent of angle in radians
void tangent()
{
     //enter your code here please :)
}

// Function to calculate log (base 10)
void SquareRoot()
{
     //enter your code here please :)
}

// Function to calculate e^x
void CubeRoot()
{
     //enter your code here please :)
}

// Function to find the Square Root of a Number
void Power()
{
     //enter your code here please :)
}

// Function to find the Cube Root of a Number
void logBase10()
{
     //enter your code here please :)
}












// MAIN
void main()
{
        // Switch Menu
        switch(menu())
        {
            case 1: addition();
                    break;

            case 2: subtraction();
                    break;

            case 3: multiplication();
                    break;

            case 4: division();
                    break;

            case 5: remainder();
                    break;

            case 6: factorial();
                    break;

            case 7: sine();
                    break;

            case 8: cosine();
                    break;

            case 9: tangent();
                    break;

            case 10:squareRoot();
                    break;

            case 11:cubeRoot();
                    break;

            case 12:power();
                    break;

            case 13:logBase10();
                    break;

            default:
                    printf("\nInvalid Choice !");
        }

}