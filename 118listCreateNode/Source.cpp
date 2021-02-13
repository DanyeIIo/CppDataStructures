#include"Header.h"
int main()
{
    gList<int> mylist;
    mylist.add(2);
    mylist.AddToBegin(1);
    mylist.AddToBegin(2);
    mylist.AddToBegin(3);
    std::cout << mylist[1];
    return 0;
    mylist.add(5);
    mylist.Show();
    mylist.PopBack();
    mylist.Show();
    mylist.PopBack();
    mylist.Show();  
    mylist.DeleteAll();
    std::cout << std::endl;
    mylist.Show();
    mylist.add(1);
    mylist.Show();
    system("pause");
    return 0;
}