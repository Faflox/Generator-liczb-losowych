#include <string>
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <windows.h>

int main()
{
	std::cout << "***Witaj w generatorze liczb pseudolosowych***\n\n";
	int rozstrzal, ilosc;
	do
	{
		std::cout << "Powiedz, ile liczb losowych potrzebujesz?\n\n";
		std::cin >> ilosc;
		system("CLS");
		std::cout << "Otrzymasz " << ilosc << " liczb losowych...\n\n";
		std::cout << "\nPodaj rozstrzal, z jakiego ma byc wylosowana liczba\n(Jesli chcesz zakonczyc dzialanie programu, wybierz 0)\n\n";
		std::cin >> rozstrzal;
		if (rozstrzal == 0||ilosc==0)
		{
			system("CLS");
			std::cout << "Nastepuje wylaczenie programu...\nDziekujemy za skorzystanie";
		}
		else
		{
			srand(time(NULL));
			system("CLS");
			std::cout << "Twoje wylosowane liczby od 1 do " << rozstrzal << " wynosza: \n";
			for (int i = 0; i <= 2; i++)
			{
				Sleep(500);
				std::cout << ".";
			}
			Sleep(500);
			for (int j=1;j<=ilosc;j++)
			{
				int num = (rand() % rozstrzal) + 1;
				std::cout << "\n" << num << "\n";
			}
			std::cout << "\n";
		}
	} while (rozstrzal != 0);
}
