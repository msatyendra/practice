#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
double triangle_area(triangle T) {
    double p = (double)(T.a + T.b + T.c)/2.0;
    return sqrt(p * (p - T.a) * (p - T.b) * (p - T.c));
}
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    triangle temp;
    unsigned char swapped;
    for(int i = 0; i < (n - 1); i++) {
        swapped = 0;
        for(int j = 0; j < (n - i - 1); j++) {
            if(triangle_area(tr[j]) > triangle_area(tr[j + 1])) {
                //swapping
                temp = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0)
            break;
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
