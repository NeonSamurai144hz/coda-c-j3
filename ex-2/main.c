 #include <stdlib.h>
  #include <stdio.h>


int main()
{

printf("Choissisez une operation: +, -, *, /, %% \n");

char symbol;
scanf("%c", &symbol);

if(symbol == '+')
{

printf("Vous avez choisi d'effectuer une addition\n");

}
else if(symbol == '-' )
{

printf("Vous avez choisi d'effectuer une soustraction\n");

}
else if(symbol == '*' )
{
printf("Vous avez choisi d'effectuer une multiplication\n");
}

else if(symbol == '/' )
{

printf("Vous avez choisi d'effectuer une division\n");

}

else if(symbol == '%' )
{

printf("Vous avez choisi d'effectuer un modulo\n");

}


else
{
	printf("L'operation %c n'existe pas\n", symbol);
}

exit (0);

}

