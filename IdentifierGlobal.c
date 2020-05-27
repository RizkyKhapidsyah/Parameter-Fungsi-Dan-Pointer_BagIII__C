#include <stdio.h>
#include <conio.h>

int D = 3, E = 1;

void Coba_Lokal(int A, int B) {
	int C = 0;
	int D = 0;
	int E;

	E = (A + B) * (C + D);

	printf("Lokal A  = %d\n", A);
	printf("Lokal B  = %d\n", B);
	printf("Lokal C  = %d\n", C);
	printf("Lokal D  = %d\n", D);
	printf("Lokal E  = %d\n", E);
}

int main() {
	int A = 2;
	int B;
	
	B = 4;

	int C = 0;

	printf("main A  = %d\n", A);
	printf("main B  = %d\n", B);
	Coba_Lokal(A, B);
	printf("main C  = %d\n", C);
	printf("main D  = %d\n", D);
	printf("main E  = %d\n", E);

	_getch();
	return 0;

}