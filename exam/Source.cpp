
#include<iostream>
#include<istream>
#include <time.h>
/*
using namespace std;

class string2 {
private: char* arr;
public: string2()
{
	this->arr = new char[81];
}
	  string2(int size) : string2() {
		  this->arr = new char[size + 1];
	  }
	  string2(int size, char* sizeString) : string2(size)
	  {
		  this->arr = new char[size + 1];
		  //tut?
		  for (ptrdiff_t i = 0; i < size; i++)
		  {
			  this->arr[i] = sizeString[i];
			  // tut?
		  }
	  }
	  string2(const string2& object)
	  {
		  this->arr = object.arr;
	  } ~string2()
	  {
		  delete[]arr;
	  }
	  void Input()
	  {
		  std::cin.ignore();
		  std::cin.getline(arr, 80);
	  }
	  void Input(int size)
	  {
		  string2 f(size);
		  std::cin.ignore();
		  std::cin.getline(arr, size);
	  }
	  void Input(int size, char* sizeString)
	  {
		  string2 f(size, sizeString);
		  //tut?
		  //system("pause");
	  }
	  void Output()
	  {
		  std::cout << arr;
	  }
};

int main()
{
	//system("color 0b");
	string2 f;
	int size = 0;
	int choose = 0;
	char* zamenitel = new char[255];
	for (;;)
	{
		//system("cls");
		std::cout << "1 to play with 1 array\n2 to play with 2 array\n3 to play with 3 array\n4 to show\n5 to leave\n";
		scanf_s("%d", &choose);
		if (choose == 1)
		{
			printf("Input sentence\n");
			f.Input();
		}
		if (choose == 2)
		{
			printf("Input size to sentence\n");
			std::cin >> size;
			f.Input(size);
		}
		if (choose == 3)
		{
			printf("Input sentence\n");
			std::cin.ignore();
			std::cin.getline(zamenitel, 255);
			size = strlen(zamenitel);
			f.Input(size, zamenitel);
		}
		if (choose == 4) {
			f.Output();
		}
		if (choose == 5)
		{
			std::cout << "END\n"; break;
		}
		std::cout << std::endl;
		//system("pause");
	}
}
*/
/*
#include <iostream>
#include <cassert>

using namespace std;

template<class var>
class queue2
{
private:

    var* arr;
    int* priority;
    int size = 0;

public:

    queue2() : arr(nullptr), priority(nullptr), size(0) {}

    void IsFull()
    {
        if (size > 0)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }

    void InsertWithPriority(var element, int elpriority)
    {
        var* newarr = new var[size + 1];
        int* newpriority = new int[size + 1];

        int pos;
        if (!size)
        {
            pos = 0;
        }
        else
        {
            pos = 0;

            while (pos > size)
            {
                if (priority[pos] < elpriority)
                {
                    break;
                }
                pos++;
            }
        }

        for (size_t i = 0; i < pos; i++)
        {
            newarr[i] = arr[i];
            newpriority[i] = priority[i];
        }
        newarr[pos] = element;
        newpriority[pos] = elpriority;

        for (size_t i = pos + 1; i < size + 1; i++)
        {
            newarr[i] = arr[i - 1];
            newpriority[i] = priority[i - 1];
        }

        delete[] arr;
        delete[] priority;
        arr = newarr;
        priority = newpriority;
        size++;
    }
    void PullHighestPriorityElement()
    {
        var* newarr = new var[--size];
        int* newpriority = new int[size];
        int upriority = priority[0];
        int uindex = arr[0];

        for (ptrdiff_t i = 0; i < size + 1; i++)
        {
            if (priority[i] >= upriority)
            {
                upriority = priority[i];
                if (upriority = priority[i])
                {
                    uindex = i;
                }
            }
        }
        for (ptrdiff_t i = 0; i < uindex; i++)
        {
            newarr[i] = arr[i];
            newpriority[i] = priority[i];
        }
        if (uindex + 1 < size)
        {
            for (ptrdiff_t i = uindex, j = i + 1; i < size; i++, j++)
            {
                newarr[i] = this->arr[j];
                newpriority[i] = this->arr[j];
            }
        }
        arr = newarr;
        priority = newpriority;
    }
    void Show()
    {
        for (ptrdiff_t i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void ShowPriority()
    {
        for (ptrdiff_t i = 0; i < size; i++)
        {
            cout << priority[i] << " ";
        }
        cout << endl;
    }
    int Peek()
    {
        int upriority = priority[0];
        int uindex = arr[0];
        for (ptrdiff_t i = 0; i < size + 1; i++)
        {
            if (priority[i] >= upriority)
            {
                upriority = priority[i];
                if (upriority = priority[i])
                {
                    uindex = i;
                }
            }
        }
        return this->arr[uindex];
    }
};
int main()
{
    queue2<int> myqueue;

    myqueue.InsertWithPriority(3, 3);
    myqueue.InsertWithPriority(2, 5);
    myqueue.InsertWithPriority(4, 1);
    myqueue.InsertWithPriority(6, 1);
    myqueue.InsertWithPriority(7, 0);
    myqueue.InsertWithPriority(8, 6);
    std::cout << std::endl;
    std::cout << myqueue.Peek();
}
*/
/*
class numbers
{
private:
    int a;
    int* arr;
protected:
    virtual void use() = 0;
    void Task1(ptrdiff_t n1)
    {
        this->a = n1;
        (a > 0) ? a++ : a;
        std::cout << "number: " << a << std::endl;
    }
    int Task2(ptrdiff_t n1)
    {
        this->a = n1;
        a = (a > 0) ? ++a : --a - 1;
        std::cout << "number: ";
        return a;
    }
    void Task3()
    {
        std::srand(unsigned(time(NULL)));
        int length = _msize(arr) / sizeof(int);
        std::cout << "polozhitelnie 4isla: ";
        for (ptrdiff_t i = 0;i < length;i++)
        {
            arr[i] = rand() % 20 - 10;
            if (arr[i] > 0)
            {
                std::cout << "+" << arr[i] << " ";
            }
           
        }
        std::cout << std::endl;
    }
public:
    numbers() : a(int()), arr(nullptr)
    {
        this->arr = new int[3];
    }
    ~numbers()
    {
        delete[] arr;
        arr = nullptr;
    }
};
class ffs : public numbers
{
public:
    void use()
    {
        int numb1;
        std::cout << "Task 1:\n";
        std::cout << "Input integer:\n";
        std::cin >> numb1;
        Task1(numb1);
        std::cout << "\ntask 2:\nInput integer:\n";
        std::cin >> numb1;
        std::cout << Task2(numb1) <<"\n\ntask 3:\n";
        Task3();
    }
};
int main()
{
    system("color 0b");
    ffs bbc;
    bbc.use();
    system("pause");
    return 0;
}
*/
/*
#include <iostream>
#include <string>
#include <exception> // для std::exception

class ArrayException : public std::exception
{
private:
    std::string m_error;

public:
    ArrayException(std::string error)
        : m_error(error)
    {
    }

    // Возвращаем std::string в качестве константной строки C-style
//	const char* what() const { return m_error.c_str(); } // до C++11
    const char* what() const noexcept { return m_error.c_str(); } // C++11 и выше
};

class ArrayInt
{
private:

    int m_data[4]; // ради сохранения простоты примера укажем значение 4 в качестве длины массива
public:
    ArrayInt() {}

    int getLength() { return 4; }

    int& operator[](const int index)
    {
        if (index < 0 || index >= getLength())
            throw ArrayException("Invalid index");

        return m_data[index];
    }

};

int main()
{
    ArrayInt array;

    try
    {
        int value = array[7];
    }
    catch (ArrayException& exception) // сначала ловим исключения дочернего класса-исключения
    {
        std::cerr << "An array exception occurred (" << exception.what() << ")\n";
    }
    catch (std::exception& exception)
    {
        std::cerr << "Some other std::exception occurred (" << exception.what() << ")\n";
    }
}
*/
#include <iostream>
#include <string>
#include <exception> // для std::exception
/*
int main()
{
    std::string wordToFind = " sda";
    std::string Search = "asdasda sdasdaYasdgsdf asdl";
    int tmp = wordToFind.length();
    int indexStart = 0;
    int indexEnd = 0;
    int Start = 0;
    for (size_t i = 0; i < Search.size(); i++)
    {
        int counter = wordToFind.length();
        if (wordToFind[0] == Search[i])
        {
            for (size_t k = i; k < Search.size(); k++)
            {
                if (counter >= 0 && wordToFind[Start] == Search[k])
                {
                    counter--;
                    Start++;
                    if (counter == 0)
                    {
                        std::cout << "Well we find ur word\n";
                        indexStart = i;
                        
                        break;
                    }
                }
                else break;
            }
        }
    }
    indexEnd = indexStart + wordToFind.size();
    std::cout << indexStart << std::endl;
    std::cout << indexEnd << std::endl;
    return 0;
}
*/
/*
#include <iostream>

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(int numerator = 0, int denominator = 1) :
        m_numerator(numerator), m_denominator(denominator)
    {
    }

    friend std::ostream& operator<<(std::ostream& out, const Fraction& f1)
    {
        out << f1.m_numerator << "/" << f1.m_denominator;
        return out;
    }
};

int main()
{
    Fraction&& rref = Fraction(4, 7); // ссылка r-value на анонимный объект класса Fraction
    std::cout << rref << '\n';

    return 0;
}
*/
/*
class bbc
{
protected:
    char* arr;
public:
    bbc(){}
    virtual void abc(int a)
    {
        std::cout << "Ya Rabotaiu\n";
    }
    virtual void Print() = 0;
};
class Azamat : public bbc
{
protected:
    int San;
public:
    Azamat() : San(0)
    {
        std::cin >> San;
    }
    virtual void Print(){
        std::cout << San;
    }
};
class Daniyar : public bbc
{
protected:
    char* tvarr;
public:

};
int main()
{
    Azamat FFS;
    char AZAMAT[] = "KOTAK_ZHE";
    FFS.abc(AZAMAT);
}
*/
/*
#include <iostream>

using namespace std;

namespace Ampylda
{
    class Test
    {
    public:
        virtual void Print() = 0;
    };
    class Test2 : public Test
    {
    public:
        virtual void Print()
        {
            cout << "Test2 hello!" << endl;
        }
    };
}
void main()
{
    Ampylda::Test2 azaloh;
    azaloh.Print();
    Ampylda::Test* AZAMAT = &azaloh;
    std::cout << std::endl;
    AZAMAT->Print();
}
*/
/*
#include<chrono>
#include <vector>
int main()
{
    std::srand(unsigned(time(NULL)));
    int arr[5][5];
    for (size_t i = 0; i < 25; i++)
    {
        arr[0][i] = rand() % 50 - 25;
    }
    for (size_t i = 0;i < 25;i++)
    {
        for (size_t j = i+1;j < 25;j++)
        {
            if (arr[0][i] == arr[0][j])
            {
                arr[0][i] = rand() % -50 - 75;
            }
        }
    }    
    std::vector<int> SaverFirstElem1;
    std::vector<int> SaverFirstElem2;
    std::vector<int> SaverSecondElem1;
    std::vector<int> SaverSecondElem2;
    int First1 = arr[0][0];
    int First2 = arr[0][0];
    int Second1 = arr[0][0];
    int Second2 = arr[0][0];
    for (size_t i= 0;i < 5;i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (arr[i][j] > First1)
            {
                First1 = arr[i][j];
            }
            if (arr[j][i] < First2)
            {
                First2 = arr[j][i];
            }
            if (arr[i][j] < Second1)
            {
                Second1 = arr[i][j];
            }
            if (arr[j][i] > Second2)
            {
                Second2 = arr[j][i];
            }
        }
        //Saver[i].push_back(FirstIndex1[0]);
        SaverFirstElem1.push_back(First1);
        SaverFirstElem2.push_back(First2);
        SaverSecondElem1.push_back(Second1);
        SaverSecondElem2.push_back(Second2);
    }
    for (size_t i= 0;i < 5;i++)
    {
        for (size_t j = 0;j < 5;j++)
        {
            std::cout << arr[i][j] << '\t';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (size_t i = 0; i < SaverFirstElem1.size(); i++)
    {
        for (size_t j = 0; j < SaverFirstElem1.size(); j++)
        {
            if (SaverFirstElem1[i] == SaverFirstElem2[j])
            {
                std::cout << SaverFirstElem1[i] << " samii bolshoi v svoei stroke i samii malenkii v stolbtse\n";
            }
            if (SaverSecondElem1[i] == SaverSecondElem2[j])
            {
                std::cout << SaverSecondElem1[i] << " samii bolshoi v svoei stroke i samii malenkii v stolbtse\n";
            }
        }
    }
    system("pause");
    return 0;
}
*/
/*
class WTF
{
public:
    enum Speed
    {
        Min_Speed = 500,
        Normal_Speed = 1000,
        Max_Speed = 2000,
    };
    void SetSpeed(Speed g)
    {
        FFS = g;
    }
    Speed GetSpeed()
    {
        return FFS;
    }
private:
    Speed FFS;
    
};
int main()
{
    system("color 0b");
    WTF bbc;
    bbc.SetSpeed(bbc.Min_Speed);
    switch (bbc.GetSpeed())
    {
    case WTF::Max_Speed:
        std::cout << "Max Speed";
        break;
    case WTF::Min_Speed:
        std::cout << "Min Speed";
        break;
    case WTF::Normal_Speed:
        std::cout << "Normal Speed";
        break;
    default:
        break;
    }
}
*/
/*
template<class var>
class SmartPointer
{
private:
    var* Variable;
public:
    SmartPointer(var* Variable)
    {
        this->Variable = Variable;
    }
    ~SmartPointer()
    {
        delete Variable;
    }
    var& operator*()
    {
        return *Variable;
    }
};
int main()
{
    system("color 0b");
    SmartPointer<int> ptr = new int(5);
    std::cout << *ptr;
    return 0;
}
*/
/*
int main()
{
    int size = 10;
    std::shared_ptr<int[]> ptr(new int[] { 1, 2, 3, 4, 5, 6, 7, 8 });

    for(size_t i= 0;i < 8;i++)
    {
        std::cout << ptr[i];
    }
    return 0;
}
*/
#include<functional>
#include<vector>
/*
int Ex1(int a , int b)
{
    return a * b;
}
int Ex2(int a, int b)
{
    return a + b;
}
int Ex3(int a , int b)
{
    return a - b;
}
int main()
{
    std::function<int(int, int)> BBC;
    BBC = Ex1;
   // std::cout << BBC(5, 5);
    std::vector<std::function<int(int, int)>> FFS;
    FFS.push_back(BBC);
    std::cout << FFS[0](6, 4);
    return 0;
}
*/
/*
bool A(int a)
{
    std::cout << "A: ";
    return (a % 2 == 0);
}
bool B(int b)
{
    std::cout << "B: ";
    return (b > 0);
}
bool C(int c)
{
    std::cout << "C: ";
    return (c < 0);
}
void DoMyDone(std::vector<int>& arr, std::vector<std::function<bool(int)>> &FFS)
{
    for (auto &b : FFS)
    {
        for (auto it : arr)
        {
            std::cout << b(it) << std::endl;
        }
    }
}
int main()
{
    std::vector<int> arr{ -1,5,12,345,123,47,-12,53,-222 };
    std::vector<std::function<bool(int)>> FFS;
    FFS.emplace_back(A);
    FFS.emplace_back(B);
    FFS.emplace_back(C);
    std::function<bool(int)> b;
    b = B;
    FFS.emplace_back(b);
    DoMyDone(arr, FFS);
    return 0;
}
*/
/*
void OutputMyNumbers(const std::vector<int>& arr, std::function<void(int)> c)
{
    for (const auto &b : arr)
    {
        c(b);
        std::cout << std::endl;
    }
}
int main()
{
    std::vector<int> arr{ 1,2,3,4,5,6,7,8,9,0 };
    std::function<void(int)> b;
    b = [](int a) {std::cout << "Anonymous number: " << a; };
    OutputMyNumbers(arr, b);
    OutputMyNumbers(arr, [](int a) {std::cout << "Anonymous number: " << a; });
    return 0; 
}
*/



















/*
#include <iostream>
#include<cstring>

using namespace std;

namespace MyWork
{
    class Array
    {
    private:
        int* array;
        int size;
        int count = 0;
    public:
        Array()
        {
            size = 10;
            array = new int[size];
        }

        void Push(int element)
        {
            if (count < 10)
                array[count++] = element;
            else
            {
                int* tmp = new int[++size];
                for (int i = 0; i < size - 1; i++)
                {
                    tmp[i] = array[i];
                }
                tmp[size-1] = element;
                delete[] array;
                array = tmp;
                count++;
            }
        }

        void Pop()
        {
            (count > 0) ? count-- : count;
        }

        void Print()
        {
            for (int i = 0; i < count; i++)
            {
                cout << array[i] << endl;
            }
        }
    };
}
int main()
{
    MyWork::Array st;
    st.Push(1);
    st.Push(2);
    st.Push(3);
    st.Push(4);
    st.Push(5);
    st.Push(6);
    st.Push(7);
    st.Push(8);
    st.Push(9);
    st.Push(10);
    st.Push(11);
    st.Push(7);
    st.Push(8);
    st.Push(9);
    st.Push(10);
    st.Push(11);
    st.Print();
    system("pause");
    //std::get.char();
    return 0;
}
*/
//#include"Header.h"
/*
int main()
{
    system("color 0b");
}
*/
/*
#include <iostream>
#include <cassert>
#include <map>
#include <fstream>
#include <string> 
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
#include <exception>

using namespace std;

namespace MyWork
{
    class Administrator
    {
    private:

    public:

    };
    class Tested
    {
    private:
        string name;
        string secondName;
        string address;
        string number;
        string login;
        string password;
    public:
        Tested()
        {
            name = "";
            secondName = "";
            address = "";
            number = "";
            login = "";
            password = "";
        }
        void AddQuest(vector<Tested>& guest)
        {
            guest.push_back(Tested());
            if (guest.size() < 2)
            {
                //setlocale(LC_ALL, "RUS");

                //cout << "Введите свое имя: ";
                //cin >> guest.back().name;
                //cout << "Введите свое отчество: ";
                //cin >> guest.back().secondName;
                //cout << "Введите свой домашний адрес: ";
                //cin >> guest.back().address;
                //cout << "Введите свой номер: ";
                //cin >> guest.back().number;
                cout << "Input login: ";
                cin >> guest.back().login;
            }
           
            else
            { 
                bool checker = false;
                while(checker == false)
                {
                    cout << "Input login: ";
                    cin >> guest.back().login;
                    bool toggle = true;
                    for (size_t i = 0; i < guest.size() - 1; i++)
                    {
                        
                        if (guest[i].login == guest[guest.size() - 1].login)
                        {
                            cout << "Login is validate!" << endl;
                            cout << "Try better!" << endl;
                            cout << "Try again: "; 
                            toggle = false;
                            break;
                        }
                    }
                    checker = (toggle == true) ? true : checker;
                }

            }
            cout << "Input passowrd : ";
            cin >> guest.back().password;
            cout << endl;
        }
        void ShowAll(vector<Tested>& guest)
        {
            setlocale(LC_ALL, "RUS");
            for (vector<Tested>::iterator it = guest.begin(); it != guest.end(); it++)
            {
                cout << it->name << endl;
                cout << it->secondName << endl;
                cout << it->address << endl;
                cout << it->number << endl;
                cout << it->login << endl;
                cout << it->password << endl;
                cout << endl;
            }
        }
    };
}
int main()
{
    setlocale(LC_ALL, "RUS");
    MyWork::Tested tester;
    vector<MyWork::Tested> guests;
    tester.AddQuest(guests);
    tester.AddQuest(guests);
    tester.AddQuest(guests);
    tester.AddQuest(guests);
    tester.AddQuest(guests);
    //tester.ShowAll(guests);
    return 0;
}
*/
#include <iostream>
#include <functional>
#include <vector>
#include <Windows.h>
#include <fstream>
#include <string>

int main()
{
    using namespace std;
   /* 
    fstream A("TXT.txt");
    //obj << "YA EBLAN I YA IDU NAHUI";
    std::string Raw;
    std::getline(obj, Raw);
    A << Raw << '\n';
    A.close();
    obj.close();
    //cout << first;*/
    /*obj >> first;
    std::cout << std::endl;
    cout << first;*/
    //obj.seekg(obj.beg + 2);
    //obj >> first;
    //cout << first;
    fstream obj("test.txt",std::ios::app);
    std::string bbc = "IDI NAHUI";
    obj << bbc << '\n';
   // std::cout << a;
    std::cout << bbc;
    return 0;
}

/*
int main()
{
    using namespace std;
    string bbc = "1233";
    string abc = "123";
    (bbc == abc) ? printf("WELL") : printf("NOT WELL");
    return 0;
}
*/