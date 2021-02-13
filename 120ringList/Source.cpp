#include"Header.h"
int main()
{
	//rabotaet kak shveitsarskie 4asi
	system("color 0b");
	queue bbc;
	bbc.AddToHead(1);
	bbc.AddToHead(2);
	bbc.AddToHead(3);
	bbc.AddToHead(4);
	bbc.AddToHead(5);
	bbc.Show();
	bbc.DeleteFromInsert(4);
	bbc.Show();
	bbc.AddLessInsert(0, 333);
	bbc.Show();
	bbc.AddLessInsert(4, 111);
	bbc.Show();
	//bbc.DeleteFromTail();
	system("pause");
	return 0;
}