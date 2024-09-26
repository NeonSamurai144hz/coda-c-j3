  #include <stdlib.h>
  #include <stdio.h>



int main()
{
      printf("Choissisez un symbol + (montant) ou - (descendant)\n");

	char symbol;
	scanf("%c", &symbol);

	printf("Choisissez un nombre different de 0\n");
 	int nombre;

       scanf("%d", &nombre);

	if(symbol == '+')
	{

		int count = 0;
		while(count < nombre)
		{
       			 printf("%d\n", count);
        		 count = count + 1;
		}

		printf("%d\n", nombre);


	}
	else if(symbol == '-' )
	{
		int count = nombre;
		while(count > 0)
		{
        		printf("%d\n", count);
        		count = count - 1;
		}
       	}
	 else
	{
        	printf("Le symbole %c n'est pas reconnu\n", symbol);
	}

	exit (0);
}
