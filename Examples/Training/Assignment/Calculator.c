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
int addition(int a, int b)
{
    //enter your code here please :)
    return (a + b);
}


// // Function to subtract numbers
int subtraction(int num1, int num2)
{
     //enter your code here please :)
    return num1 - num2;

}

 // Function to multiply numbers
 int multiplication(int x, int y)
 {
      return x*y;
 }



// MAIN
void main()
{       

        // Switch Menu
        switch(menu())
        {
            case 1: addition();
                    break;

        //     case 2: subtraction();
        //             break;

             case 3: multiplication(1,2);
                     break;

            default:
                    printf("\nInvalid Choice !");
        }

}
