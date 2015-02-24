#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <time.h>
#include <omp.h>
#include <intrin.h>

#pragma intrinsic(__rdtsc)

using namespace std;

int main()
{
	//clock_t start, stop;
	//start = clock();
	unsigned long long a1,a2;
	a1=__rdtsc();
	fstream tekst;
	fstream ciagi;
	tekst.open("tekst.txt",ios::in | ios::out);
	ciagi.open("ciagi.txt",ios::in | ios::out);
	int ile_ciagow=16;
	string text;
	int dl_tekstu;
	tekst>>text;
	//cout<<text;
	//cin>>text;
	dl_tekstu=text.length();
	//Tu kod do równoleglenia pętli for
	for(int i=0; i<ile_ciagow; i++)
	{
		string ciag;
		ciagi>>ciag;
		//cin>>ciag;
		//cout<<ciag;
		int dlugosc_ciagu=ciag.length();
		int licznik=0;
		for(int j=0;j<=(dl_tekstu-dlugosc_ciagu);j++)
		{
			string fragment;
			fragment.insert(0,text,j,dlugosc_ciagu);
			if(fragment==ciag) licznik++;
			//cout<<fragment<<endl;
		}
		cout<<"Ciag nr "<<i<<" wystapil "<<licznik<<" razy."<<endl;
	}
	//cout<<text;

	tekst.close();
	ciagi.close();
	//stop = clock();
	//printf("Czas przetwarzania wynosi %f sekund\n",((double)(stop - start)/1000.0));
	a2=__rdtsc();
	printf("Czas przetwarzania=%llu ns \n", (a2-a1)/4); 
	system("pause");
	return 0;
}
