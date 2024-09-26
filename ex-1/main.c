  #include <stdlib.h>
  #include <stdio.h>


int main()
{

printf("Bonjour, quel est votre nombre ?\n");
 int nombre;

       scanf("%d", &nombre);

if(nombre == 42)
{

printf("Votre nombre est égale a 42\n");

}
else if(nombre > 42)
{

printf("Votre nombre est superieur a 42\n");

}
else
{
printf("Votre nombre est inferieur a 42\n");
}

exit (0);

}

