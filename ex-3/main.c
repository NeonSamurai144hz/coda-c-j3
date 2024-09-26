  #include <stdlib.h>
  #include <stdio.h>


int main()
{

printf("Saissisez un mot de moins 50 caracteres\n");
  char mot [50];
       scanf("%50s", mot);

int count = 0;
while(count < 5)
{
	printf("%s\n", mot );
	count = count + 1;
}

exit (0);
}
