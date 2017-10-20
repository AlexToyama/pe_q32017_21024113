#include <stdio.h>

int main(){
	float x, y, z, volume;
	scanf("%f %f %f", &x, &y, &z);
	volume = x*y*z;
	printf("%.2f\n", volume);
	
	return 0;
}