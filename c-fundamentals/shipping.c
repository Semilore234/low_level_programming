#include <stdio.h>
/**
 * main - Computes the dimensional weight of 12 x 10 x 8 box.
 *
 * Return: Always 0
 */
int main(void)
{
	int lenght, width, height, volume, weight;

	lenght = 12;
	width = 10;
	height = 8;
	volume = lenght * width * height;
	weight = (volume + 165) / 166;

	printf("Dimensions: %dx%dx%d.\n", lenght, width, height);
	printf("Volume(cubic inches): %d.\n", volume);
	printf("Dimensional weight(pounds): %d.\n", weight);

	return (0);
}
