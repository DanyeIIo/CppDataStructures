#include"Header.h"
//rabotaet zaebis ote4aiu
int main()
{
	structure::functions list;
	std::list<structure::car1> ListOfCar;
	/*1-8 tasks
	list.ASCII();
	list.bitset();
	list.consoleColour();
	list.lessZero();
	list.NameSurname();
	list.perevod();
	list.year();
	list.zapolnenie_0_1();
	*/
	//9 a , b
	short choose;
	for (;;)
	{
		std::cout << "1 to input characteristics\n";
		std::cout << "2 to output characteristics\n";
		std::cout << "3 to search by number\n";
		std::cout << "4 to redact by index (dazhe esli eto list giiiiiiiiiiiiii)\n";
		std::cout << "0 to end\n";
		std::cin >> choose;
		if (choose == 1)
		{
			list.Input(ListOfCar);
			
		}
		if (choose == 2)
		{
			list.Output(ListOfCar);
		}
		if (choose == 3)
		{
			list.SearchByNumber(ListOfCar);
		}
		if (choose == 4)
		{
			list.Redact(ListOfCar);
		}
		if (choose == 0)
		{
			system("cls");
			std::cout << "WHY SO EZ?";
			break;
		}
		system("pause");
		system("cls");
	}

	
}