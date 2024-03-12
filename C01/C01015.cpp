#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float a,b,c;
	scanf("%f %f %f", &a, &b, &c);
	if(a == 0){
		if(b==0)
			printf("NO");
		else
			printf("%.2f", -c/b);
	}
	else{
		int delta = pow(b,2)-4*a*c;
		if(delta > 0){
		printf("%.2f %.2f", (-b + sqrt(delta))/(2*a) , (-b - sqrt(delta))/(2*a));
		}
			else if(delta == 0) printf("%.2f", -b/(2*a));
		else printf("NO");
	}	
	return 0;
}
