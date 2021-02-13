#include "Header.h"
void structure::functions::NameSurname()
{
	printf("DDDD\n");
	printf("DD   DD\n");
	printf("DD    DD    aaaa      nnnnnnn   iii  yy    yy    aaaa     rrr rrr\n");
	printf("DD    DD  aa    aa   nn     nn        yy  yy   aa    aa   rr     r\n");
	printf("DD    DD  aa    aa   nn     nn  iii     yy     aa    aa   rr\n");
	printf("DD   DD   aa    aa   nn     nn  iii     yy     aa    aa   rr\n");
	printf("DDDD        aaaa aa  nn     nn  iii  	yy       aaaa aa  rr\n\n");
	printf("ZZZZZZZ\n");
	printf("    ZZ   hh\n");
	printf("   ZZ    hh         aaaa     rrr rrr  mm mmmm mm mm    uu    uu  kk   kk    aaaa      nnnnnnn     oooo   vv      vv\n");
	printf("  ZZ     hh       aa    aa   rr     r mmm    mm    mm  uu    uu  kk  kk   aa    aa   nn     nn  oo    oo  vv    vv\n");
	printf(" ZZ      hhhhhh   aa    aa   rr       mm     mm    mm  uu    uu  kkkk     aa    aa   nn     nn  oo    oo   vv  vv\n");
	printf("ZZ       hh   hh  aa    aa   rr       mm     mm    mm  uu    uu  kk  kk   aa    aa   nn     nn  oo    oo    vvvv\n");
	printf("ZZZZZZZ  hh   hh    aaaa aa  rr       mm     mm    mm    uuuu    kk   kk    aaaa aa  nn     nn    oooo       vv\n");
}               
void structure::functions::year()
{
	size_t year = 0;
	scanf_s("%zu", &year);
	if (year % 4 != 0)
	{
		printf("simple year\n");
	}
	else
	{
		(year % 100 == 0 && year % 400 == 0) ? printf("visokosnii year\n") : printf("simple year\n");
	}
}
void structure::functions::consoleColour()
{
    size_t choise;

    std::cout << "choose console colour: \n" ;
    std::cout << "1. black background & Green shrift \n2. White background & red shrift \n3. blue background & white shrift" <<
        "\n4. green background & wellow shrift \n5. blue  background & white shrift \n6. black background & white shrift ";

    std::cout << "\n\nInput -> ";
    std::cin >> choise;

    switch (choise) {
    case 1:
        std::cout << "\nEverything went smoothly " << system("Color 0A") << std::endl;
        break;
    case 2:
        std::cout << "Everything went smoothly " << system("Color 7D");
        break;
    case 3:
        std::cout << "Everything went smoothly " << system("Color 1F");
        break;
    case 4:
        std::cout << "Everything went smoothly" << system("Color 2E");
        break;
    case 5:
        std::cout << "Everything went smoothly" << system("Color 9E");
        break;
    case 6:
        std::cout << "Everything went smoothly" << system("Color 0F");
        break;

    default:
        std::cout << "\nERROR! ur Input is not right\n";
        break;
    }
}
void structure::functions::ASCII()
{
    for (size_t i = 34;i <=127;i++)
    {
        std::cout << static_cast<char>(i) << " ";
    }
    std::cout << std::endl;
}
void structure::functions::zapolnenie_0_1()
{
    int df = 0;
    int counter = 0;
    std::srand(unsigned(time(NULL)));
    short arr[12][12];
    for (size_t i = 0; i < 144; i++)
    {
        short j = 0;
        arr[0][i] = j;
    }
    for (size_t i = 0; i < 36; i++)
    {

        short d = rand() % 144 + 0;

        if (arr[0][d] == 0)//tak kak hack on dumaet 4to perepolnenie
        {
            counter++;
            arr[0][d] = 1;//perepolneniya ne budet vse norm!
            
        }
    }
    for (size_t i = 0; i < 50; i++)
    {

        short d = rand() % 144 + 0;
        if (counter < 36)
        {
            if (arr[0][d] == 0)
            {
                counter++;
                arr[0][d] = 1;
            }
        }
        else break;
    }
    for (size_t i = 0; i < 12; i++)
    {
        std::cout << std::endl;
        for (size_t j = 0; j < 12; j++)
        {
            std::cout << arr[i][j] << "  ";
        }
    }
    //std::cout <<'\n' <<counter <<'\n';
    for (size_t i = 0; i < 12; i++)
    {
        for (size_t j = 0; j < 12; j++)
        {
            if (arr[i][j] != arr[i][j + 1] && arr[i][j] != arr[i][j - 1] && arr[i][j] != arr[i + 1][j] && arr[i][j] != arr[i - 1][j])
            {
                if (arr[i][j] == 1)
                {
                    df++;
                }
            }
           
        }
    }
    std::cout << "\n" << df << "\n";
}
void structure::functions::bitset()
{   
    typedef unsigned short ushort_16t;//prikoldes)) blblbl
    ushort_16t num = 0;
    std::cin >> num;
    std::vector<uint16_t> arr;
    size_t counter = 0;
    uint16_t* arR = new uint16_t[16];
    for (int i = 15; i >= 0; --i)// short 16 bitov (00000000 00000000)
    {
        std::cout << ((num >> i) & 1) << " ";
        int temporary = ((num >> i) & 1);
        arr.push_back(temporary);//mozhno bilo srazu arR[i] = temporary, nOO! tak prikoldesnee!
        //a s vetorami sravnenie ne rabotalo ((
    }
    std::cout << std::endl;
    for (size_t i = 0; i < arr.size(); i++)
    {
        arR[i] = arr[i];
    }
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arR[i] == 1 && arR[i + 1] == 1)
        {
            counter++;
        }
    }
    for (size_t i = 0; i < arr.size(); i++)
    {
        arR[i] = NULL;
    }
    delete[] arR;
}
void structure::functions::lessZero()
{
    std::vector<short> arr;
    std::vector<short> lessZeroArr;
    int size = 0;
    
    scanf_s("%d",&size);
    (size < 0) ? size * -1 : size;
    for (ptrdiff_t i =0;i < size;i++)
    {
        int b = rand() % 2 - 0;
        arr.push_back(b);
    }
    printf("after :\n");
    for (size_t i = 0;i < arr.size();i++)
    {
        std::cout << arr[i] << " ";
    }
    printf("\nbefore :\n");
    for (size_t i = 0;i < arr.size();i++)
    {
        if (arr[i] == 1)
        {
            lessZeroArr.push_back(arr[i]);
        }
    }
    for (auto b : lessZeroArr)
    {
        std::cout << b << " ";
    }
    std::cout << std::endl;
}
void structure::functions::perevod()
{
    int digit;
    std::cout << "Enter digit:";
    std::cin >> digit;
    int tmp = digit / 1000;
    switch (tmp)
    {
    case 1: std::cout << "1 "; break;
    case 2: std::cout << "2 "; break;
    case 3: std::cout << "3 "; break;
    case 4: std::cout << "4 "; break;
    case 5: std::cout << "5 "; break;
    case 6: std::cout << "6 "; break;
    case 7: std::cout << "7 "; break;
    case 8: std::cout << "8 "; break;
    case 9: std::cout << "9 "; break;
    default: break;
    }
    tmp = (digit / 100) % 10;
    switch (tmp)
    {
    case 1:std::cout << "1 "; break;
    case 2:std::cout << "2 "; break;
    case 3:std::cout << "3 "; break;
    case 4:std::cout << "4 "; break;
    case 5:std::cout << "5 "; break;
    case 6:std::cout << "6 "; break;
    case 7:std::cout << "7 "; break;
    case 8:std::cout << "8 "; break;
    case 9:std::cout << "9 "; break;
    default: break;
    }
    tmp = digit % 100;
    if (tmp > 9 && tmp < 20)
    {
        switch (tmp)
        {
        case 10:std::cout << "0 "; break;
        case 11:std::cout << "1 "; break;
        case 12:std::cout << "2 "; break;
        case 13:std::cout << "3 "; break;
        case 14:std::cout << "4 "; break;
        case 15:std::cout << "5 "; break;
        case 16:std::cout << "6 "; break;
        case 17:std::cout << "7 "; break;
        case 18:std::cout << "8 "; break;
        case 19:std::cout << "9 "; break;
        default:  break;
        }
    }
    else
    {
        int z = tmp / 10;
        switch (z)
        {
        case 2:std::cout << "2 "; break;
        case 3:std::cout << "3 "; break;
        case 4:std::cout << "4 "; break;
        case 5:std::cout << "5 "; break;
        case 6:std::cout << "6 "; break;
        case 7:std::cout << "7 "; break;
        case 8:std::cout << "8 "; break;
        case 9:std::cout << "9 "; break;
        default: break;
        }
        tmp %= 10;
        switch (tmp)
        {
        case 1:std::cout << "1"; break;
        case 2:std::cout << "2"; break;
        case 3:std::cout << "3"; break;
        case 4:std::cout << "4"; break;
        case 5:std::cout << "5"; break;
        case 6:std::cout << "6"; break;
        case 7:std::cout << "7"; break;
        case 8:std::cout << "8"; break;
        case 9:std::cout << "9"; break;
        default:break;
        }
    }
    std::cout << std::endl;
}

void structure::functions::Input(std::list<structure::car1>& list)
{
    structure::car1* newcar = new car1;
    std::cout << "Input model:" << std::endl;
    std::cin >> newcar->model;
    std::cout << "Input color:" << std::endl;
    std::cin >> newcar->color;
    std::cout << "Type of number 1(5) or 2(8):" << std::endl;
    uint8_t choose;
    std::cin >> choose;
    if (choose == 1) {
        std::cout << "Input number less symbols\n";
        std::cin >> newcar->carNum.number;
    }
    else
    {
        std::cout << "Input 8 symbols !! olny 8  \n";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.getline(newcar->carNum.StrNumber,9);
        if (strlen(newcar->carNum.StrNumber) > 8)
        {
            delete newcar;
            return;
        }
    }
    list.push_back(*newcar);//spasibo za etot method!
    delete newcar;//osvoboszhdaem di4
}
void structure::functions::Output(std::list<structure::car1> list)
{
    std::string number;
    structure::NumberOfCar b;
    number = b.StrNumber;
    std::string isSymbol = "~!@#$%^&*()_+{}:<>?|,./;'[]=-`";
    std::string isAlpha = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm";////isalpha ne robit (press F)
    short counter = 0,counter1 = 0;
    for (std::list<structure::car1>::iterator it = list.begin(); it != list.end(); it++)
    {
        counter++;
        std::cout << counter << " - car\n";
        std::cout << "color  : " << it->color << '\n';
        std::cout << "model  : " << it->model << '\n';
        for (auto b : isSymbol)
        {
            for (auto f : isAlpha)
            {
                for (auto d : number)
                {
                    if (d == b || d == f)
                    {
                        counter1++;
                    }
                }
            }
        }
        if (counter > 0)
        {
            std::cout << "number : " << it->carNum.StrNumber << '\n';
        }
        else
        {
            std::cout << "number : " << it->carNum.number << '\n';
        }
    }
}
void structure::functions::SearchByNumber(std::list<structure::car1> list)
{
    short counter = 0,counter1 = 0;
    std::string isSymbol = "~!@#$%^&*()_+{}:\"<>?|\\,./;'[]=-`";
    std::string isAlpha = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm";//isalpha ne robit (press F)
    std::string number, tmp;
    std::cout << "Input number to search\n";
    std::cin >> number;
    int num;
    std::istringstream translate(tmp);
    translate >> num;
    for (std::list<structure::car1>::iterator it = list.begin(); it != list.end(); it++)
    {
        if (it->carNum.StrNumber == number|| it->carNum.number == num)
        {
            counter++;
            std::cout << counter << " - car\n";
            std::cout << "color  : " << it->color << '\n';
            std::cout << "model  : " << it->model << '\n';
            for (auto b : isSymbol)
            {
                for (auto f : isAlpha)
                {
                    for (auto d : number)
                    {
                        if (d == b || d == f)
                        {
                            counter1++;
                        }
                    }
                }
            }
            if (counter > 0)
            {
                std::cout << "number : " << it->carNum.StrNumber << '\n';
            }
            else
            {
                std::cout << "number : " << it->carNum.number << '\n';
            }
        }
    }
}
void structure::functions::Redact(std::list<structure::car1>& list)
{
    system("cls");
    std::list<structure::car1>::iterator it1,it2;
    structure::car1 car;
    it1 = it2 = list.begin();
    short index;
    std::cout << "Input index what u wanna change\n";
    std::cin >> index;
    //auto index = list.insert(list.end(), it1);
    std::advance(it1, index-1);
   // it1 = list.erase(it1);
    std::cout << "Input model:" << std::endl;
    std::cin >> it1->model;
    std::cout << "Input color:" << std::endl;
    std::cin >> it1->color;
    
    uint8_t choose;
    std::cout << "Type of number 1(5) or 2(8):" << std::endl;
    std::cin >> choose;

   
    if (choose == 1)
    {
        std::cout << "Input number less symbols\n";
        std::cin >> it1->carNum.number;
    }
    else
    {
        std::cout << "Input 8 symbols !! olny 8  \n";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.getline(it1->carNum.StrNumber, 9);
        if (strlen(it1->carNum.StrNumber) > 8)
        {
            //delete newcar;
            list.erase(it1);
            return;
        }
    }
}