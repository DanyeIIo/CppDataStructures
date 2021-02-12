#pragma once
#include <iostream>
#include<string>
#include<chrono>
#include<vector>
class Stack
{
private:
    char* arr;
    int size;
    std::vector<char> tmp;
public:
    Stack(int size) : size(size)
    {
        this->arr = new char[this->size];
    }
    ~Stack()
    {
        delete[]arr;
        arr = nullptr;
        size = 0;
    }
    void Input()
    {
        std::cin.getline(arr, this->size);
        std::cout << std::endl;
    }
    void Zadanie()
    {
        int a = 3, A = 0, countOpenA = 0, countCloseA = 0;//a = { ^ }
        int b = 2, B = 0, countOpenB = 0, countCloseB = 0;//b = ( ^ )
        int c = 1, C = 0, countOpenC = 0, countCloseC = 0;//c = [ ^ ]
        int counter = 0;
        int i = 0;
        do
        {
            if (arr[i] == '{')//1
            {
                countOpenA++;
                A += a;
                counter += a;
                tmp.push_back(arr[i]);
            }
            if (arr[i] == '(')//2
            {
                countOpenB++;
                B += b;
                counter += b;
                tmp.push_back(arr[i]);

            }
            if (arr[i] == '[')//3
            {
                countOpenC++;
                C += c;
                counter += c;
                tmp.push_back(arr[i]);
            }
            if (arr[i] == ']')//1
            {
                countCloseC++;
                if (countCloseC > countOpenC)
                {
                    std::cout << "net zakrivaiushei skobki ']'\n";
                    std::cout << "Dalshe oshibki ne budu pokazivat idi normalno pishi\n";
                    counter = -1;
                    break;
                }
                char tmpToArr = '[';
                int sizeToTmp = tmp.size();
                if (tmp[sizeToTmp - 1] == tmpToArr)
                {
                    C -= c;
                    counter -= c;
                    tmp.pop_back();
                }
                else
                {
                    std::cout << "ERROR with'[' dont have ']'\n";
                    tmp.pop_back();
                    std::cout << "vi menya naebat pitalis?\nili DA?\n";

                }
            }
            if (arr[i] == ')')//2
            {
                countCloseB++;
                char tmpToArr = '(';
                int sizeToTmp = tmp.size();
                if (countCloseB > countOpenB)
                {
                    std::cout << "net zakrivaiushei skobki ')'\n";
                    std::cout << "Dalshe oshibki ne budu pokazivat idi normalno pishi\n";
                    counter = -1;
                    break;
                }
                if (tmp[sizeToTmp - 1] == tmpToArr)
                {
                    B -= b;
                    counter -= b;
                    tmp.pop_back();
                }
                else
                {
                    std::cout << "ERROR with'(' dont have ')'\n";
                    tmp.pop_back();
                    std::cout << "vi menya naebat pitalis?\nili DA?\n";
                 
                }

            }
            if (arr[i] == '}')//3
            {
                countCloseA++;
                if (countCloseA > countOpenA)
                {
                    std::cout << "net zakrivaiushei skobki '}'\n";
                    std::cout << "Dalshe oshibki ne budu pokazivat idi normalno pishi\n";
                    counter = -1;
                    break;
                }

                char tmpToArr = '{';
                int sizeToTmp = tmp.size();
                if (tmp[sizeToTmp - 1] == tmpToArr)
                {
                    A -= a;
                    counter -= a;
                    tmp.pop_back();
                }
                else
                {
                    std::cout << "ERROR with'{' dont have '}'\n";
                    tmp.pop_back();
                    std::cout << "vi menya naebat pitalis?\nili DA?\n";
                    
                }
            }
            if (arr[i] == ';')
            {
                break;
            }
            i++;
        } while (arr[i]);
        if (counter == 0 && A == 0 && B == 0 && C == 0)
        {
            std::cout << "U VAS VSE ZAEBIS\nVSE V SAD\n";
        }
        else
        {
            std::cout << "vi menya naebat pitalis?\nili DA?\n";
        }
        return;
    }
};

















































































