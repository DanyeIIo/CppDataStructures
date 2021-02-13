#include"Header.h"
int main()
{
	system("color 0b");
	AutoSalone FFS;
	FFS.AddCar(123, 12350, "DayanoCar", 120);
	FFS.AddCar(15213, 1230, "DaimanuCar", 2123);
	FFS.AddCar(123, 6430, "DainamoCar", 201267);
	FFS.AddCar(666, 123510, "DiabloCar", 2006);
	FFS.AddCar(211, 1120, "Durka", 2030);
	FFS.AddCar(322, 1998, "Hellmacar", 2076);
	FFS.Sort();
	FFS.Print();
	std::cout << std::endl;
	system("pause");
	system("cls");
	FFS.Search();
	std::cout << std::endl;
	std::cout << std::endl;
	FFS.DeleteCar();
	FFS.Print();

}
