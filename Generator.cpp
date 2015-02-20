#include <iostream>
#include <ctime>
#include <cmath>
#include <fstream>
#include <string> 

using namespace std;

int main()
{
	const int n=50;
	string znak="";
	fstream plik;
	plik.open("tekst.txt",ios::in | ios::out);
	srand(time(0));
	for(int i=0; i<n; i++)
	{
		znak+=char(rand()%26+97);
	}
    plik<<znak;
	plik.close();
	return 0;
}