#include <stdio.h>
#include <math.h> // for Trigonometric, Logarithmic and Exponential function

// Menu function (to be called in switch)
int menu()
{
    int ch;
    printf("\n1. Addition");
    //printf("\n2. Subtraction");
    //printf("\n3. Multiplication");
    printf("\nEnter your choice: ");

    scanf("%d", &ch);
    return ch;
}

// Function to add numbers
int addition(int x0, int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8)
{
    int sum = x0 + x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8;
	return sum;
}

// // Function to subtract numbers
// void subtraction()
// {
//      //enter your code here please :)
// }

// // Function to multiply numbers
// void multiplication()
// {
//      //enter your code here please :)
// }



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

        //     case 3: multiplication();
        //             break;

            default:
                    printf("\nInvalid Choice !");
        }

}
