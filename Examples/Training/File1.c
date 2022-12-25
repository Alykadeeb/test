#include <stdio.h>

#define ROR(REG,num) ( REG= (REG>>num) | (REG<<(8-num)) )
#define ROL(REG,num) ( REG= (REG<<num) | (REG>>(8-num)) )
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )
#define SET_BIT(REG,BIT) ((REG) |= (1 << (BIT)))
#define BIT_IS_CLEAR(REG,BIT) ( (REG & (1<<BIT)) == 0 )
#define CLEAR_BIT(REG,BIT) ((REG) &= ~(1 << (BIT)))



int main(void)
{
	unsigned char var=0;
	SET_BIT(var,0);
	SET_BIT(var,1);
	SET_BIT(var,2);
	printf("var=0x%x\n",var);
	CLEAR_BIT(var,2);
	printf("var=0x%x\n",var);
	ROR(var,1);
	printf("var=0x%x\n",var);
	ROL(var,1);
	printf("var=0x%x\n",var);
	if(BIT_IS_SET(var,2))
	{
		CLEAR_BIT(var,2);
		printf("var=0x%x\n",var);
	}
	if(BIT_IS_CLEAR(var,2))
	{
		SET_BIT(var,2);
		printf("var=0x%x\n",var);
	}
	return 0;
}
