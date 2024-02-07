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
int addition(int var1,int var2,int var3,int var4)
{
    //enter your code here please :)
    return var1+var2+var3+var4;
}

// Function to subtract numbers
// void subtraction()
// {
//      //enter your code here please :)
// }

//  Function to multiply numbers
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
