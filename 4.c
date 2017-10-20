# include <stdio.h>
# include <math.h>

float soma(float x, float y){
	return x+y;
}
float sub(float x, float y){
	return x-y;
}
float mult(float x, float y){
	return x*y;
}
float div(float x, float y){
	return x/y;
}
float pot(float x, float y){
	return pow(x,y);
}

int main(){
	int op, res;
	float x, y;
	scanf("%d %f %f", &op, &x, &y);
	if (op == 1)
		printf("%2.f\n", soma(x, y));
	else if (op == 2)
		printf("%2.f\n", sub(x, y));
	else if (op == 3)
		printf("%2.f\n", mult(x, y));
	else if (op == 4)
		printf("%2.f\n", div(x, y));
	else if (op == 5)
		printf("%2.f\n", pot(x, y));
	else 
		printf(0);
	return 0;
}