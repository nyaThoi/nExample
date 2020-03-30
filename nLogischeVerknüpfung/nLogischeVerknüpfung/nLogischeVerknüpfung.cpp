// nExample-Verknüpfungen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>

enum gTypen
{
	AND,
	OR,
	NAND,
	NOR,
	XOR,
	XNOR,

	Max
};
class Schaltung
{
public:
	Schaltung(std::string value, bool eingangskriterium, bool eingangskriterium_01)
	{
		int val = -1;
		for (int i = 0; i < gTypen::Max; i++)
		{
			if (value == (std::string)"AND")
			{
				val = 0;
			}
			if (value == (std::string)"OR")
			{
				val = 1;
			}
			if (value == (std::string)"NAND")
			{
				val = 2;
			}
			if (value == (std::string)"NOR")
			{
				val = 3;
			}
			if (value == (std::string)"XOR")
			{
				val = 4;
			}
			if (value == (std::string)"XNOR")
			{
				val = 5;
			}
		}
		switch (val)
		{
		case gTypen::AND:
			aT = gTypen::AND;
			//std::cout << "Set: AND Gatter\n";
			break;
		case gTypen::OR:
			aT = gTypen::OR;
			//std::cout << "Set: OR Gatter\n";
			break;
		case gTypen::NAND:
			aT = gTypen::NAND;
			//std::cout << "Set: NAND Gatter\n";
			break;
		case gTypen::NOR:
			aT = gTypen::NOR;
			//std::cout << "Set: NOR Gatter\n";
			break;
		case gTypen::XOR:
			aT = gTypen::XOR;
			//std::cout << "Set: XOR Gatter\n";
			break;
		case gTypen::XNOR:
			aT = gTypen::XNOR;
			//std::cout << "Set: XNOR Gatter\n";
			break;

		default:
			std::cout << "Not find Gatter Type\n";
			break;
		}
		logik(eingangskriterium, eingangskriterium_01);
	}

	void Debug_AND()
	{
		std::cout << "-- Debug-- \n [ AND ] Gatter \n";

		std::cout << "Eingangskriterium: false , false\n";
		Schaltung("AND", false, false);
		std::cout << "Eingangskriterium: true , false\n";
		Schaltung("AND", true, false);
		std::cout << "Eingangskriterium: false , true\n";
		Schaltung("AND", false, true);
		std::cout << "Eingangskriterium: true , true\n";
		Schaltung("AND", true, true);

		std::cout << "-- End Debug-- \n";
	}
	void Debug_OR()
	{
		std::cout << "-- Debug-- \n [ OR ] Gatter \n";

		std::cout << "Eingangskriterium: false , false\n";
		Schaltung("OR", false, false);
		std::cout << "Eingangskriterium: true , false\n";
		Schaltung("OR", true, false);
		std::cout << "Eingangskriterium: false , true\n";
		Schaltung("OR", false, true);
		std::cout << "Eingangskriterium: true , true\n";
		Schaltung("OR", true, true);

		std::cout << "-- End Debug-- \n";
	}
	void Debug_NAND()
	{
		std::cout << "-- Debug-- \n [ NAND ] Gatter \n";

		std::cout << "Eingangskriterium: false , false\n";
		Schaltung("NAND", false, false);
		std::cout << "Eingangskriterium: true , false\n";
		Schaltung("NAND", true, false);
		std::cout << "Eingangskriterium: false , true\n";
		Schaltung("NAND", false, true);
		std::cout << "Eingangskriterium: true , true\n";
		Schaltung("NAND", true, true);

		std::cout << "-- End Debug-- \n";
	}
	void Debug_NOR()
	{
		std::cout << "-- Debug-- \n [ NOR ] Gatter \n";

		std::cout << "Eingangskriterium: false , false\n";
		Schaltung("NOR", false, false);
		std::cout << "Eingangskriterium: true , false\n";
		Schaltung("NOR", true, false);
		std::cout << "Eingangskriterium: false , true\n";
		Schaltung("NOR", false, true);
		std::cout << "Eingangskriterium: true , true\n";
		Schaltung("NOR", true, true);

		std::cout << "-- End Debug-- \n";
	}
	void Debug_XOR()
	{
		std::cout << "-- Debug-- \n [ XOR ] Gatter \n";

		std::cout << "Eingangskriterium: false , false\n";
		Schaltung("XOR", false, false);
		std::cout << "Eingangskriterium: true , false\n";
		Schaltung("XOR", true, false);
		std::cout << "Eingangskriterium: false , true\n";
		Schaltung("XOR", false, true);
		std::cout << "Eingangskriterium: true , true\n";
		Schaltung("XOR", true, true);

		std::cout << "-- End Debug-- \n";
	}
	void Debug_XNOR()
	{
		std::cout << "-- Debug-- \n [ XNOR ] Gatter \n";

		std::cout << "Eingangskriterium: false , false\n";
		Schaltung("XNOR", false, false);
		std::cout << "Eingangskriterium: true , false\n";
		Schaltung("XNOR", true, false);
		std::cout << "Eingangskriterium: false , true\n";
		Schaltung("XNOR", false, true);
		std::cout << "Eingangskriterium: true , true\n";
		Schaltung("XNOR", true, true);

		std::cout << "-- End Debug-- \n";
	}

private:
	gTypen aT;
	void logik(bool eingangskriterium, bool eingangskriterium_01)
	{
		//AND
		if (aT == AND)
		{
			if (eingangskriterium && eingangskriterium_01)
			{
				std::cout << "[ AND ] Gatter erfuellt.\n";
			}
			else
				std::cout << "[ AND ] nicht erfuellt.\n";
		}
		//OR
		if (aT == OR)
		{
			if (eingangskriterium || eingangskriterium_01)
			{
				std::cout << "[ OR ] Gatter erfuellt.\n";
			}
			else
				std::cout << "[ OR ] nicht erfuellt.\n";
		}
		//NAND
		if (aT == NAND)
		{
			if (!(eingangskriterium && eingangskriterium_01))
			{
				std::cout << "[ NAND ] Gatter erfuellt.\n";
			}
			else
				std::cout << "[ NAND ] nicht erfuellt.\n";
		}
		//NOR
		if (aT == NOR)
		{
			if (!(eingangskriterium || eingangskriterium_01))
			{
				std::cout << "[ NOR ] Gatter erfuellt.\n";
			}
			else
				std::cout << "[ NOR ] nicht erfuellt.\n";
		}
		//XOR
		if (aT == XOR)
		{
			if (eingangskriterium ^ eingangskriterium_01)
			{
				std::cout << "[ XOR ] Gatter erfuellt.\n";
			}
			else
				std::cout << "[ XOR ] nicht erfuellt.\n";
		}
		//XNOR
		if (aT == XNOR)
		{
			if (!(eingangskriterium ^ eingangskriterium_01))
			{
				std::cout << "[ XNOR ] Gatter erfuellt.\n";
			}
			else
				std::cout << "[ XNOR ] nicht erfuellt.\n";
		}

	}

};

int main()
{
	std::cout << "Example \n";
}