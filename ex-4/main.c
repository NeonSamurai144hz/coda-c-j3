  #include <stdlib.h>
  #include <stdio.h>


int main()
{

printf("Choisissez un nombre different de 0\n");
 int nombre;

       scanf("%d", &nombre);

int count = 0;
while(count < nombre)
{
	printf("%d\n", count);
	count = count + 1;
}

printf("%d\n", nombre);

exit (0);

}
