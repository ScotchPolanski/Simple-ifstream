#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	string dateiname = "?";
	cout << "Dateiname: ";
	getline(cin, dateiname);

	
	ifstream quelle(dateiname);
	if (quelle.good())
	{
		while (quelle.good())
		{
			cout << "Der Inhalt von " << dateiname << " ist:\n";
			string zeile;
			getline(quelle, zeile);
			cout << zeile << "\n";
			Sleep(2000);
			return 0;
		}
	}

	if (!quelle.good())
	{
		while (!quelle.good())
		{
			cout << dateiname << " konnte nicht gefunden werden!\n";
			return 1;
		}
	}
}