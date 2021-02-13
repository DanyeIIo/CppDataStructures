#include"Header.h"
int main()
{
	system("color 0b");
	std::cout << "Is it am? or pm? am - 0, pm - 1\n";
	
	int am_pm = 0;
	std::cin >> am_pm;
	system("cls");
	minibus_stop<int> ff(am_pm);
	ff.people_at_bus_stop();
	ff.people_and_bus();
	std::cout << "eto dauni na ostanovke\n";
	ff.show();
	system("pause");
	std::cout << std::endl;
	ff.kto_skolko_zhdal();
	return 0;
}