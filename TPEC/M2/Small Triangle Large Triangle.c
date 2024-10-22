/* You are given n  triangles, specifically, their sides ai bi ci. Print them in the same style but sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas are different.
Input Format

The first line of each test file contains a single integer n. n lines follow with three space-separated integers,ai, bi and ci.

Output Format

Print exactly n lines. On each line print  3 space-separated integers, ai bi and ci  of the corresponding triangle

*/

// Small Triangle Large Triangle

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


//from here

float calcArea (triangle tr) //func for cleaner code to calculate the area

{ float p = (tr.a + tr.b + tr.c) / 2.0;

return sqrt (p * (p - tr.a) * (p - tr.b) * (p - tr.c));

}

void sort_by_area(triangle* tr, int n) {
	for (int i = 0; i < n - 1; i++)

              {

                  for (int j = 0; j - n - 1; j++)

                  {

                      if(calcArea(tr[j]) > calcArea(tr[j+1]))

                      {

                          triangle temp = tr[j];

                          tr[j] = tr[j+1];

                          tr[j+1] = temp;

                      }

                  }

              }
}


//till here

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

