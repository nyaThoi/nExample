#include<iostream>
#include<Windows.h>
using namespace std;


class nAmpel
{


public: // Konstruktor: Beim Erzeugen eines Objekts werden der Startzustand und die zeitliche Verzögerung beim Umschalten festgelegt.
	nAmpel(int ZeitVerz)
	{
		zv = ZeitVerz;
	}
	// Methoden:
	void anzeige() //zur Darstellung des momentanen Zustands
	{
		if(gruen)
			cout << "Aktuelle Ampellage: gruen\n";
		if (rot)
			cout << "Aktuelle Ampellage: rot\n";
		if (gelb)
			cout << "Aktuelle Ampellage: gelb\n";

	}
	void stop() //zum Umschalten der Ampel auf rot
	{
		if (rot && !gelb && !gruen)
			cout << "Die Ampel ist bereits auf Rot.\n";

		if (gruen && !gelb && !rot)
		{
			cout << "Umschaltung von Gruen auf Gelb.\n";
			gruen = false;
			gelb = true;
			anzeige();
		}
		if (gelb && !gruen && !rot)
		{
			cout << "Umschaltung von Gelb auf Rot.\n";
			gelb = false;
			rot = true;
			anzeige();
		}

	}
	void go() //zum Umschalten der Ampel auf grün
	{
		if (!rot && !gelb && gruen)
			cout << "Die Ampel ist bereits auf Gruen.\n";		
		if (rot && !gelb && !gruen)
		{
			cout << "Umschaltung von Rot auf Gelb.\n";
			rot = false;
			gelb = true;
			anzeige();
		}
		if (gelb && !rot && !gruen)
		{
			cout << "Umschaltung von Gelb auf Gruen.\n";
			gelb = false;
			gruen = true;
			anzeige();
		}
	}

private:
	bool rot = false;
	bool gelb = false;
	bool gruen = true; //Es wird mit Grün gestartet
	int zv = 0;
};

int main()
{
	string schalten;
	cout << "AMPEL\n\n";
	nAmpel gruen(200);

	gruen.anzeige();
	while (schalten != "B")
	{
		cout << " G fuer auf Gruen schalten, R fuer auf Rot schalten, B zum beenden\n";
		cin >> schalten;
		if (schalten == "G")
			gruen.go();
		if (schalten == "R")
			gruen.stop();
	}


	system("pause");
	return 0;
}

