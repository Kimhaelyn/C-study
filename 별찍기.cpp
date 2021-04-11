#include<iostream>
using namespace std;
int main()
{
	int n, i, j; 
	cin >> n;
	for (i = 1; i <= n * 2; i++) //ÀüÃ¼ ÇàÀÇ ¼ö´Â n*2
	{
		for (j = 1; j <= n; j++) //ÀüÃ¼ ¿­ÀÇ ¼ö´Â n
		{
			if (i % 2 == 0) //Â¦¼ö ÇàÀÏ °æ¿ì
			{
				if (j % 2 == 0) 
					cout << "*"; // Â¦¼ö ¿­¿¡ * Âï±â
				else cout << " "; // È¦¼ö ¿­¿¡¼­ ÇÑ Ä­ ¶ç¿ì±â
			}
			else //È¦¼ö ÇàÀÏ °æ¿ì
			{
				if (j % 2 == 0)
					cout << " "; // Â¦¼ö ¿­¿¡¼­ ÇÑ Ä­ ¶ç¿ì±â
				else cout << "*"; // È¦¼ö ¿­¿¡ * Âï±â
			}
		}
		cout << endl;
	}
}