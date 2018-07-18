#include <stdio.h>

void john(void);
void morning(void);

int main(void)
{
	john();
	john();
	morning();
	
	return 0;
}

void john(void)
{
	printf("Panie Janie!\n");
}

void morning(void)
{
	printf("Rano wstan!\n");
}