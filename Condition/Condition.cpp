// Condition.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{

	// avec des booléen return true ou false deux solutions
	bool IsAlive = false;

	if (IsAlive == true) std::cout << "votre personnage est en vie" << '\n';
	else std::cout << "votre personnage est mort" << '\n';

	// return trois solutions
	int Note = 18;

	if (Note > 15) std::cout << "Bravo le goat" << '\n';
	else if (Note <= 15 && Note > 10) std::cout << "pas mal" << '\n';
	else std::cout << "RIP" << '\n';

	int month;
	std::cout << "Entrer le numero du mois" << std::endl;
	std::cin >> month;
	switch (month)
	{
	case 1:
		std::cout << "Janvier";
		break;
	case 2:
		std::cout << "Fevrier";
		break;
	case 3:
		std::cout << "Mars";
		break;
	case 4:
		std::cout << "Avril";
		break;
	case 5:
		std::cout << "Mai";
		break;
	case 6:
		std::cout << "Juin";
		break;
	case 7:
		std::cout << "Juillet";
		break;
	case 8:
		std::cout << "Aout";
		break;
	case 9:
		std::cout << "Septembre";
		break;
	case 10:
		std::cout << "Octobre";
		break;
	case 11:
	case 12:
		std::cout << "Decembre";
		break;
	default:
		std::cout << "Erreur, le mois n'existe pas";
	}

	return 0;
}
// en ne mettent rien après case, il execute le prochain exemple novembre affichera decembre
