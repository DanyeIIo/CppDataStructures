#include"Header.h"
int main()
{
	system("color 0b");
	Bus<int>ff;
	ff.addBus(1, "Danik Zharmukanov", 322, 2);
	ff.addBus(28, "AZAMAZA", 323, 5);
	ff.addBus(12, "GAVRIK", 111, 10);
	ff.addBus(13, "MAVRIK", 777, 10000);
	//ff.Search(3228);
	//ff.get();
	ff.Show(ff.get(), 0);
	return 0;
}