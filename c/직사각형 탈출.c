#include <stdio.h>

int main(void)
{
	int x, y, w, h;
	int dx, dy;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (x < w - x)
		dx = x;
	else
		dx = w - x;

	if (y < h - y)
		dy = y;
	else
		dy = h - y;

	if (dx < dy)
		printf("%d", dx);
	else
		printf("%d", dy);

	return 0;
}