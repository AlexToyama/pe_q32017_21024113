# include <stdio.h>
# include <math.h>

int main(){
	double a, a1, b, t, p, pi;
	a = 1;
	b = 1/sqrt(2);
	t = 1/4;
	p = 1;
	
	int i;
	for (i = 0; i<10; i++){
		a1 = (a+b)/2;
		b = sqrt(a*b);
		t = t - p*(a-a1)*(a-a1);
		p=2*p;
		a = a1;
	}
	
	pi = (a+b)*(a+b)/(4*t);
	printf("%.20lf\n", pi);
	
	return 0;
}