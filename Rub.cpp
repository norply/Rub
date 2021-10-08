#include <iostream>
#include <Windows.h>
using namespace std;
short n;// вводимое число после проверки
float ent;// вводимое число до проверки
void fun()// вывод словами от 1 до 99 рублей
{
    short n1;// для операций с вводимым числом
    short ost;// остаток от деления
    n1 = n % 100;
    if (n1 <= 20)
    {
        switch (n1)
        {
        case 1:
        {
            cout << "один рубль";
            break;
        }
        case 2:
        {
            cout << "два рубля";
            break;
        }
        case 3:
        {
            cout << "три рубля";
            break;
        }
        case 4:
        {
            cout << "четыре рубля";
            break;
        }
        case 5:
        {
            cout << "пять рублей";
            break;
        }
        case 6:
        {
            cout << "шесть рублей";
            break;
        }
        case 7:
        {
            cout << "семь рублей";
            break;
        }
        case 8:
        {
            cout << "восемь рублей";
            break;
        }
        case 9:
        {
            cout << "девять рублей";
            break;
        }
        case 10:
        {
            cout << "десять рублей";
            break;
        }
        case 11:
        {
            cout << "одиннадцать рублей";
            break;
        }
        case 12:
        {
            cout << "двенадцать рублей";
            break;
        }
        case 13:
        {
            cout << "тринадцать рублей";
            break;
        }
        case 14:
        {
            cout << "четырнадцать рублей";
            break;
        }
        case 15:
        {
            cout << "пятнадцать рублей";
            break;
        }
        case 16:
        {
            cout << "шестнадцать рублей";
            break;
        }
        case 17:
        {
            cout << "семнадцать рублей";
            break;
        }
        case 18:
        {
            cout << "восемнадцать рублей";
            break;
        }
        case 19:
        {
            cout << "девятнадцать рублей";
            break;
        }
        case 20:
        {
            cout << "двадцать рублей";
            break;
        }

        }

    }
    else
    {

        if (n1 > 20 && n1 < 30)
        {
            ost = n1 % 10;
            cout << "двадцать";
            switch (ost)
            {
            case 0:
            {
                cout << " рублей";
                break;
            }
            case 1:
            {
                cout << " один рубль";
                break;
            }
            case 2:
            {
                cout << " два рубля";
                break;
            }
            case 3:
            {
                cout << " три рубля";
                break;
            }
            case 4:
            {
                cout << " четыре рубля";
                break;
            }
            case 5:
            {
                cout << " пять рублей";
                break;
            }
            case 6:
            {
                cout << " шесть рублей";
                break;
            }
            case 7:
            {
                cout << " семь рублей";
                break;
            }
            case 8:
            {
                cout << " восемь рублей";
                break;
            }
            case 9:
            {
                cout << " девять рублей";
                break;
            }



            }

        }
        else
        {
            if (n1 >= 30 && n1 < 40)
            {
                ost = n1 % 10;
                cout << "тридцать";
                switch (ost)
                {
                case 0:
                {
                    cout << " рублей";
                    break;
                }
                case 1:
                {
                    cout << " один рубль";
                    break;
                }
                case 2:
                {
                    cout << " два рубля";
                    break;
                }
                case 3:
                {
                    cout << " три рубля";
                    break;
                }
                case 4:
                {
                    cout << " четыре рубля";
                    break;
                }
                case 5:
                {
                    cout << " пять рублей";
                    break;
                }
                case 6:
                {
                    cout << " шесть рублей";
                    break;
                }
                case 7:
                {
                    cout << " семь рублей";
                    break;
                }
                case 8:
                {
                    cout << " восемь рублей";
                    break;
                }
                case 9:
                {
                    cout << " девять рублей";
                    break;
                }
                }
            }
            else
            {
                if (n1 >= 40 && n1 < 50)
                {
                    ost = n1 % 10;
                    cout << " сорок";
                    switch (ost)
                    {
                    case 0:
                    {
                        cout << " рублей";
                        break;
                    }
                    case 1:
                    {
                        cout << " один рубль";
                        break;
                    }
                    case 2:
                    {
                        cout << " два рубля";
                        break;
                    }
                    case 3:
                    {
                        cout << " три рубля";
                        break;
                    }
                    case 4:
                    {
                        cout << " четыре рубля";
                        break;
                    }
                    case 5:
                    {
                        cout << " пять рублей";
                        break;
                    }
                    case 6:
                    {
                        cout << " шесть рублей";
                        break;
                    }
                    case 7:
                    {
                        cout << " семь рублей";
                        break;
                    }
                    case 8:
                    {
                        cout << " восемь рублей";
                        break;
                    }
                    case 9:
                    {
                        cout << " девять рублей";
                        break;
                    }
                    }
                }
                else
                {
                    if (n1 >= 50 && n1 < 60)
                    {
                        ost = n1 % 10;
                        cout << "пятьдесят";
                        switch (ost)
                        {
                        case 0:
                        {
                            cout << " рублей";
                            break;
                        }
                        case 1:
                        {
                            cout << " один рубль";
                            break;
                        }
                        case 2:
                        {
                            cout << " два рубля";
                            break;
                        }
                        case 3:
                        {
                            cout << " три рубля";
                            break;
                        }
                        case 4:
                        {
                            cout << " четыре рубля";
                            break;
                        }
                        case 5:
                        {
                            cout << " пять рублей";
                            break;
                        }
                        case 6:
                        {
                            cout << " шесть рублей";
                            break;
                        }
                        case 7:
                        {
                            cout << " семь рублей";
                            break;
                        }
                        case 8:
                        {
                            cout << " восемь рублей";
                            break;
                        }
                        case 9:
                        {
                            cout << " девять рублей";
                            break;
                        }
                        }
                    }
                    else
                    {
                        if (n1 >= 60 && n1 < 70)
                        {
                            ost = n1 % 10;
                            cout << "шестьдесят";
                            switch (ost)
                            {
                            case 0:
                            {
                                cout << " рублей";
                                break;
                            }
                            case 1:
                            {
                                cout << " один рубль";
                                break;
                            }
                            case 2:
                            {
                                cout << " два рубля";
                                break;
                            }
                            case 3:
                            {
                                cout << " три рубля";
                                break;
                            }
                            case 4:
                            {
                                cout << " четыре рубля";
                                break;
                            }
                            case 5:
                            {
                                cout << " пять рублей";
                                break;
                            }
                            case 6:
                            {
                                cout << " шесть рублей";
                                break;
                            }
                            case 7:
                            {
                                cout << " семь рублей";
                                break;
                            }
                            case 8:
                            {
                                cout << " восемь рублей";
                                break;
                            }
                            case 9:
                            {
                                cout << " девять рублей";
                                break;
                            }
                            }
                        }
                        else
                        {
                            if (n1 >= 70 && n1 < 80)
                            {
                                ost = n1 % 10;
                                cout << "семьдесят";
                                switch (ost)
                                {
                                case 0:
                                {
                                    cout << " рублей";
                                    break;
                                }
                                case 1:
                                {
                                    cout << " один рубль";
                                    break;
                                }
                                case 2:
                                {
                                    cout << " два рубля";
                                    break;
                                }
                                case 3:
                                {
                                    cout << " три рубля";
                                    break;
                                }
                                case 4:
                                {
                                    cout << " четыре рубля";
                                    break;
                                }
                                case 5:
                                {
                                    cout << " пять рублей";
                                    break;
                                }
                                case 6:
                                {
                                    cout << " шесть рублей";
                                    break;
                                }
                                case 7:
                                {
                                    cout << " семь рублей";
                                    break;
                                }
                                case 8:
                                {
                                    cout << " восемь рублей";
                                    break;
                                }
                                case 9:
                                {
                                    cout << " девять рублей";
                                    break;
                                }
                                }
                            }
                            else
                            {
                                if (n1 >= 80 && n1 < 90)
                                {
                                    ost = n1 % 10;
                                    cout << "восемьдесят";
                                    switch (ost)
                                    {
                                    case 0:
                                    {
                                        cout << " рублей";
                                        break;
                                    }
                                    case 1:
                                    {
                                        cout << " один рубль";
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << " два рубля";
                                        break;
                                    }
                                    case 3:
                                    {
                                        cout << " три рубля";
                                        break;
                                    }
                                    case 4:
                                    {
                                        cout << " четыре рубля";
                                        break;
                                    }
                                    case 5:
                                    {
                                        cout << " пять рублей";
                                        break;
                                    }
                                    case 6:
                                    {
                                        cout << " шесть рублей";
                                        break;
                                    }
                                    case 7:
                                    {
                                        cout << " семь рублей";
                                        break;
                                    }
                                    case 8:
                                    {
                                        cout << " восемь рублей";
                                        break;
                                    }
                                    case 9:
                                    {
                                        cout << " девять рублей";
                                        break;
                                    }
                                    }
                                }
                                else
                                {
                                    if (n1 >= 90 && n1 < 100)
                                    {
                                        ost = n1 % 10;
                                        cout << "девяносто";
                                        switch (ost)
                                        {
                                        case 0:
                                        {
                                            cout << " рублей";
                                            break;
                                        }
                                        case 1:
                                        {
                                            cout << " один рубль";
                                            break;
                                        }
                                        case 2:
                                        {
                                            cout << " два рубля";
                                            break;
                                        }
                                        case 3:
                                        {
                                            cout << " три рубля";
                                            break;
                                        }
                                        case 4:
                                        {
                                            cout << " четыре рубля";
                                            break;
                                        }
                                        case 5:
                                        {
                                            cout << " пять рублей";
                                            break;
                                        }
                                        case 6:
                                        {
                                            cout << " шесть рублей";
                                            break;
                                        }
                                        case 7:
                                        {
                                            cout << " семь рублей";
                                            break;
                                        }
                                        case 8:
                                        {
                                            cout << " восемь рублей";
                                            break;
                                        }
                                        case 9:
                                        {
                                            cout << " девять рублей";
                                            break;
                                        }
                                        }
                                    }
                                }


                            }
                        }
                    }
                }

            }

        }

    }
}
int main()
{
    
}
