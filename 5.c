# include <stdio.h>

int fatorial(int x){
	if (x<=1)
		return x;
	else
		return x*(fatorial(x-1));
}

int co_binomial(int x, int y, int z){
	return x/(y*z);
}

int main(){
	int n, k, termo_1, termo_2, termo_3;
	scanf("%d %d", &n, &k);
	termo_1 = fatorial(n);
	termo_2 = fatorial(k);
	termo_3 = fatorial(n-k);
	printf("%d\n", co_binomial(termo_1, termo_2, termo_3));
	return 0;
}