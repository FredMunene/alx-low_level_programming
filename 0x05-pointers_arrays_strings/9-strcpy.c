#include "main.h"
#include <stdio.h>
/**
 *_strcpy - copiesthe string pointed to by src.
 *includinf the terninatig null byte, to the
 *buffer o]pointed to by dest.
 *@dest: destination.
 *@src: source.
 *Return: the pointer to   dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = o;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
}
