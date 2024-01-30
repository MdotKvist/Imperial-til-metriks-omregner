#include <iostream>
#include <string>

using namespace std;

const double mile = 1609.344; //meter
const double yard = 0.9144; //meter
const double foot = 0.3048; //meter
const double inch = 0.0254; //meter
const double acre = 0.40468564224; //hektar
const double gallon = 4546.09; // mililiter
const double pint = 568.26125; // militer
const double fluid_ounce = 28.4130625; // mililiter
const double stone = 6.35029318; // kg
const double pound = 0.45359237; // kg
const double ounce = 28.34952337; // g
double v�rdien;
double resultat;

int main()
{
	cout << "Omregner \n \n";

	// vælg hvad du vil regne fra?

	string imme;
	cout << "V\x91lge hvad du vil omregne fra:\n1) metrisk\n2) imperisk\n";
	cin >> imme;
	cout << " \n";
	

	// Metrisk udregninger
	if (imme == "1" || imme == "metrisk") {
		string fra;
		cout << "Hvad vil du gerne omregne fra?\n";
		cout << "1) meter\n2) hektar\n3) mililiter\n4) kg\n5) g\n6) celsius\n";
		cin >> fra;

		label:

		//vælg hvad du vil regne til

		string til;
		cout << "Hvad vil du omregne til?\n";
		cout << "1) mile\n2) yard\n3) foot\n4) inch\n5) acre\n6) gallon\n7) pint\n8) fluid ounce\n9) stone\n10) pound\n11) ounce\n12) fahrenheit\n";
		cin >> til;
		
		//omregn fra meter til miles
		if (fra == "1" && til == "1") {
			cout << "indtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien / mile;
			cout << "\n" << resultat << " miles ";
		}
		// omregn fra hektar til acre
		else if (fra == "2" && til == "5") {
			cout << "indtast v\x91rdi:";
			cin >> v�rdien;
			resultat = v�rdien / acre;
			cout << "\n" << resultat << " acres";
		}
		// omregn fra mililiter til gallon
		else if (fra == "3" && til == "6") {
			cout << "indtast v\x91rdi:";
			cin >> v�rdien;
			resultat = v�rdien / gallon;
			cout << "\n" << resultat << " gallons";
		}
		// omregn fra kg til pound
		else if (fra == "4" && til == "10") {
			cout << "indtast v\x91rdi:";
			cin >> v�rdien;
			resultat = v�rdien / pound;
			cout << "\n" << resultat << " pounds";
		}
		// omregn fra g til ounce
		else if (fra == "5" && til == "11") {
			cout << "indtast v\x91rdi:";
			cin >> v�rdien;
			resultat = v�rdien / ounce;
			cout << "\n" << resultat << " ounces";
		}
		//omregn fra celsius til fahrenheit
		else if (fra == "6" && til == "12") {
			cout << "indtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien * 1.8 + 32;
			cout << "\n" << resultat << " fahrenheit ";
		}
		//omregn fra meter til yards
		else if (fra == "1" && til == "2") {
			cout << "indtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien / yard;
			cout << "\n" << resultat << " yards ";
		}
		//omregn fra meter til foot
		else if (fra == "1" && til == "3") {
			cout << "indtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien / foot;
			cout << "\n" << resultat << " feets ";
		}
		//omregn fra meter til inch
		else if (fra == "1" && til == "4") {
			cout << "indtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien / inch;
			cout << "\n" << resultat << " inches ";
		}
		// omregn fra mililiter til pint
		else if (fra == "3" && til == "7") {
			cout << "indtast v\x91rdi:";
			cin >> v�rdien;
			resultat = v�rdien / pint;
			cout << "\n" << resultat << " pints";
		}
		// omregn fra mililiter til fluid ounce
		else if (fra == "3" && til == "8") {
			cout << "indtast v\x91rdi:";
			cin >> v�rdien;
			resultat = v�rdien / fluid_ounce;
			cout << "\n" << resultat << " fluid ounces";
		}
		// omregn fra kg til stone
		else if (fra == "4" && til == "9") {
			cout << "indtast v\x91rdi:";
			cin >> v�rdien;
			resultat = v�rdien / stone;
			cout << "\n" << resultat << " stones";
		}
		else {
			cout << "dette er umuligt, pr\x9Bv venligst igen! \n \n";
			goto label;
		}
	}



		// Imperiske  udregninger
	if (imme == "2" || imme == "imperisk") {
		string fra;
		cout << "Hvad vil du gerne omregne fra?\n";
		cout << "1) mile\n2) yard\n3) foot\n4) inch\n5) acre\n6) gallon\n7) pint\n8) fluid ounce\n9) stone\n10) pound\n11) ounce\n12) fahrenheit\n";
		cin >> fra;
		cout << "\n";

		//omregn fra miles
		if (fra == "1" || fra == "mile") {
			cout << "\nindtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien * mile;
			cout << "\n" << resultat << " meter ";
		}
		// omregn fra yards
		if (fra == "2" || fra == "yard") {
			cout << "\nindtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien * yard;
			cout << "\n" << resultat << " meter ";
		}
		//omregn fra foot
		if (fra == "3" || fra == "foot") {
			cout << "\nindtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien * foot;
			cout << "\n" << resultat << " meter ";
		}
		//omregn fra inch
		if (fra == "4" || fra == "inch") {
			cout << "\nindtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien * inch;
			cout << "\n" << resultat << " meter ";
		}
		//omregn fra acre
		if (fra == "5" || fra == "acre") {
			cout << "\nindtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien * acre;
			cout << "\n" << resultat << " hektar ";
		}
		//omregn fra gallon
		if (fra == "6" || fra == "gallon") {
			cout << "\nindtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien * gallon;
			cout << "\n" << resultat << " mililiter ";
		}
		//omregn fra pint
		if (fra == "7" || fra == "pint") {
			cout << "\nindtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien * pint;
			cout << "\n" << resultat << " mililiter ";
		}
		//omregn fra fluid ounce
		if (fra == "8" || fra == "fluid ounce") {
			cout << "\nindtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien * fluid_ounce;
			cout << "\n" << resultat << " mililiter ";
		}
		//omregn fra stone
		if (fra == "9" || fra == "stone") {
			cout << "\nindtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien * stone;
			cout << "\n" << resultat << " kg ";
		}
		//omregn fra pound
		if (fra == "10" || fra == "pound") {
			cout << "\nindtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien * pound;
			cout << "\n" << resultat << " kg ";
		}
		//omregn fra ounce
		if (fra == "11" || fra == "ounce") {
			cout << "\nindtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = v�rdien * ounce;
			cout << "\n" << resultat << " g ";
		}
		//omregn fra Fahrenheit til celsius
		if (fra == "12" || fra == "fahrenheit") {
			cout << "\nindtast v\x91rdi: ";
			cin >> v�rdien;
			resultat = (v�rdien - 32) * 5 / 9;
			cout << "\n" << resultat << " Celsius ";
		}
	}
	// mulighed for at starte forfra eller lukke programmet
	string f�rdig;
	cout << "\nVil du starte for fra?\n1) ja\n2) nej\n";
	cin >> f�rdig;
	if (f�rdig == "1" || f�rdig == "ja") {
		main();
	}
	else (f�rdig == "2" || f�rdig == "nej"); {
		exit;
	}
	
}