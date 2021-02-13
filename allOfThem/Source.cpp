#include<iostream>
#include"Header.h"
/*
int main()
{
	Stack First;
	Stack Second;
	First.push_back(1);
	First.push_back(1);
	First.push_back(1);
	First.push_back(4);
	//ff.Show();
	//ff.Delete();
	//ff.Show();
	std::cout << std::endl;
	First.Show();
	std::cout << std::endl;
	Second.Show();
	//Second.Copy(First);
	std::cout << Second.Copy(First);//copied
	std::cout << std::endl;
	Second.Show();
	std::cout << std::endl;
	Stack Third;
	//First =  First + Second;//vivodim 1 2 3 4 1 2 3 4 iz za togo 4to Stack second scopyrovalsya ranee ot Stack First
	Third = First * Second;//vivozhu odinakovie 4isla
	Third.Show();
	return 0;
}
*/
//2
/*
int main()
{
	//rabotaet kak shveitsarskie 4asi
	system("color 0b");
	queue bbc;
	/*
	bbc.AddLessInsert(0, 1);
	bbc.AddLessInsert(1, 2);
	bbc.AddLessInsert(1, 2);
	bbc.AddLessInsert(1, 2);
	bbc.DeleteFromHead();
	bbc.DeleteFromHead();
	bbc.DeleteFromTail();
	bbc.DeleteFromHead();
	bbc.AddToTail(3);
	bbc.AddToTail(4);
	bbc.AddToTail(4);
	bbc.AddToTail(4);
	bbc.AddToTail(4);
	bbc.DeleteFromHead();
	bbc.DeleteFromHead();
	bbc.DeleteFromInsert(1);
	bbc.DeleteFromInsert(0);
	//bbc.DeleteFromTail();
	
	/*bbc.AddToTail(1);
	bbc.AddLessInsert(0, 3);
	bbc.AddLessInsert(1, 4);
	bbc.AddLessInsert(2, 5);
	//bbc.DeleteFromInsert(1);
	
	queue BBC;
	//bbc.Show();
	//BBC.Clone(bbc, bbc.getSize());
	//BBC.Show();

	//BBC.Clone(bbc,bbc.getSize());
	//bbc.Show();
	BBC.AddToTail(1);
	BBC.AddToTail(2);
	BBC.AddToTail(3);
	BBC.AddToTail(4);
	BBC.AddToTail(5);
	BBC.AddToTail(6);
	bbc += BBC;
	queue qwq;
	//qwq = bbc * BBC;
	bbc.Show();
	system("pause");
	return 0;
}
*/
//YEAH BOI
// I DID IT!
// LESS MISTAKE(or not?)
int main()
{
	system("color 0b");
	BinaryPoliceTree ffs;
	ffs.AddNumberOfCar(1, "qwe qwe");
	ffs.AddNumberOfCar(2, "bez prav");
	ffs.AddNumberOfCar(3, "bez mozglii");
	ffs.AddNumberOfCar(7, "bez boshki");
	ffs.AddNumberOfCar(6, "DANIK SOBAKA");
	//ffs.Search(2);
	ffs.ShowAll(ffs.getRoot(),1);
	system("pause");
	return 0;
}