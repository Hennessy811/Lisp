#include <stdio.h>

typedef struct {
	float x;
	float y;
}	point;

int	main(){
	point p;

	p.x = 0.1;
	p.y = 10.0;

	printf("%f", p.x);
	puts("Hello world!");
	return 0;
}
