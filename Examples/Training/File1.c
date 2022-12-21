#define ROR(REG,num) ( REG= (REG>>num) | (REG<<(8-num)) )

#define ROL(REG,num) ( REG= (REG<<num) | (REG>>(8-num)) )

#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

#define BIT_IS_CLEAR(REG,BIT) ( (REG & (1<<BIT)) == 0 )

int main(){
	unsigned char var=0;
	SET_BIT(var,0);
	SET_BIT(var,1);
	SET_BIT(var,2);
	printf("var=0x%x\n",var);
	CLEAR_BIT(var,2);
	printf("var=0x%x\n",var);
	TOGGLE_BIT(var,2);
	printf("var=0x%x\n",var);
	ROR(var,1);
	printf("var=0x%x\n",var);
	ROL(var,1);
	printf("var=0x%x\n",var);
	if(BIT_IS_SET(var,2)){
		CLEAR_BIT(var,2);
		printf("var=0x%x\n",var);
	}
	if(BIT_IS_CLEAR(var,2)){
		SET_BIT(var,2);
		printf("var=0x%x\n",var);
	}
	return 0;
}
