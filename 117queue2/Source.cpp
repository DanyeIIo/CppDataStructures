#include"Header.h"
//a mozhno 4e to po slozhnee? ? ?
//???????????????????????????????
//1
/*
int main()
{
	queue<int> bbc;
	bbc.Enqueue(1);
	bbc.Enqueue(2);
	bbc.Enqueue(3);
	bbc.Enqueue(4);
	bbc.show();
	//system("pause");
	bbc.Dequeue();
	bbc.Dequeue();
	//system("pause");
	bbc.show();
	return 0;
}
*/
//2

int main()
{
	system("color 0b");
	
	queue2<char> queue2;
	//queue2.PullHighestPriorityElement(); proverka esli pustoi to vizivaet assert
	queue2.InsertWithPriority('k', 1);
	queue2.InsertWithPriority('o', 1);
	queue2.InsertWithPriority('n', 1);
	queue2.InsertWithPriority('4', 1);
	queue2.InsertWithPriority('e', 2);
	queue2.InsertWithPriority('n', 3);
	queue2.InsertWithPriority('i', 3);
	queue2.InsertWithPriority('-', 4);
	queue2.InsertWithPriority('D', 5);
	queue2.InsertWithPriority('a', 5);
	queue2.InsertWithPriority('y', 8);
	queue2.InsertWithPriority('i', 7);
	queue2.InsertWithPriority('n', 6);
	queue2.InsertWithPriority('r', 10);
	queue2.InsertWithPriority('a', 9);
	std::cout << "\nMax priority Element: " << queue2.Peek() << "\n\n";
	queue2.ShowPriority();
	queue2.Show();
	queue2.PullHighestPriorityElement();
	queue2.PullHighestPriorityElement();
	queue2.PullHighestPriorityElement();
	queue2.PullHighestPriorityElement();
	queue2.PullHighestPriorityElement();
	queue2.PullHighestPriorityElement();
	queue2.PullHighestPriorityElement();
	queue2.PullHighestPriorityElement();
	std::cout << std::endl;
	queue2.ShowPriority();
	queue2.Show();
	queue2.InsertWithPriority('D', 0);
	queue2.InsertWithPriority('a', 0);
	queue2.InsertWithPriority('n', 0);
	queue2.InsertWithPriority('i', 0);
	queue2.InsertWithPriority('y', 0);
	queue2.InsertWithPriority('a', 0);
	queue2.InsertWithPriority('r', 0);
	queue2.InsertWithPriority('-', 0);
	std::cout << std::endl;
	queue2.ShowPriority();
	queue2.Show();
	system("pause");
	return 0;
	
	/*
	queue2<int> queue2;
	//queue2.PullHighestPriorityElement(); proverka esli pustoi to vizivaet assert
	queue2.InsertWithPriority(3, 1);
	queue2.InsertWithPriority(2, 1);
	queue2.InsertWithPriority(1, 1);
	queue2.InsertWithPriority(2, 1);
	queue2.InsertWithPriority(12, 2);
	queue2.InsertWithPriority(15, 3);
	queue2.InsertWithPriority(16, 4);
	queue2.InsertWithPriority(17, 5);
	queue2.PullHighestPriorityElement();
	std::cout << "\nMax priority Element: " << queue2.Peek() << "\n\n";
	system("pause");
	return 0;
	*/

}
