#include<bits/stdc++.h>
using namespace std;

 int a = 17;
 int b = 20;

string encryptMessage(string m)
{
	
	string ciph = "";
	for (int i = 0; i < m.length(); i++)
	{
		
		if(m[i]!=' ')
			
			ciph = ciph +
						(char) ((((a * (m[i]-'A') ) + b) % 26) + 'A');
		else
			
			ciph += m[i];	
	}
	return ciph;
}

string decryptCipher(string cipher)
{
	string m = "";
	int a_inv = 0;
	int flag = 0;
	
	
	for (int i = 0; i < 26; i++)
	{
		flag = (a * i) % 26;
		
		
		if (flag == 1)
		{
			a_inv = i;
		}
	}
	for (int i = 0; i < cipher.length(); i++)
	{
		if(cipher[i]!=' ')
			
			m = m +
					(char) (((a_inv * ((cipher[i]+'A' - b)) % 26)) + 'A');
		else
		  m += cipher[i];
	}

	return m;
}


int main(void)
{
	string msg = "BECAUSE I'M BATMAN";
	
	
	string cipherText = encryptMessage(msg);
	cout << "Encrypted Message is : " << cipherText<<endl;
	cout << "Decrypted Message is: " << decryptCipher(cipherText);

	return 0;
}
