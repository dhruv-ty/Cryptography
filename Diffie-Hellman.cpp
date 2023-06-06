#include <cmath>
#include <iostream>

using namespace std;


long long int power(long long int a, long long int b,
					long long int P)
{
	if (b == 1)
		return a;

	else
		return (((long long int)pow(a, b)) % P);
}


int main()
{
	long long int P, G, x, a, y, b, ka, kb;

	
	P = 29; 
	cout << "The value of P : " << P << endl;

	G = 7; 
	cout << "The value of G : " << G << endl;

	
	a = 5; 
	cout << "The private key a for Peter : " << a << endl;

	x = power(G, a, P); 

	
	b = 3; // b is the chosen private key
	cout << "The private key b for Harry : " << b << endl;

	y = power(G, b, P); 

	ka = power(y, a, P); 
	kb = power(x, b, P); 
	cout << "Secret key for the Peter is : " << ka << endl;

	cout << "Secret key for the Harry is : " << kb << endl;

	return 0;
}