#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cmath>
#include <ctime>
#include <windows.h>
#include <vector>
#include <sstream>

using namespace std;

//Global variables
    int i;
    char difficulty=2;
    int max_time=30;
    int add_rng=100;
    int sub_rng=100;
    int mul_rng=10;
    int div_rng=10;
    int mod_rng=10;
    int roo_rng=10;
    int players_num=1;
    vector <string> players_names;
    char eng_lang='1';
    bool err=false;

class Menu
{
private:
    char menu_cho;
    char dif_cho;
    char rng_cho;
    char diflv_cho;
    char pla_cho;
    char planm_cho;
    char lan_cho;
    int plach_cho;
    bool menu_exit;
    string menu_high;
    stringstream ssplayer_name;
    string player;

//Drawing Menu
public:
    void menu_Settings()
    {
        i=0;
        menu_high="|                             |\n";

        cout << "*-----------------------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "------------------------------*"; Sleep(20); system("cls");
        cout << "-*----------------------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "-----------------------------*-"; Sleep(20); system("cls");
        cout << "--*---------------------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "----------------------------*--"; Sleep(20); system("cls");
        cout << "---*--------------------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "---------------------------*---"; Sleep(20); system("cls");
        cout << "----*-------------------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "--------------------------*----"; Sleep(20); system("cls");
        cout << "-----*------------------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "-------------------------*-----"; Sleep(20); system("cls");
        cout << "------*-----------------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "------------------------*------"; Sleep(20); system("cls");
        cout << "-------*----------------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "-----------------------*-------"; Sleep(20); system("cls");
        cout << "--------*---------------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "----------------------*--------"; Sleep(20); system("cls");
        cout << "---------*--------------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "---------------------*---------"; Sleep(20); system("cls");
        cout << "----------*-------------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "--------------------*----------"; Sleep(20); system("cls");
        cout << "-----------*------------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "-------------------*-----------"; Sleep(20);  system("cls");
        cout << "------------*-----------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "------------------*------------"; Sleep(20); system("cls");
        cout << "-------------*----------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "-----------------*-------------"; Sleep(20); system("cls");
        cout << "--------------*---------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "----------------*--------------"; Sleep(20); system("cls");
        cout << "---------------*--------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "---------------*---------------"; Sleep(20); system("cls");
        cout << "----------------*-------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "--------------*----------------"; Sleep(20); system("cls");
        cout << "-----------------*------------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "-------------*-----------------"; Sleep(20); system("cls");
        cout << "------------------*-----------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "------------*------------------"; Sleep(20); system("cls");
        cout << "-------------------*----------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "-----------*-------------------"; Sleep(20); system("cls");
        cout << "--------------------*---------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "----------*--------------------"; Sleep(20); system("cls");
        cout << "---------------------*--------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "---------*---------------------"; Sleep(20); system("cls");
        cout << "----------------------*-------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "--------*----------------------"; Sleep(20); system("cls");
        cout << "-----------------------*------|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "-------*-----------------------"; Sleep(20); system("cls");
        cout << "------------------------*-----|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "------*------------------------"; Sleep(20); system("cls");
        cout << "-------------------------*----|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "-----*-------------------------"; Sleep(20); system("cls");
        cout << "--------------------------*---|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "----*--------------------------"; Sleep(20); system("cls");
        cout << "---------------------------*--|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "---*---------------------------"; Sleep(20); system("cls");
        cout << "----------------------------*-|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "--*----------------------------"; Sleep(20); system("cls");
        cout << "-----------------------------*|" << endl; for (i=0; i<2;  i++) { cout << menu_high; } cout << "|           EZMATH            |\n"; for (i=0; i<2;  i++ )  { cout << menu_high; }  for (i=0; i<10; i++ ) { cout << menu_high; } cout << "-*-----------------------------"; Sleep(20); system("cls");

        menu_exit=false;
        while (menu_exit==false)
        {
            //Main Menu
            if (eng_lang=='1')
            {
            cout << "-------------------------------" << endl;
            cout << "|                             |\n";
            cout << "|                             |\n";
            cout << "|           EZMATH            |\n";
            cout << "|                             |\n";
            cout << "|     1. START                |\n";
            cout << "|                             |\n";
            cout << "|     2. DIFFICULTY           |\n";
            cout << "|                             |\n";
            cout << "|     3. PLAYERS & LANGUAGE   |\n";
            cout << "|                             |\n";
            cout << "|     4. EXIT                 |\n";
            cout << "|                             |\n";
            cout << "|                             |\n";
            cout << "|                             |\n";
            cout << "|                             |\n";
            cout << "-------------------------------" << endl;
            }
            if (eng_lang=='0')
            {
            cout << "-------------------------------" << endl;
            cout << "|                             |\n";
            cout << "|                             |\n";
            cout << "|           EZMATH            |\n";
            cout << "|                             |\n";
            cout << "|     1. START                |\n";
            cout << "|                             |\n";
            cout << "|     2. POZIOM TRUDNOSCI     |\n";
            cout << "|                             |\n";
            cout << "|     3. GRACZE I JEZYK       |\n";
            cout << "|                             |\n";
            cout << "|     4. WYJSCIE              |\n";
            cout << "|                             |\n";
            cout << "|                             |\n";
            cout << "|                             |\n";
            cout << "|                             |\n";
            cout << "-------------------------------" << endl;
            }
            menu_cho=getch();
            system("cls");

            if (menu_cho=='1')
            {
                while (players_num>players_names.size())
                    {
                        stringstream ssplayer_name;
                        string player;
                        if (eng_lang=='1')
                        {
                            player="Player ";
                        }
                        if (eng_lang=='0')
                        {
                            player="Gracz ";
                        }
                        int player_name;

                        player_name=players_names.size()+1;
                        ssplayer_name << player_name;
                        player+=ssplayer_name.str();
                        players_names.push_back(player);
                    }
                menu_exit=true;
            }
            if (menu_cho=='2')
            {
                //Difficulty
                cout << "-------------------------------" << endl;
                cout << "|                             |\n";
                if (eng_lang=='1')
                {
                    if (difficulty==1)
                        cout << "|     DIFFICULTY: EASY        |\n";
                    if (difficulty==2)
                        cout << "|     DIFFICULTY: MEDIUM      |\n";
                    if (difficulty==3)
                        cout << "|     DIFFICULTY: HARD        |\n";
                    if (difficulty==4)
                        cout << "|     DIFFICULTY: CUSTOM      |\n";
                    cout << "|                             |\n";
                    cout << "|                             |\n";
                    cout << "|     1. CHOOSE TIME          |\n";
                    cout << "|                             |\n";
                    cout << "|     2. CHOOSE RANGE         |\n";
                    cout << "|                             |\n";
                    cout << "|     3. DIFFICULTY LEVELS    |\n";
                    cout << "|                             |\n";
                    cout << "|                             |\n";
                    cout << "-------------------------------" << endl;
                }
                if (eng_lang=='0')
                {
                    if (difficulty==1)
                        cout << "|     POZ.TRUDNOSCI: LATWY    |\n";
                    if (difficulty==2)
                        cout << "|     POZ.TRUDNOSCI: SREDNI   |\n";
                    if (difficulty==3)
                        cout << "|     POZ.TRUDNOSCI: TRUDNY   |\n";
                    if (difficulty==4)
                        cout << "|POZ.TRUDNOSCI: NIESTANDARDOWY|\n";
                    cout << "|                             |\n";
                    cout << "|                             |\n";
                    cout << "|     1. WYBIERZ CZAS GRY     |\n";
                    cout << "|                             |\n";
                    cout << "|     2. WYBIERZ ZAKRES       |\n";
                    cout << "|                             |\n";
                    cout << "|     3. POZIOMY TRUDNOSCI    |\n";
                    cout << "|                             |\n";
                    cout << "|                             |\n";
                    cout << "-------------------------------" << endl;
                }
                dif_cho=getch();
                system("cls");

                if (dif_cho=='1')
                {
                    //Time settings
                    if (eng_lang=='1')
                    {
                        cout << "-------------------------------" << endl;
                        cout << "|                             |\n";
                        cout << "     CURRENT TIME: " << max_time << "       \n";
                        cout << "|                             |\n";
                        cout << "      ENTER TIME: ";
                    }
                    if (eng_lang=='0')
                    {
                        cout << "-------------------------------" << endl;
                        cout << "|                             |\n";
                        cout << "     AKTUALNY CZAS " << max_time << "       \n";
                        cout << "|                             |\n";
                        cout << "      PODAJ CZAS: ";
                    }
                    do {
                    cin >> max_time;
                    err=cin.fail();
                    if (err)
                    cout << "\nAn error has occurred, please try again: ";
                    cin.clear();
                    cin.ignore();
                    } while (err);
                }
                if (dif_cho=='2')
                {
                    //Choosing range
                    if (eng_lang=='1')
                    {
                        cout << "-------------------------------" << endl;
                        cout << "|                             |\n";
                        cout << "|     CURRENT RANGE:          |\n";
                        cout << "|     1. ADDITION: 0 - " << add_rng << "   \n";
                        cout << "|     2. SUBSTRACTION: 0 - " << sub_rng << " \n";
                        cout << "|     3. MULTIPLICATION: 0 - " << mul_rng << "     \n";
                        cout << "|     4. DIVISION: 0 - " << div_rng << "    \n";
                        cout << "|     5. MODULO: 0 - " << mod_rng << "    \n";
                        cout << "|     6. PIERWIASTEK: 0 - " << roo_rng << "    \n";
                        cout << "|                             |\n";
                        cout << "|  SELECT THE PARAMETER       |\n";
                        cout << "|  YOU WANT TO CHANGE:        |\n";
                    }
                    if (eng_lang=='0')
                    {
                        cout << "-------------------------------" << endl;
                        cout << "|                             |\n";
                        cout << "|     WYBIERZ ZAKRES:         |\n";
                        cout << "|     1. DODAWANIE: 0 - " << add_rng << endl;
                        cout << "|     2. ODEJMOWANIE: 0 - " << sub_rng << endl;
                        cout << "|     3. MNOZENIE: 0 - " << mul_rng << endl;
                        cout << "|     4. DZIELENIE: 0 - " << div_rng << endl;
                        cout << "|     5. MODULO: 0 - " << mod_rng << endl;
                        cout << "|     6. PIERWIASTEK: 0 - " << roo_rng << endl;
                        cout << "|                             |\n";
                        cout << "|  WYBIERZ PARAMETR           |\n";
                        cout << "|  KTORY CHCESZ ZMIENIC:      |\n";
                    }
                    rng_cho=getch();
                    system("cls");

                    if (rng_cho=='1')
                    {
                        if (eng_lang=='1')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|         ADDITION            |\n";
                            cout << "|                             |\n";
                            cout << "|   SELECT RANGE 0 - ";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|         DODAWANIE           |\n";
                            cout << "|                             |\n";
                            cout << "|   WYBIERZ ZAKRES 0 - ";
                        }
                        do {
                        cin >> add_rng;
                        err=cin.fail();
                        if (err)
                        if (eng_lang=='1')
                        {
                            cout << "\nAn error has occurred, please try again: ";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "\nWystapil blad, sproboj ponownie";
                        }
                        cin.clear();
                        cin.ignore();
                        } while (err);
                        difficulty=4;
                        system("cls");
                    }
                    if (rng_cho=='2')
                    {
                        if (eng_lang=='1')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|         SUBSTRACTION        |\n";
                            cout << "|                             |\n";
                            cout << "|   SELECT RANGE 0 - ";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|         ODEJMOWANIE         |\n";
                            cout << "|                             |\n";
                            cout << "|   WYBIERZ ZAKRES 0 - ";
                        }
                        do {
                        cin >> sub_rng;
                        err=cin.fail();
                        if (err)
                        if (eng_lang=='1')
                        {
                            cout << "\nAn error has occurred, please try again: ";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "\nWystapil blad, sproboj ponownie";
                        }
                        cin.clear();
                        cin.ignore();
                        } while (err);
                        difficulty=4;
                        system("cls");

                    }
                    if (rng_cho=='3')
                    {
                        if (eng_lang=='1')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|         MULTIPLICATION      |\n";
                            cout << "|                             |\n";
                            cout << "|   SELECT RANGE 0 - ";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|         MNOZENIE            |\n";
                            cout << "|                             |\n";
                            cout << "|   WYBIERZ ZAKRES 0 - ";
                        }
                        do {
                        cin >> mul_rng;
                        err=cin.fail();
                        if (err)
                        if (eng_lang=='1')
                        {
                            cout << "\nAn error has occurred, please try again: ";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "\nWystapil blad, sproboj ponownie";
                        }
                        cin.clear();
                        cin.ignore();
                        } while (err);
                        difficulty=4;
                        system("cls");

                    }
                    if (rng_cho=='4')
                    {
                        if (eng_lang=='1')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|         DIVISION            |\n";
                            cout << "|                             |\n";
                            cout << "|   SELECT RANGE 0 - ";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|         DZIELENIE           |\n";
                            cout << "|                             |\n";
                            cout << "|   WYBIERZ ZAKRES 0 - ";
                        }
                        do {
                        cin >> div_rng;
                        err=cin.fail();
                        if (err)
                        if (eng_lang=='1')
                        {
                            cout << "\nAn error has occurred, please try again: ";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "\nWystapil blad, sproboj ponownie";
                        };
                        cin.clear();
                        cin.ignore();
                        } while (err);
                        difficulty=4;
                        system("cls");
                    }
                    if (rng_cho=='5')
                    {
                        if (eng_lang=='1')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|         MODULO            |\n";
                            cout << "|                             |\n";
                            cout << "|   SELECT RANGE 0 - ";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|         MODULO            |\n";
                            cout << "|                             |\n";
                            cout << "|   WYBIERZ ZAKRES 0 - ";
                        }
                        do {
                        cin >> mod_rng;
                        err=cin.fail();
                        if (err)
                        if (eng_lang=='1')
                        {
                            cout << "\nAn error has occurred, please try again: ";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "\nWystapil blad, sproboj ponownie";
                        }
                        cin.clear();
                        cin.ignore();
                        } while (err);
                        difficulty=4;
                        system("cls");
                    }
                    if (rng_cho=='6')
                    {
                        if (eng_lang=='1')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|         ROOT                |\n";
                            cout << "|                             |\n";
                            cout << "|   SELECT RANGE 0 - ";
                        }
                        if (eng_lang=='1')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|         PIERWIASTEK         |\n";
                            cout << "|                             |\n";
                            cout << "|   WYBIERZ ZAKRES 0 - ";
                        }
                        do {
                        cin >> roo_rng;
                        err=cin.fail();
                        if (err)
                        if (eng_lang=='1')
                        {
                            cout << "\nAn error has occurred, please try again: ";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "\nWystapil blad, sproboj ponownie";
                        }
                        cin.clear();
                        cin.ignore();
                        } while (err);
                        difficulty=4;
                        system("cls");
                    }
                }
                if (dif_cho=='3')
                {
                    //Preseted difficulties
                    if (eng_lang=='1')
                    {
                        cout << "-------------------------------" << endl;
                        cout << "|                             |\n";
                        cout << "|   CHOOSE DIFFICULTY         |\n";
                        cout << "|                             |\n";
                        cout << "|     1. EASY                 |\n";
                        cout << "|     2. MEDIUM               |\n";
                        cout << "|     3. HARD                 |\n";
                        cout << "|                             |\n";
                        cout << "-------------------------------" << endl;
                    }
                    if (eng_lang=='0')
                    {
                        cout << "-------------------------------" << endl;
                        cout << "|                             |\n";
                        cout << "|   WYBIERZ POZIOM TRUDNOSCI  |\n";
                        cout << "|                             |\n";
                        cout << "|     1. LATWY                |\n";
                        cout << "|     2. SREDNI               |\n";
                        cout << "|     3. TRUDNY               |\n";
                        cout << "|                             |\n";
                        cout << "-------------------------------" << endl;
                    }
                    diflv_cho=getch();

                    if (diflv_cho=='1')
                    {
                        difficulty=1;
                        add_rng=75;
                        sub_rng=75;
                        mul_rng=6;
                        div_rng=6;
                        mod_rng=6;
                        roo_rng=6;
                    }
                    if (diflv_cho=='2')
                    {
                        difficulty=2;
                        add_rng=100;
                        sub_rng=100;
                        mul_rng=10;
                        div_rng=10;
                        mod_rng=10;
                        roo_rng=10;
                    }
                    if (diflv_cho=='3')
                    {
                        difficulty=3;
                        add_rng=150;
                        sub_rng=150;
                        mul_rng=20;
                        div_rng=20;
                        mod_rng=20;
                        roo_rng=20;
                    }
                }
                system("cls");
            }
            if (menu_cho=='3')
            {
                //Players
                if (eng_lang=='1')
                {
                    cout << "-------------------------------" << endl;
                    cout << "|                             |\n";
                    cout << "|     1. NUMBER OF PLAYERS    |\n";
                    cout << "|                             |\n";
                    cout << "|     2. PLAYERS NAMES        |\n";
                    cout << "|                             |\n";
                    cout << "|     3. CHOOSE LANGUAGE      |\n";
                    cout << "|                             |\n";
                    cout << "-------------------------------" << endl;
                }
                if (eng_lang=='0')
                {
                    cout << "-------------------------------" << endl;
                    cout << "|                             |\n";
                    cout << "|     1. LICZBA GRACZY        |\n";
                    cout << "|                             |\n";
                    cout << "|     2. NAZWY GRACZY         |\n";
                    cout << "|                             |\n";
                    cout << "|     3. WYBIERZ JEZYK        |\n";
                    cout << "|                             |\n";
                    cout << "-------------------------------" << endl;
                }
                pla_cho=getch();
                system("cls");

                if (pla_cho=='1')
                {
                    //Number of players
                    if (eng_lang=='1')
                    {
                        cout << "-------------------------------" << endl;
                        cout << "|                             |\n";
                        cout << "|     NUMBER OF PLAYERS: " << players_num << "    |\n";
                        cout << "|                             |\n";
                        cout << "|     ENTER NEW NUMBER: ";
                    }
                    if (eng_lang=='0')
                    {
                        cout << "-------------------------------" << endl;
                        cout << "|                             |\n";
                        cout << "|     LICZBA GRACZY: " << players_num << "       |\n";
                        cout << "|                             |\n";
                        cout << "|     PODAJ NOWA LICZBE: ";
                    }
                    do {
                    cin >> players_num;
                    err=cin.fail();
                    if (err)
                    if (eng_lang=='1')
                        {
                            cout << "\nAn error has occurred, please try again: ";
                        }
                    if (eng_lang=='0')
                        {
                            cout << "\nWystapil blad, sproboj ponownie";
                        }
                    cin.clear();
                    cin.ignore();
                    } while (err);
                    system("cls");
                }
                if (pla_cho=='2')
                {
                    //Players names
                    while (players_num>players_names.size())
                    {
                        stringstream ssplayer_name;
                        string player;
                        if (eng_lang=='1')
                        {
                            player="Player ";
                        }
                        if (eng_lang=='0')
                        {
                            player="Gracz ";
                        }
                        int player_name;

                        player_name=players_names.size()+1;
                        ssplayer_name << player_name;
                        player+=ssplayer_name.str();
                        players_names.push_back(player);
                    }

                    while (players_num<players_names.size())
                    {
                        players_names.pop_back();
                    }
                    if (eng_lang=='1')
                    {
                        cout << "-------------------------------" << endl;
                        cout << "|                             |\n";
                        cout << "|                             |\n";
                        cout << "|      PLAYERS NAMES:         |\n";
                        for (i=0; i<players_names.size(); i++)
                        {
                            cout << "P " << i+1 << " = " << players_names[i] << endl;
                        }
                        cout << "|                             |\n";
                        cout << "|    DO YOU WANT TO CHANGE    |\n";
                        cout << "|    PLAYERS NAMES ?          |\n";
                        cout << "|                             |\n";
                        cout << "|    1. YES                   |\n";
                        cout << "|                             |\n";
                        cout << "|    2. NO                    |\n";
                        cout << "|                             |\n";
                        cout << "-------------------------------" << endl;
                    }
                    if (eng_lang=='0')
                    {
                        cout << "-------------------------------" << endl;
                        cout << "|                             |\n";
                        cout << "|                             |\n";
                        cout << "|      NAZWY GRACZY:          |\n";
                        for (i=0; i<players_names.size(); i++)
                        {
                            cout << "P " << i+1 << " = " << players_names[i] << endl;
                        }
                        cout << "|                             |\n";
                        cout << "|    CZY CHCESZ ZMIENIC       |\n";
                        cout << "|    NAZWY GRACZY ?           |\n";
                        cout << "|                             |\n";
                        cout << "|    1. TAK                   |\n";
                        cout << "|                             |\n";
                        cout << "|    2. NIE                   |\n";
                        cout << "|                             |\n";
                        cout << "-------------------------------" << endl;
                    }
                    planm_cho=getch();
                    system("cls");

                    if (planm_cho=='1')
                    {
                        if (eng_lang=='1')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|     CHOOSE PLAYER NAME      |\n";
                            cout << "|     YOU WANT TO CHANGE:     |\n";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|     WYBIERZ GRACZA KTOREGO  |\n";
                            cout << "|     IMIE CHCESZ ZMIENIC:    |\n";
                        }
                        do {
                        cin >> plach_cho;
                        err=cin.fail();
                        if (eng_lang=='1')
                        {
                            cout << "\nAn error has occurred, please try again: ";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "\nWystapil blad, sproboj ponownie";
                        }
                        cin.clear();
                        cin.ignore();
                        } while (err || plach_cho<1 || plach_cho>players_num);
                        system("cls");
                        cout << "-------------------------------" << endl;
                        cout << "|                             |\n";
                        cout << "|       " << players_names[plach_cho-1] << " -> ";
                        do {
                        cin >> players_names[plach_cho-1];
                        err=cin.fail();
                        if (err)
                        if (eng_lang=='1')
                        {
                            cout << "\nAn error has occurred, please try again: ";
                        }
                        if (eng_lang=='0')
                        {
                            cout << "\nWystapil blad, sproboj ponownie";
                        }
                        cin.clear();
                        cin.ignore();
                        } while (err || plach_cho<1 || plach_cho>players_num);
                    }
                    if (planm_cho=='2')
                    {

                    }
                    system("cls");
                    }
                    if (pla_cho=='3')
                    {
                        //Languages
                        if (eng_lang=='1')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|      LANGUAGES              |\n";
                            cout << "|                             |\n";
                            cout << "|          1. PL              |\n";
                            cout << "|                             |\n";
                            cout << "|          2. ENG             |\n";
                            cout << "|                             |\n";
                            cout << "-------------------------------" << endl;
                        }
                        if (eng_lang=='0')
                        {
                            cout << "-------------------------------" << endl;
                            cout << "|                             |\n";
                            cout << "|      JEZYKI                 |\n";
                            cout << "|                             |\n";
                            cout << "|          1. PL              |\n";
                            cout << "|                             |\n";
                            cout << "|          2. ENG             |\n";
                            cout << "|                             |\n";
                            cout << "-------------------------------" << endl;
                        }
                        lan_cho=getch();
                        system("cls");

                        if (lan_cho=='1')
                        {
                            eng_lang='0';
                        }
                        if (lan_cho=='2')
                        {
                            eng_lang='1';
                        }
                    }

            }
            if (menu_cho=='4')
            {
                exit(0);
            }
        }
    }
} ;


//Game Core
class Operation
{
    //Variables
private:
    int op_type;
    double num1;
    double num2;
    long num1i;
    long num2i;
    double multiplier;
    double solution;
    double answer;
    int pnt;
//Methods
public:
    Operation(int ope)
    {
        op_type=ope;
    }
    //Randomizing operation
    void main_Game()
    {
        if (op_type==1)
        {
            //Addition
            num1=rand()%add_rng+1;
            num2=rand()%add_rng+1;
            solution=num1+num2;
        }
        if (op_type==2)
        {
            //Substraction
            num1=rand()%sub_rng+1;
            num2=rand()%sub_rng+1;
            solution=num1-num2;
        }
        if (op_type==3)
        {
            //Multiplication
            num1=rand()%mul_rng+1;
            num2=rand()%mul_rng+1;
            solution=num1*num2;
        }
        if (op_type==4)
        {
            //Division
            multiplier=rand()%div_rng+1;
            num2=rand()%div_rng+1;
            num1=num2*multiplier;
            solution=num1/num2;
        }
        if (op_type==5)
        {
            //Modulo
            do {
            num1i=rand()%mod_rng+10+1;
            num2i=rand()%mod_rng+1;
            } while (num1i<=num2i);
            solution=num1i%num2i;
        }
        if (op_type==6)
        {
            //Root
            multiplier=rand()%2+2;
            do {
            num1=rand()%roo_rng+2;
            num2=pow(num1,multiplier);
            } while (num2>roo_rng*roo_rng);
            solution=num1;
        }
    }
    //Answering
    int player_Choice()
    {
        pnt=0;
        if (op_type==1)
        {
            cout << num1 << " + " << num2 << " = ";
            do {
            cin >> answer;
            err=cin.fail();
            if (err)
            {
                if (eng_lang=='1')
                {
                    cout << "\nAn error has occurred, please try again: ";
                }
                if (eng_lang=='0')
                {
                    cout << "\nWystapil blad, sproboj ponownie";
                }
            }
            cin.clear();
            cin.ignore();
            } while (err);
        }
        if (op_type==2)
        {
            cout << num1 << " - " << num2 << " = ";
            do {
            cin >> answer;
            err=cin.fail();
            if (err)
            {
                if (eng_lang=='1')
                {
                    cout << "\nAn error has occurred, please try again: ";
                }
                if (eng_lang=='0')
                {
                    cout << "\nWystapil blad, sproboj ponownie";
                }
            }
            cin.clear();
            cin.ignore();
            } while (err);
        }
        if (op_type==3)
        {
            cout << num1 << " * " << num2 << " = ";
            do {
            cin >> answer;
            err=cin.fail();
            if (err)
            {
                if (eng_lang=='1')
                {
                    cout << "\nAn error has occurred, please try again: ";
                }
                if (eng_lang=='0')
                {
                    cout << "\nWystapil blad, sproboj ponownie";
                }
            }
            cin.clear();
            cin.ignore();
            } while (err);
        }
        if (op_type==4)
        {
            cout << num1 << " / " << num2 << " = ";
            do {
            cin >> answer;
            err=cin.fail();
            if (err)
            {
                if (eng_lang=='1')
                {
                    cout << "\nAn error has occurred, please try again: ";
                }
                if (eng_lang=='0')
                {
                    cout << "\nWystapil blad, sproboj ponownie";
                }
            }
            cin.clear();
            cin.ignore();
            } while (err);
        }
        if (op_type==5)
        {
            cout << num1i << " % " << num2i << " = ";
            do {
            cin >> answer;
            err=cin.fail();
            if (err)
            {
                if (eng_lang=='1')
                {
                    cout << "\nAn error has occurred, please try again: ";
                }
                if (eng_lang=='0')
                {
                    cout << "\nWystapil blad, sproboj ponownie";
                }
            }
            cin.clear();
            cin.ignore();
            } while (err);
        }
        if (op_type==6)
        {
            cout << multiplier << " root of " << num2 << " = ";
            do {
            cin >> answer;
            err=cin.fail();
            if (err)
            {
                if (eng_lang=='1')
                {
                    cout << "\nAn error has occurred, please try again: ";
                }
                if (eng_lang=='0')
                {
                    cout << "\nWystapil blad, sproboj ponownie";
                }
            }
            cin.clear();
            cin.ignore();
            } while (err);
        }
        if (answer==solution)
        {
            if (eng_lang=='1')
                cout << "You scored one point!" << endl;
            if (eng_lang=='0')
                cout << "Zdobyles jeden punkt!" << endl;
            Beep(1567, 150);
            Beep(1750, 250);
            pnt=1;
        }
        return pnt;
    }
};

int main()
{
    Beep (1285,100);
    Beep (1092,100);
    Beep (976,100);
    Beep (1462,150);

    srand (time(NULL));
    //Variables
    int points[players_num];

    //Creating menu
    Menu menu;
    menu.menu_Settings();

    //Time variables
    double t_elapsed;
    clock_t start,stop;
    for (i=0; i<players_num; i++)
    {
        system("cls");
        if (eng_lang=='1')
          {
            cout << players_names[i] << "'s Turn" << endl;
            cout << "Press any key to begin!" << endl;
          }

        if (eng_lang=='0')
        {
            cout << "Tura " << players_names[i] << endl;
            cout << "Wcisnij dowolny przycisk, aby zaczac!" << endl;
        }
        t_elapsed=0;
        points[i]=0;
        cin.get();
        system("cls");
        //Main game
        while (t_elapsed/CLOCKS_PER_SEC<max_time)
        {
            start=clock();

            //Creating object
            int operation=rand()%6+1;
            Operation op(operation);
            op.main_Game();
            points[i]+=op.player_Choice();

            stop=clock();
            t_elapsed+=(double)(stop-start)*1000.0/CLOCKS_PER_SEC;
        }
        if (eng_lang=='1')
            cout << endl << players_names[i] << " scored " << points[i] << " points!" << endl;
        if (eng_lang=='0')
        {
            if (points[i]==0 || points[i]>=5)
                cout << endl << players_names[i] << " zdobyl " << points[i] << " punktow!" << endl;
            else if (points[i]==1)
                cout << endl << players_names[i] << " zdobyl " << points[i] << " punkt!" << endl;
            else if (points[i]>=2 && points[i]<=4)
                cout << endl << players_names[i] << " zdobyl " << points[i] << " punkty!" << endl;
            else
                cout << endl << players_names[i] << " zdobyl " << points[i] << " punktow!" << endl;
        }
        Sleep(2000);
        cout << "Wcisnij dowolny przycisk aby przejsc dalej... "  << endl;
        cin.get();
        cout << endl;
    }
        system("cls");
        if (eng_lang=='1')
        {
            cout << endl << "           SCOREBOARD          \n" << endl;
            cout << "-------------------------------" << endl;
            cout << "|                             |\n";
            cout << "|                             |\n";
            for (i=0; i<players_num; i++)
                cout << "     " << players_names[i] << ": " << points[i] << endl;
            cout << "|                             |\n";
            cout << "|                             |\n";
            cout << "-------------------------------" << endl;
        }
        if (eng_lang=='0')
        {
            cout << "         TABELA WYNIKOW          \n" << endl;
            cout << "-------------------------------" << endl;
            cout << "|                             |\n";
            cout << "|                             |\n";
            for (i=0; i<players_num; i++)
                cout << "     " << players_names[i] << ": " << points[i] << endl;
            cout << "|                             |\n";
            cout << "|                             |\n";
            cout << "-------------------------------" << endl;
        }

    Beep (1285,100);
    Beep (1092,100);
    Beep (1462,100);
    Beep (1185,100);
    Beep (992,100);
    Beep (1076,100);
    Beep (1562,150);

    cin.get();
    cin.get();

    return 0;
}
