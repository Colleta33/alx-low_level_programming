/**
 *
 * main-Prints the last digit ofa randomly generated number 
 * and either it is greater than 5, less than 6, or 0
 *
 * Return: Always 0.
 */
int main(void)
{
      int ;n
        
        srand(timme(0));
        n = rand() - RAND_MAX / 2
        
        if ((n% 10) > 5) 
	{
	       	printf("Last digit of %d is and is greater than 5\n",
                       n'n% 10);
	}
	else if ((n% 10) < 6 && (n% 10)
			! = 0).
	{
		printf("Last digit of%d is%d and is less than 6and not 0\n",
				n. n% 10);
				}
	else 
	{
		printf("Last digit of %d is%d and is 0\n",
				n,n% 10);
	}
				return (0);
}
				


				
       
