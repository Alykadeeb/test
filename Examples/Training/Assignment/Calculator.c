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
	printf("\nDivision");
	float n1 ,n2,res;
	printf("\nPlease enter First number : ");
	scanf("%f",&n1);
	printf("\nPlease enter Second number : ");
	scanf("%f",&n2);
	if(n2==0)
	{
		printf("\nError, you can't divide to 0");
	}else
	{
		printf("\nResult of Division { %f / %f = %f ", n1,n2,n1/n2);
	}
	
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
        
        float num=0;
        scanf("%f",&num);
        printf("%f",tan(num));
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
     
			case 4: division();
					break;
            case 9: tangent();
                    break;

          
            default:
                    printf("\nInvalid Choice !");
        }

}
