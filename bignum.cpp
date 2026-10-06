#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe (0-9999): ";
    cin >> liczba;


    if (liczba == 0) {
        cout << "zero";
    }

    int tysiace = liczba / 1000;
    int setki = (liczba % 1000) / 100;
    int dziesiatki = (liczba % 100) / 10;
    int jednostki = liczba % 10;


    if (tysiace > 0) {
        switch (tysiace)
        {
        case 1: cout << "tysiac "; break;
        case 2: cout << "dwa tysiace "; break;
        case 3: cout << "trzy tysiace "; break;
        case 4: cout << "cztery tysiace "; break;
        case 5: cout << "piec tysiecy "; break;
        case 6: cout << "szesc tysiecy "; break;
        case 7: cout << "siedem tysiecy "; break;
        case 8: cout << "osiem tysiecy "; break;
        case 9: cout << "dziewiec tysiecy "; break;
        }
    }


    if (setki > 0) {
        switch (setki)
        {
        case 1: cout << "sto "; break;
        case 2: cout << "dwiescie "; break;
        case 3: cout << "trzysta "; break;
        case 4: cout << "czterysta "; break;
        case 5: cout << "piecset "; break;
        case 6: cout << "szescset "; break;
        case 7: cout << "siedemset "; break;
        case 8: cout << "osiemset "; break;
        case 9: cout << "dziewiecset "; break;
        }
    }

    if (dziesiatki == 1)
    {
        switch (jednostki)
        {
        case 0: cout << "dziesiec"; break;
        case 1: cout << "jedenascie"; break;
        case 2: cout << "dwanascie"; break;
        case 3: cout << "trzynascie"; break;
        case 4: cout << "czternascie"; break;
        case 5: cout << "pietnascie"; break;
        case 6: cout << "szesnascie"; break;
        case 7: cout << "siedemnascie"; break;
        case 8: cout << "osiemnascie"; break;
        case 9: cout << "dziewietnascie"; break;
        }
    }
    else {
        switch (dziesiatki)
        {
        case 2: cout << "dwadziescia "; break;
        case 3: cout << "trzydziesci "; break;
        case 4: cout << "czterdziesci "; break;
        case 5: cout << "piecdziesiat "; break;
        case 6: cout << "szescdziesiat "; break;
        case 7: cout << "siedemdziesiat "; break;
        case 8: cout << "osiemdziesiat "; break;
        case 9: cout << "dziewiecdziesiat "; break;
        }

        if (jednostki > 0)
        {
            switch (jednostki)
            {
            case 1: cout << "jeden"; break;
            case 2: cout << "dwa"; break;
            case 3: cout << "trzy"; break;
            case 4: cout << "cztery"; break;
            case 5: cout << "piec"; break;
            case 6: cout << "szesc"; break;
            case 7: cout << "siedem"; break;
            case 8: cout << "osiem"; break;
            case 9: cout << "dziewiec"; break;
            }
        }
    }

}