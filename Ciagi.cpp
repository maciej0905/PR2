#include <iostream>
#include <ctime>
#include <cmath>
#include <fstream>
#include <string> 

using namespace std;

int main()
{
	const int n=10; //Okresla liczbe znakow w jednym ciagu
	const int m=16; //Okresla liczbe ciagow do wygenerowania
	string znak="";
	fstream plik;
	srand(time(0));
	plik.open("ciagi.txt",ios::in | ios::out);
	for(int j=0; j<m; j++)
	{
		for(int i=0; i<n; i++)
		{
			znak+=char(rand()%26+97);
		}
		znak+="\n";
	}
	plik<<znak;
	plik.close();
	return 0;
}