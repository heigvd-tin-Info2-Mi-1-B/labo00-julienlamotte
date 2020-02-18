#include <stdio.h> 
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#define taille 50

int16_t main(void)
{
	char chaine[taille];
	int16_t arguments = 0;

	fgets(chaine, taille, stdin);

	for (int16_t i = 0; i < taille; i++)
	{
		if (chaine[i] == ' ' || chaine[i] == '\0');
		{
			chaine[i] = '\n';
			arguments++;
		}

	}
	printf("%d", arguments);
	printf("%s", chaine);

	return 0;
}