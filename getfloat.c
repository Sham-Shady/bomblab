#include <stdio.h>

float getfloat (float *pn) {

	int c, sign;
	float pow;
	
	while (isspace (c = getchar()));

	if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.'){
	
	ungetc (c, stdin);
	
	return 0;
	}

	sign = (c == '-') ? -1 : 1;
	
	if (c == '+' || c == '-') c = getchar();
	
	for (*pn = 0; isdigit(c); c = getchar())

	  *pn = 10 * *pn + (c - '0');

	if (c == '.') c = getchar();

	for(pow = 1.0; isdigit(c); c=getchar()){
		*pn = 10.0 * *pn + (c - '0');
		pow *= 10.0;
	}


	*pn *= sign / pow;
	*pn *= sign;
	
	if (c != EOF) ungetc(c, stdin);

	return c;
}

int main ()
{
  float i;
	
  getfloat (&i);
	
  printf ("%f\n" , i);
}



