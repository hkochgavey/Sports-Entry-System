#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
#include<process.h>
#include<fstream>
#include<stdlib.h>
#include<sstream>
#include<iomanip>
#include<vector>
#include<windows.h>
#include<stdlib.h>

using namespace std;
int choice;
string any;

class user
{
    public:
        int n, div_choice;
        void user_menu();
        void admin_menu() ;
        void homepage() ;
        void password(int) ;
        void close_app();
        void class_display();
        void stu_registration(int) ;
        void chest_reg();
        void stu_events(string) ;
        void display();
        void display_class_wise(int) ;
        void display_chest_wise() ;
        void display_category_wise();
        void modify();
        void delete_details();
};
user u; //global object 'u' for the class user.

void user::class_display()
{
    beginning_of_class_display:
        system("CLS");
        Sleep(50) ;
        // cout << "\n\t\t
        // w-------------------- "s Sleep(50);
        // cout << "\n\t\t
        // 12 (COMPUTER SCIENCE) |";
        //  Sleep(50);
        // cout << "\n\t\t
        // --------------------- |"; Sleep(50);
        Sleep(10) ;

        cout << "\n\n\n\t\t\t\tPLEASE ENTER YOUR CLASS AND DIVISION USING THE CHOICES GIVEN BELOW\n";
        Sleep(10);
        cout << "\t\t\t\t 1 >> 5A \t\t 13 >> 8A \n";
        Sleep(10);
        cout << "\t\t\t\t 2 >> 5B \t\t 14 >> 8B \n";
        Sleep(10) ;
        cout << "\t\t\t\t 3 >> 5c \t\t 15 >> 8c \n";
        Sleep(10) ;
        cout << "\t\t\t\t 4 >> 5D \t\t 16 >> 8D \n";
        Sleep(10) ;
        cout << "\t\t\t\t 5 >> 6A \t\t 17 >> 9A \n";
        Sleep(10) ;
        cout << "\t\t\t\t 6 >> 6B \t\t 18 >> 9B \n";
        Sleep(10) ;
        cout << "\t\t\t\t 7 >> 6C \t\t 19 >> 9c \n";
        Sleep(10) ;
        cout << "\t\t\t\t 8 >> 6D \t\t 20 >> 10A \n";
        Sleep(10) ;
        cout << "\t\t\t\t 9 >> 7A \t\t 21 >> 10B \n";
        Sleep(10);
        cout << "\t\t\t\t10 >> 7B \t\t 22 >> 10C \n";
        Sleep(10) ;
        cout << "\t\t\t\t11 >> 7c \t\t 23 >> 11 \n";
        Sleep(10) ;
        cout << "\t\t\t\t12 >> 7D \t\t 24 >> 12 \n";
        Sleep(10) ;
        std::cout << "\t\t\t\t0 >> TO GO BACK";
        Sleep(10) ;
        cout << "\n\t\t\t\tENTER YOUR CHOICE (0-24):- "5
        cin >> div_choice;
        if(div_choice>24 && div_choice<0)
        {
            cout << "INVALID CHOICE!! ";
            cout << "\nCHOOSE THE OPTIONS GIVEN BELOW(1-2)";
            cout << "\n>> 1. RETRY";
            cout << "\n>> 2. CLOSE APPLICATION\n";
            cin >> choice;
            if (choice == 1)
            {
                system("cls");
                goto beginning_of_class_display;
            }
            else
            {
                u.close_app();
            }
        }
        else if (div_choice == 0)
        {
            u.user_menu() ;
        }
        else
        {
            stu_registration(div_choice) ;
        }
    }
    void user::stu_registration(int)
    {
        system(" CLS ");
        Sleep(50);
        ifstream myfile;
        string chest_no;
        string list[] ={"5A.csv", "5B.csv","5C.csv","5D.csv","6A.csv","6B.csv","6C.csv", "6D.csv","7A.csv","7B.csv","7C.csv","7D.csv", "8A.csv", "8B.csv", "8C.csv","8D.csv","9A.csv", "9B. csv","9C.csv","10A.csv","10B.csv","10C.csv","11.csv","12.csv"};
        string div[] = {"5A", "5B", "5C", "5D", "6A", "6B","6c","6D", "7A","7B","7C", "7D", "8A", "8B","8C","8D", "9A","9B","9C","10A","10B","10C","11","12" };
        cout <<endl<<endl<< "CLASS ";
        Sleep(10) ;
        cout << div[div_choice-1] << endl << endl << "BOYS" << endl << endl;
        Sleep(10) ;
        myfile.open(list[div_choice-1]) ;
        while (myfile.good())
        {
            string admn_no, name, Dob, STD, Div, Gender, chest, sl_no, category, house;
            getline(myfile, admn_no, ',');
            getline(myfile, name, ',');
            getline(myfile, Dob, ',');
            getline(myfile, STD, ',');
            getline(myfile, Div, ',');
            getline(myfile, Gender, ',');
            getline(myfile, chest, ',');
            getline(myfile, sl_no, ',');
            getline(myfile, category, ',');
            getline(myfile, house, ',');
            if (Gender == "Male")
            {
                Sleep(10);
                cout << sl_no << " - " << chest << " - " << name << endl ;
            }
        }
        myfile.close();
        cout << endl << "GIRLS" << endl << endl;
        myfile.open(list[div_choice-1]);
        while(myfile.good())
        {
            string admn_no, name, Dob, STD, Div, Gender, chest, sl_no, category, house; 
            getline(myfile, admn_no, ',');
            getline(myfile, name, ',');
            getline(myfile, Dob, ',');
            getline(myfile, STD, ',')
            getline(myfile, Div, ',')
            getline(myfile, Gender, ',');
            getline(myfile, chest, ',');
            getline(myfile, sl_no, ',');
            getline(myfile, category, ',');
            getline(myfile, house, '\n');
            if (Gender == "Female")
            {
                Sleep(10);
                cout << sl_no << " - " << chest << "- ";
                cout<< name << endl;
            }

        }
        myfile.close();
        Sleep(100) ; 
        cout << "\nENTER '1' TO PROCEED TO REGISTRATION PAGE \n";
        Sleep(10);
        cout << "ENTER '2' TO GO BACK TO PREVIOUS PAGE\n";
        Sleep(10);
        cout << "ENTER '0' TO CLOSE THE APPLICATION\n";
        Sleep(10);
        cin >> choice;
        if (choice == 0)
        {
            u.close_app();
        }
        else if (choice == 1)
        {
            goto start;
        }
        else if(choice==2)
        {
            u.class_display();
        }
        else
        {
        cout << "INVALID CHOICE!! ";
        cout << "\nCHOOSE THE OPTIONS GIVEN BELOW(1-2)";
        cout << "\n>> 1. RETRY";
        cout << "\n>> 2. CLOSE APPLICATION\n";
        cin >> choice;
        if (choice == 1)
        {
            system("cls");
            u.stu_registration(div_choice) ;
        }
        else
        {
            u.close_app();
        }
        start:
        system("cls");
        system("pause");
        system("cls");
        ifstream in(list[div_choice-1]);
        string line, field;

        vector< vector<string>> array; // the 2D array
        vector<string> v; // array of values for one line only

        while(getline(in, line)) // get next line in file
        {
            v.clear();
            stringstream ss(line);

            while (getline(ss, field, ',')) // break line into comma delimitted fields
            {
                v.push_back(field); // add each field to the 1D array
            }

            array.push_back(v); // add the 1D array to the 2D array

            v.push_back(field); // add each field to the 1D array
        }
        // print out what was read in
        string admn_no, name, Dob, STD, Div, Gender, chest, sl_no, category, house;
        getline(myfile, admn_no, ',');
        getline(myfile, name, ',');
        getline(myfile, Dob, ',');
        getline(myfile, STD, ',');
        getline(myfile, Div, ',');
        getline(myfile, Gender, ',');
        getline(myfile, chest, ',');
        getline(myfile, sl_no, ',');
        getline(myfile, category, ',');
        getline(myfile, house, '\n');

        for (size_t i = 1; i < array.sizeQ; i++)
        {
            //star:
            Sleep(50);
            cout <<endl<< array[0][7] <« " - "<< array[0][6] << " - " <<array[0][2] << " - "<< array[0][5] << " - " <<array[0][9]<< " - " <<array[0][1] << endl;
            cout<< array[i][7] <« "- "<< array[i][6] << "- " << array[i][2] << " - " << array[i][5] << " - " ;

            if(array[i][9] == "a" || array[i][9] == "A")
            {
                cout << "ALAKANANDA";
            }
            else if (array[i][9] == "b" || array[i][9] == "B")
            {
                cout << "BHAGIRATHI";
            } 
            else if (array[i][9] == "c" || array[i][9] == "C")
            {
                cout << "CAUVERY":
            }
            else if (array[i][9] == "g" || array[i][9] == "G")
            {
                cout << "GANGA";
            }
            else if (array[i][9] == "y" || array[i] [9] == "Y")
            {
                cout << "YAMUNA";
            }
            else
            {
                 cout << "HOUSE NOT FOUND! !";
            }
            cout<< " - " << array[i][1];

            Sleep(100) ;

            chest_no = array[i][6];
            if(array[i][5] == "Male")
            {
                if (array[i][8] == "2008" || array[i][8] == "2009" || array[i][8] == "2010")
                {
                    ofstream outfile;
                    cout << "\n\nYOUR UNDER_12 ITEMS ARE GIVEN BELOW:- \n";
                    cout << "\n 1>> 100 Mtr RACE";
                    cout << "\n 2>> 200 Mtr RACE";;
                    cout << "\n 3>> 400 Mtr RACE";
                    cout << "\n 4>> LONG JUMP";
                    cout << "\n 5>> HIGH JUMP";
                    cout << "\n 0>> NO EVENT";
                    cout << "\n\nCHOOSE YOUR ITEMS WISELY WITHOUT ANY MISATKES (0-5)";
                    cout << "\n[ NOTE:- AN ATHLETE CAN ONLY PARTICIPATE IN MAXIMUM 4 INDIVIDUAL EVENTS ONLY!!! ]\n";

                    for (int i = 1; i <= 4; i++)
                    {
                        if (i == 1)
                        {
                            cout << "\n lst ENTRY:- ";
                            cin >> choice;
                        }
                        else if (i == 2)
                        {
                        cout << "\n 2nd ENTRY:- ";
                        cin >> choice;
                        }
                        else if (i == 3)
                        {
                            cout << "\n 3rd ENTRY:- ";
                            cin >> choice;
                        }
                        else
                        {
                            cout << "\n 4th Entry:- ";
                            cin >> choice;
                        }
                        switch (choice)
                        {
                            case 0:
                                cout << "\n NO EVENT";
                                break;
                            case 1:
                                outfile.open("m_12_100.csv", jos_base: :app);
                                outfile << chest_no << " "ec "\n":
                                outfile.close();
                                break;
                            case 2:
                                outfile.open("m_12_200.csv", ios_base::app);
                                outfile << chest_no << "," << "\n":
                                outfile.close();
                                break;
                            case 3:
                                outfile.open("m_12_400.csv", ios_base: :app);
                                outfile << chest_no << "," << "\n";
                                outfile.close();
                                break;
                            case 4:
                                outfile.open("m_12_longjump.csv",ios_base::app);
                                outfile << chest_no << "," << "\n":
                                outfile.close();
                                break;
                            case 5:
                                outfile.open("m_12_highjump.csv",ios_base::app);
                                outfile << chest_no << "," << "\n";
                                outfile.close(Q);
                                break;
                            default:
                                cout << "INVALID";
                                break;
                        }
                    }
                }
                else if (array[i][8] == "2007" || array[i][8] == "2006")
                {
                    ofstream outfile;
                    cout << "\n\nYOUR UNDER_14 ITEMS ARE GIVEN BELOW:- \n";
                    cout << "\n 1>> 100 Mtr RACE";
                    cout << "\n 2>> 200 Mtr RACE";;
                    cout << "\n 3>> 400 Mtr RACE";
                    cout << "\n 4>> 800 Mtr RACE";
                    cout << "\n 5>> LONG JUMP";
                    cout << "\n 6>> HIGH JUMP";
                    cout << "\n 0>> NO EVENT";
                    cout << "\n\nCHOOSE YOUR ITEMS WISELY WITHOUT ANY MISATKES (0-6)";
                cout << "\n[ NOTE:- AN ATHLETE CANMAXIMUM 4 INDIVIDUAL EVENTS ONLY!!! ]\n";
                for (int i = 1; i <= 4; i++)
                {
                    if (i == 1)
                    {
                        cout << "\n 1st ENTRY: ";
                        cin >> choice;
                    }
                    else if( i == 2)
                    {
                        cout << "\n 2nd ENTRY: ";
                        cin >> choice;
                    }
                    else if (i == 3)
                    {
                        cout << "\n 3rd ENTRY:- ";
                        cin >> choice;
                    }
                    else
                    {
                        cout <<"\n 4th Entry:- ";
                        cin >> choice;
                    }
                    switch (choice)
                    {
                        case 0: 
                            cout<< "\n No EVENT:- ";
                            break;    
                        case 1:
                            outfile.open("m_14_100.csv, ios_base::app");
                            outfile << chest_no << "," << "\n";
                            outfile.close();
                            break;
                        case 2:
                            outfile.open("m_14_200.csv, ios_base::app");
                            outfile << chest_no << "," << "\n";
                            outfile.close();
                            break;
                        case 3:
                            outfile.open("m_14_400.csv, ios_base::app");
                            outfile << chest_no << "," << "\n";
                            outfile.close();
                            break;
                        case 4:
                            outfile.open("m_14_800.csv, ios_base::app");
                            outfile << chest_no << "," << "\n";
                            outfile.close();
                            break;
                        case 5:
                            outfile.open("m_14_longjump.csv, ios_base::app");
                            outfile << chest_no << "," << "\n";
                            outfile.close();
                            break;
                        case 6:
                            outfile.open("m_14_highjump.csv, ios_base::app");
                            outfile << chest_no << "," << "\n";
                            outfile.close();
                            break;
                        default:
                            out << "INVALID";
                            break;
                    }
                }
            }
            else if (array[i][8] == "2003" || array[i][8] == "2004" || array[i][8] == "2005")
            {
                ofstream outfile;
                cout << "\n\nYOUR UNDER_16 ITEMS ARE GIVEN BELOW:- \n";
                cout << "\n 1>> 100 Mtr RACE";
                cout << "\n 2>> 200 Mtr RACE"::
                cout << "\n 3>> 400 Mtr RACE";
                cout << "\n 4>> 800 Mtr RACE";
                cout << "\n 5>> 1500 Mtr RACE";
                cout << "\n 6>> LONG JUMP":
                cout << "\n 7>> HIGH JUMP";
                cout << "\n 8>> SHOT PUT THROW";
                cout << "\n 9>> DISCUSS THROW":
                cout << "\n 0>> NO EVENT";
                cout << "\n\nCHOOSE YOUR ITEMS WISELY WITHOUT ANY MISATKES (0-9)";
                cout << "\n[ NOTE:- AN ATHLETE CAN ONLY PARTICIPATE IN MAXIMUM 4 INDIVIDUAL EVENTS ONLY!!! ]\n";
                for (int i = 1; i <= 4; i++)
                {
                if G == 1)
                {
                cout << "\n 1st ENTRY:- "
                cin >> choice;

                }
                else if (i == 2)
                {

                cout << "\n 2nd ENTRY:- "3
                cin >> choice;

                }
                else if (i == 3)

                : cout << "\n 3rd ENTRY:- "3
                cin >> choice;

                }

else

{

cout << "\n 4th Entry: ;
cin >> choice;

switch (choice)

case 0: ,
cout << "\n NO EVENT";
break;

case 1:
outfile.open("m_16_100.csv", ios_base::app);
outfile << chest_no << "," << "\n";
outfile.close();
break;

case 2:
outfile.open("m_16_200.csv", jos_base::app);
outfile << chest_no << "," << "\n";
outfile.close(Q);
break;

case 3:
outfile.open("m_16_400.csv", ios_base::app);
outfile << chest_no << "," << "\n":
outfile.close();
break;

case 4:

outfile.open("m_16_800.csv", ios_base::app);
outfile << chest_no << "," << "\n";
outfile.close();
break;

case 5:
outfile.open("m_16_1500.csv", ios_base::app);
outfile << chest_no << "," << "\n";
outfile.closeQ;
break;

case 6:
outfile.open("m_16_longjump.csv",

jos_base:: app);

outfile << chest_no << "," << "\n";
outfile.closeQ;
break;

case 7:
outfile.open("m_16_highjump.csv",

jos_base::app);

outfile << chest_no << "," << "\n";
outfile.closeQ;
break;

case 8:
outfile.open("m_16_shotput.csv",

jos_base::app); non

outfile << chest_no << "," << "\n";
outfile.closeQ;
break;
case 9:
outfile.open("m_16_discuss.csv",

jos_base::app);

outfile << chest_no << ",".<< "\n";
outfile.close();
break;
default:
cout << "INVALID";
break;
oVWuVvvwvevwevwevvwer7FeuvwFrTlTtlhlh

. if (array(i][8] == "2001" || array[i][8] == "2002")

ofstream outfile;

cout << "\n\nYOUR UNDER_19 ITEMS ARE GIVEN BELOW:- \n";

cout << "\n 1>> 100 Mtr RACE":

cout << "\n 2>> 200 Mtr RACE";;

cout << "\n 3>> 400 Mtr RACE";

cout << "\n 4>> 800 Mtr RACE";

cout << "\n 5>> 800 Mtr WALKING RACE";

cout << "\n 6>> 1500 Mtr RACE”;

cout << "\n 7>> LONG JUMP";

cout << "\n 8>> HIGH JUMP";

cout << "\n 9>> SHOT PUT";

cout << "\n 10>> DISCUSS THROW";

cout << "\n 11>> JAVELIN THROW";

cout << "\n 0>> NO EVENT";

cout << "\n\nCHOOSE YOUR ITEMS WISELY WITHOUT ANY

MISATKES (0-11)";
cout << "\n[ NOTE:- AN ATHLETE CAN ONLY PARTICIPATE IN
MAXIMUM 4 INDIVIDUAL EVENTS ONLY!!! ]\n";

for (int i = 1; 7 <= 4; i++)

{

if G =)
{
cout << "\n Ist ENTRY:- ";
cin >> choice;

}
else if (i == 2)

cout << "\n 2nd ENTRY:- ";
cin >> choice;

} 3
else if (i == 3)

: cout << "\n 3rd ENTRY:- "3
cin >> choice;

}

else

{

cout << "\n 4th Entry:- 5
cin >> choice;

}
switch (choice)
{

case 0: ,
cout << " NO EVENT\n";
break;

case 1: ae .
outfile.open("m_19_100.csv , ios_base: :app) ;

outfile << chest_no << "," << "\n";
outfile.close();
break;

case 2: na
outfile.open("m19_200.csv", jos_base::app);

outfile << chest_no << "," << "\n";
outfile.closeQ;
break;
jos_base:

jos_base:

jos_base:

jos_base:

jos_base:

jos_base:

: app) ;

app) ;

:app);

:app);

:app);

:app) ;

case 3:
outfile.
outfile
outfile.
break;

case 4:

outfile.

outfile
outfile.
break;

case 5:

outfile.

outfile

outfile.

break;
case 6:
outfile.
outfile
outfile.
break;
case 7:
outfile.

outfile
outfile.
break;
case 8:
outfile.

outfile
outfile.
break;
case 9:
outfile.

outfile
outfile.
break;
case 10:
outfile.

outfile
outfile.
break;
case 11:
outfile.

outfile
outfile.
break;
default :
cout <<
break;

open("m_19_400.csv'

<< chest_no <<
close();

open(""m_19_800.csv'

<< chest_no << ",
close(Q);

open(""m_19_800walk.

<< chest_no << ","
close();

"| jos_base: : app);

<< "\n" :

' jos_base:: app);

<< "\n" ;

csv",

<< "\n"s

open("m_19_1500.csv", ios_base: :app);

<< chest_no << ",
close();

<< "\n" :

open("m_19_longjump.csv",

mot

<< chest_no << ",

closeQ);

<< "“\n" :

open("m_19_highjump.csv",

<< chest_no << ",
closeQ);

open("m_19_shotput.

<< chest_no << ","
close();

open("m_19_discuss.

<< chest_no << ","
close();

open("m_19_javelin.

<< chest_no << ","
close();

"INVALID";

<< "\n's
csv",
<< "\n":
csv",
<< "\n":
csv",
<< “"\n"?:
}

else

{

cout << "\nTHERE IS SOMETHING ERROR IN YOUR FILE! ";
cout << list[div_choice - 1];

cout << "PLEASE NOTE DOWN THE STUDENT'S NAME AND CONTACT
WITH THE ADMINS\nTO CONTINUE FURTHER\n":

system("pause");
Sleep(1000);

}

else if (array[i][5] == "Female")
{

if (array[i]([8] == "2008" || array[i][8] == "2009" ||

array[i][8] == "2010")
{

ofstream outfile;

cout
cout
cout
cout
cout
cout
cout
MISATKES (0-4)";

cout

<<
<<
<<
<<
<<
<<
<<

<<

"\n\nYOUR UNDER_12 ITEMS ARE GIVEN BELOW:- \n";
"\n I>> 100 Mtr RACE";

"\n 2>> 200 Mtr RACE":;

"\n 3>> 400 Mtr RACE";

"\n 4>> LONG JUMP";

"\n O>> NO EVENT";

"\n\nCHOOSE YOUR ITEMS WISELY WITHOUT ANY

"\n[ NOTE:- AN ATHLETE CAN ONLY PARTICIPATE IN

MAXIMUM 4 INDIVIDUAL EVENTS ONLY!!! ]\n";
for Cint i = 1; i <= 4; i++)

{

if G == 1)

{

cout << "\n lst ENTRY:- ";
cin >> choice;

}
else if (i == 2)

{
cout << "\n 2nd ENTRY:- ";
cin >> choice;

}

else if (i == 3)

{
cout << "\n 3rd ENTRY:- "3
cin >> choice;

}

else

{

cout << "\n 4th Entry:- "
cin >> choice;

switch (choice)

{

case 0:

cout << "\n NO EVENT";
break;

case 1:

outfile.open("f_12_100.csv", ios_base::app);
outfile << chest_no << "," << "\n";

,
jos_base::app);

}

outfile.close();
break;

case 2:

outfile.open("f_12_200.csv", ios_base::app);
outfile << chest_no << "," << "\n";
outfile.close();

break;

case 3:

outfile.open("f_12_400.csv", ios_base::app);
outfile << chest_no << "," << "\n";
outfile.close();

break;

case 4:

outfile.open("f_12_longjump.csv",

outfile << chest_no << "," << "\n";
outfile.close();
break;

default:

cout << "INVALID";
break;

}
else if (array[i][8] == "2007" || array[i][8] == "2006")

{

ofstream outfile;

cout
cout
cout
cout
cout
cout
cout
cout
: cout
MISATKES (0-6)";

cout

<<
<<
<<
<<
<<
<<
<<
<<
<<

<<

"\n\nYOUR UNDER_14 ITEMS ARE GIVEN BELOW:- \n";
"\n 1>> 100 Mtr RACE";

"\n 2>> 200 Mtr RACE";;

"\n 3>> 400 Mtr RACE";

"\n 4>> 800 Mtr RACE";

"\n 5>> LONG JUMP";

"\n 6>> HIGH JUMP";

"\n O>> NO EVENT";

"\n\nCHOOSE YOUR ITEMS WISELY WITHOUT ANY

"\n[ NOTE:- AN ATHLETE CAN ONLY PARTICIPATE IN

MAXIMUM 4 INDIVIDUAL EVENTS ONLY!!! ]\n"; .
for Cint i = 1; i <= 4; i++)

{

if G == 1)

{

cout << "\n Ist ENTRY:- "3
cin >> choice;

}
else if (i == 2)

{

cout << "\n 2nd ENTRY:- ";
cin >> choice;

}
else if (i == 3)

{

cout << "\n 3rd ENTRY:- ";
cin >> choice;
jos_base::app);

jos_base: :app);

}

else

{
cout << "\n 4th Entry:- "3

cin >> choice;

switch (choice)

{

case 0:
cout << "\n NO EVENT";

break;

case 1:
outfile.open("f_14_100.csv", ios_base:: app);
outfile << chest_no << "," << "\n";
outfile.close();
break;

case 2:
outfile.open("f_14_200.csv", jios_base::app);
outfile << chest_no << "," << "\n";
outfile.close();

break;

case 3:
outfile.open("f_14_400.csv", ios_base:: app);
outfile << chest_no << "," << "\n";
outfile.close(Q);

break;

case 4:
outfile.open("f_14_800.csv", jos_base: :app);

outfile << chest_no << "," << "\n";
outfile.closeQ);
break;

case 5:
outfile.open("f_14_longjump.csv",

outfile << chest_no << "," << "\n";
outfile.close();
break;

case 6:
outfile.open("f_14_highjump.csv",

outfile << chest_no << "," << "\n";
outfile.close();
break;

default:
cout << "INVALID";

break;

}

else if (array[i][8] == "2003" || array[i][8] == "2004" ||

array[i][8] == "2005")
{

ofstream outfile;

cout << "\n\nYOUR UNDER_16 ITEMS ARE GIVEN BELOW:- \n";
cout << "\n 1>> 100 Mtr RACE";

cout << "\n 2>> 200 Mtr RACE";;

cout << "\n 3>> 400 Mtr RACE";
cout
cout
cout
cout
cout
cout
cout
cout
cout
MISATKES (0-10)";
cout

<<
<<
<<
<<
<<
<<
<<
<< "\n 0>> NO
<<

6>>
7>>
8>>
9>>

<<

4>> 800 Mtr RACE";
5>> 800 Mtr WALKING RACE";
1500 Mtr RACE":
LONG JUMP";

HIGH JUMP";

SHOT PUT THROW";
10>> DISCUSS THROW";

EVENT";

MAXIMUM 4 INDIVIDUAL EVENTS ONLY!!! ]\n";

1; i <= 4; i+4)

"\n Ist ENTRY:

cin >> choice;

2)

"\n 2nd ENTRY:

cin >> choice;

3)

"\n 3rd ENTRY:

cin >> choice;

for (int i =
{
if G == 1)
{
cout <<
}
else if (i ==
{
cout <<
else if (i ==
{
cout <<
}
else
{

cout <<

"\n 4th Entry:

cin >> choice;

switch (choice)

{
case 0:
cout <<
break;
case 1:
outfile.
outfile
outfile.
break;
case 2:
outfile.
outfile
outfile.
break;
case 3:
outfile.
outfile
outfile.
break;
case 4:
outfile.
outfile

"\n NO EVENT";

open("f_16_100.
<< chest_no <<
close();

open("f_16_200.
<< chest_no <<
close();

open("f_16_400.
<< chest_no <<
close();

open("f_16_800.
<< chest_ne <<

"\n\NCHOOSE YOUR ITEMS WISELY WITHOUT ANY

csv", ios_base:

; << "\n"s

csv", ios_base:

ys <e "\n"s

csv", ios_base:

; << "\n"s

csv", jos_base:

mom ee "Nn":

"\n[ NOTE:- AN ATHLETE CAN ONLY PARTICIPATE IN

rapp);

app) ;

:app);

app) ;
ios_base:

ios_base:

jos_base:

10s_base:

jios_base:

:app) ;

app) ;

:app);

app);

> app) ;

}

}

case

case

outfile.close();
break;

5:

outfile.open("f_16_800walk.csv",

outfile << chest_no << "J" << "\n":
outfile.close();

break;

case 6:

outfile.open("f_16_1500.csv", ios_base
outfile << chest_no << "\" e¢ "\n's
outfile.close();

>: app);

break;
Case 7:

outfile.

outfile << chest_no << “in
outfile.close();

open("f_16_longjump.csv",

<< "\n":

break;
case 8:

outfile.open("f_16_highjump.csv",

outfile << chest_no << "," << "\n";
outfile.close();

break;

case 9:

outfile.open("f_16_shotput.csv"”

outfile << chest_no << "," << "\n"s
outfile.close();
break;

10:
outfile.open("f_16_discuss.csv"

outfile << chest_no << "," << "\n";
outfile.close();

break;

default:

cout

<< "INVALID";

break;

else if (array[i][8] == "2001" || array[i][8] == "2002")

{

ofstream outfile; ,
"\n\nYOUR UNDER_19 ITEMS ARE GIVEN BELOW:- \n";

cout
cout
cout
cout
cout
cout
cout
cout
cout

<<
<<
<<
<<
<<
<<
<<
<<
<<

"\n

1l>>
2>>
3>>
4>>
5>>
6>>
7>>
8>>

100 Mtr RACE";

200 Mtr RACE";;

400 Mtr RACE";

800 Mtr RACE";

800 Mtr WALKING RACE";
1500 Mtr RACE";

LONG JUMP";

HIGH JUMP";
cout

cout

cout

cout

cout
MISATKES (0-11)";

cout

<<
<<
<<
<<
<<

"\n 0>> NO

<<

"\n 9>> SHOT PUT";
"\n 10>> DISCUSS THROW";
"\n 11>> JAVELIN THROW";

EVENT";

MAXIMUM 4 INDIVIDUAL EVENTS ONLY!!! J\n";
for Cint i = 1; i <= 4; i++)

{

if G == 1)
{

cout <<

"\n Ist ENTRY:

cin >> choice;

else if (i ==
{

cout <<

2)

"\n 2nd ENTRY:

cin >> choice;

else if (i ==
{

cout <<

3)

"\n 3rd ENTRY:

cin >> choice;

else

cout <<

"\n 4th Entry:

cin >> choice;

switch (choice)

{
case 0:
cout <<
break;
case 1:
outfile.
outfile
outfile.
break;
case 2:
outfile.
outfile
outfile.
break;
case 3:
outfile.
outfile
outfile.
break;
case 4:
outfile.
outfile
outfile.
break;
case 5:

"\n NO EVENT";

open("f_19_100.

<< chest_no <<
close();

open("f_19_200.

<< chest_no <<
closeQ);

open("f_19_400.

<< chest_no <<
close(Q);

open("f_19_800.

<< chest_no <<
close();

"\n\nCHOOSE YOUR ITEMS WISELY WITHOUT ANY

; << "\n":

wow

; << "\n"s

; << "\n":

; << "\n":

csv", ios_base:

csv", ios_base:

csv", jos_base:

csv", ios_base:

"\n[ NOTE:- AN ATHLETE CAN ONLY PARTICIPATE IN

app);

:app);

:app);

:app);
i outfile.open("f. _csv",

ios_base: : app) ; pen("f_19_800walk.csv
outfile << chest_no << "," << "\n";
outfile.close();
break;

case 6:

outfile.open("f_19_1500.csv", ios_base::app);
outfile << chest_no << "," << "\n";
outfile.close();
break;
case 7:
outfile.open("f_19_longjump.csv”,
jos_base:: app);
outfile << chest_no << "," << "\n";
outfile.close(Q);
break;
case 8:
outfile.open("f_19_highjump.csv”,
jos_base::app);
outfile << chest_no << "," << "\n";
outfile.close();
break;
case 9:
outfile.open("f_19_shotput.csv",
jos_base: :app) ;
outfile << chest_no << "," << "\n";
outfile.closeQ;
break;
case 10:
outfile.open("f_19_discuss.csv",
jos_base::app);
outfile << chest_no << "," << "\n";
outfile.close();
break;
case 11:
outfile.open("f_19_javelin.csv”,
jos_base::app);

outfile << chest_no << "," << "\n";
outfile.closeQ;
break;
default:
cout << "INVALID";
break;
}
}
}
else
{

cout << "\nTHERE IS SOMETHING ERROR IN YOUR FILE! ";

cout << list[div_choice - 1];

cout << "PLEASE NOTE DOWN THE STUDENT'S NAME AND CONTACT
WITH THE ADMINS\nTO CONTINUE FURTHER\n";

system("pause”);

Sleep(1000) ;
else

{

cout << "\NTHERE IS SOMETHING ERROR IN YOUR FILE! ";
cout << list[div_choice - 1];

cout << "PLEASE NOTE DOWN THE STUDENT'S NAME AND CONTACT WITH
THE ADMINS\nTO CONTINUE FURTHER\n";

system("pause");
Sleep(1000) ;

cout << "\n\nDO YOU WANT TO CONTINUE??";
cout << "\nENTER '1' TO CONTINUE”;
cout << "\nENTER '2' TO ENTER ONCE AGAIN":

cout << "\nENTER '0' TO GO BACK TO PREVIOUS PAGE";
cin >> choice;

if (choice == 0)
{
u.class_display();

}

if (choice == 1)

{
Sleep(500);
system("cls");

continue;

else if (choice == 2)

{ .

i--;

//goto star;
}
Sleep(500);

system("cls");
for (size_t j = 1; j < array[i].sizeQ; j++)

{
}

cout << "\n";
}
u.display_class_wise(div_choice) ;
Sleep(200) ;

void user: :stu_events(string chest_no)

string m_12[] = {

"m_12_100.csv","m_12_200.csv", "m_12_400.csv","m_12_longjump.csv", "m_12_highj
ump.csv" };

string f_12[] = {
"F_12_100.csv","f_12_200.csv","f_12_400.csv","f_12_longjump.csv" };

string m_14[] = {

"m_14_100. csv", "m_14_200.csv","m_14_400.csv", "m_14_800.csv", "m_14_longjump.c
sv","m_14_highjump.csv", };
string f_14[] = {

"F_14 100.csv","f_14_200.csv","f_14_400.csv", "f_14_800.csv", "f_14_longjump.c
sv", "f_14_highjump.csv", };
. string m_16[] = {
m_16_100. csv", "m_16_200. csv", "m_16_400.csv","m_16_800.csv", "m_16_1500.csv",
m_16_longjump.csv","m_16_highjump.csv","m_16_shotput.csv", "m_16_discuss.csv

string f_16[] = {
"f_16_100.csv","f_16_200.csv", "f_16_400. csv", "f_16_800.csv", "f_16_800walk.cs
v","f_16_1500.csv", "f_16_longjump.csv","f_16_highjump.csv", “f_16_shotput.csv
","f_16_discuss.csv" };

string m_19[] = {
"m_19_100.csv", "m_19_200.csv", "m_19_400.csv", "m_19_800.csv", "m_19_800walk.cs
v","m_19_1500.csv", "m_19_longjump.csv","m_19_highjump.csv", "m_19_shotput.csv
"\"m_19_discuss.csv","m_19_javelin.csv" };

string f_19[] = {
"f_19_100. csv", "f_19_200.csv", "f_19_400. csv", "f_19_800.csv", "f_19_800walk.cs
v","£_19_1500. csv", "f_19_longjump.csv","f_19_highjump.csv","f_19_shotput.csv
","f_19_discuss.csv","f_19_javelin.csv" };

{ "100 mtr","200 Mtr","400 Mtr", "LONGJUMP", "HIGHJUMP" };

string e_m_12[] =
}] = { "100 mtr","200 Mtr","400 mtr", "LONGJUMP" };

string e_f_12[

string e_m_14[] = { "100 mMtr","200 Mtr","400 Mtr", "800
Mtr", "LONGJUMP", "HIGHJUMP", }

string e_f_14[] = { "100 mtr","200 Mtr","400 mtr", "800
Mtr", "LONGJUMP", "HIGHJUMP" , ye

string e_m_16[] = { "100 Mtr","200 Mtr","400 mtr","800 mtr", "1500
Mtr.","LONGJUMP", "HIGHJUMP", "SHOTPUT", "DISCUSS" };

string e_f_16[] = { "100 Mtr","200 mtr","400 Mtr","800 mMtr","800 Mtr
WALK", "1500 Mtr", ""LONGJUMP", "HIGHJUMP","SHOTPUT", "DISCUSS" };

string e_m_19[] = { "100 Mtr","200 mtr","400 Mtr","800 Mtr","800 Mtr
WALK", "1500 Mtr", "LONGJUMP", "HIGHJUMP","SHOTPUT", "DISCUSS", "JAVELIN" };
string e_f_19[] = { "100 mtr","200 Mtr","400 Mtr","800 Mtr", "800 Mtr
WALK", "1500 mtr", "LONGJUMP", "HIGHJUMP", "SHOTPUT", "DISCUSS", "JAVELIN" };

string flag[50];
int n = 0;

for (int i = 0; i < 11; i++)

{
ifstream myfile;
string ch;
myfile.open(m_19[7]);
while (myfile.goodQ)
{

getline(myfile, ch, ',');
if (chest_no == ch)

flag[n] = e_m_19[i];
n+}
}
: myfile.close();

o (int 7 = 0; 1 < 11; i++)
ifstream myfile;
string ch;
myfile.open(f_19[i]);
while (myfile.good())
i

getline(myfile, ch, ',');
if (chest_no == ch)

flag[n] = e_f_19[i];
n++;

}

}
myfile.closeQ;
}

for (int i = 0; i < 9; i++)
{
ifstream myfile;
string ch;
myfile.open(m_16[i]);
while (myfile.good())

getline(myfile, ch, ',');
if (chest_no == ch)

flag[n] = e_m_16[i];
n++3

}

}
myfile.close();
}

for Cint i = 0; i < 10; i++)
{
ifstream myfile;
string ch;
myfile.open(f_16[i]);
while (myfile.good())

getline(myfile, ch, ',');
if (chest_no == ch)

flag[n] = e_f_16[i];
n++3

}

myfile.close();

}

for Cint 1 = 0; i < 6; i++)

{
ifstream myfile;
string ch;
myfile.open(m_14[i]);
. (myfile.good())

getline(myfile, ch, ',');
if (chest_no == ch)

flag([n] = e_m_14[i];

n++3
}
}
myfile.close();
}
for (int i = 0; i < 6; i++)
{
ifstream myfile;
string ch;
myfile.open(f_14[i]);
while (myfile.good())
getline(myfile, ch, ',');
if (chest_no == ch)
flag[n] = e_f_14[i];
n++;
}
}
myfile.close();
}
for (int i = 0; 7 < 5; i++)
{
ifstream myfile;
string ch;
myfile.open(m_12[i]);
while (myfile.good())
{
getline(myfile, ch, ',');
if (chest_no == ch)
flag[n] = e_m_12[i];
n++;
}
}
myfile.close();
}
for (int i = 0; i < 4; 44)
{

ifstream myfile;
string ch;
myfile.open(f_12[i]);
while (myfile.good())
{

getline(myfile, ch, ',');
if (chest_no == ch)

flag[n] = e_f_12[i];
n++;

}

}
’ myfile.close(Q);

ifstream in("C:/Users/hp/source/repos/investigatory/OUTPUT/SA.csv");
string line, field;

vector<vector<string>>array;
vector<string>v;

while (getlineCin, line))

{

v.clearQ;
stringstream ss(line);
while (getline(ss, field, ',')) // break line into comma delimitted
fields
{
v.push_back(field); // add each field to the 1D array
}

array.push_back(v); // add the 1D array to the 2D array
}

//ofstream outfile;

//const char* path_Sa =
"Cc: /Users/hp/source/repos/investigatory/OUTPUT/SA.csv";

//outfile.open(path_Sa) ;

//outfile << array[i][0] <<","<< array[i][1] <<","<< array[i][2] << "," <<
array[iJ[3] << "," < array[i][4] << "," << array[i][5] << ","3

for (int j = 0; j < 4; j++)

{

cout << flag(j] <<" 5, "5

//outfile << flag[j] << 4

}
//outfile << "\n";
//outfile.closeQ ;

cout << endl;

}
void user: :display(
int div_choice;

string chest_no;
system("cls");

start:

Sleep(50) ;

cout << "\n\t\t |-----------
wane nnn nn nnn nnn "s Sleep(50);

cout << "\n\t\t | BY CLASS
12 (COMPUTER SCIENCE) |"; Sleep(50);

cout << "\n\t\t a
ns "; Sleep(50);
cout
cout
cout
cout
cout
cout

{

case

<< "\nl. DISPLAY CLASS-WISE";
<< "\n2. DISPLAY CHEST NO.-WISE";

<< "\n3. DISPLAY CATEGORY-WISE";

<< "\n4. DISPLAY GENDER-WISE";
<< "\n5. DISPLAY EVENT-WISE";
<< "ENTER YOUR CHOICE (1-5) :- ";
cin >> choice;
switch (choice)

1:

dstart:

CLASS 12 (COMPUTER SCIENCE) |"

THE CHOICES GIVEN BELOW\n";

system("CLS");
Sleep(50);

cout << "\n\t\t
cout << "\n\t\t
cout << "\n\t\t

Sleep(10);

|"; Sleep(50) ;

; Sleep(50);

"s Sleep (50);

cout << "\n\n\n\t\t\t\tPLEASE ENTER YOUR CLASS AND DIVISION USING

Sleep(10);

cout << "\t\t\t\t 1 >> 5A \t\t

Sleep(10);
cout << "\t\t\t\t
Sleep(10) ;
cout << "\t\t\t\t
Sleep(10);
cout << "\t\t\t\t
Sleep(10);
cout << "\t\t\t\t
Sleep(10);
cout << "\t\t\t\t
Sleep(10) ;
cout << "\t\t\t\t
Sleep(10);
cout << "\t\t\t\t
Sleep(10) ;
cout << "\t\t\t\t
Sleep(10);

2
3

8
9

cout << "\t\t\t\t10

Sleep(10);

cout << "\t\t\t\t11

Sleep(10);

>>

>>

>>

>>

>>

>>

>>

>>

>>

>>

cout << "\t\t\t\t1l2 >>

Sleep(10);

5B \t\t
5c \t\t
5D \t\t
6A \t\t
6B \t\t
6c \t\t
6D \t\t
7A \t\t

7B \t\t

TC \t\t

7D \t\t

13 >> 8A \n";

14
15
16
17
18
19
20
21
22
23
24

>>

>>

>>

>>

>>

>>

>>

>>

>>

>>

>>

cout << "\t\t\t\t0 >> TO GO BACK";

Sleep(10);

cout << "\n\t\t\t\tENTER YOUR CHOICE (0-24):- ";
cin >> div_choice;

8B \n";
8c \n";
8D \n";
9A \n";
9B \n";
9c \n";
10A \n";
10B \n";
10c \n";
11 \n";
12 \n";

if (div_choice > 24 && div_choice < 0)

{

cout << "INVALID CHOICE!! ";
cout << "\nCHOOSE THE OPTIONS GIVEN BELOW(1-2)";

cout << "\n>> 1. RETRY";
cout << "\n>> 2. CLOSE APPLICATION\n";


}

cin >> choice;

if (choice == 1)

{
system("cls");
goto dstart;

}

else

u.close_app();

}

else if (div_choice == 0)

{
}

u.admin_menu() ;

else

}

u.display_class_wise(div_choice) ;

break;

case 2:

u.display_chest_wise() ;
break;

case 3:

u.display_category_wise();
break;

default :
cout << "INVALID CHOICE! !!";
cout << "\nCHOOSE THE OPTIONS GIVEN BELOW(1-2)";
cout << "\n>> 1. RETRY";
cout << "\n>> 2. CLOSE APPLICATION\n";
cin >> choice;
if (choice == 1)

{
}

‘goto start;

else

}

exit(0);

break;

void user: :close_app()

{

char choice;
system("CLS");

cout <<
cout <<
cout <<
cout <<

"ARE YOU SURE TO EXIT ?\n";
"\nENTER '1' IF YES\n";
"ENTER '2' IF NO\n";

"ENTER YOUR CHOICE HERE:- ";

cin >> choice;
if (choice == 1)
wTFewy wa =» = —_

a

SD OEE SFE TEE TCS NSF lS CF STF CTF CTF CSF TF TFET TEE TD OT OSES Ss lle ll SSE lle le eee

exit(0);

“se if (choice == 2)

u.homepage();

else

{
cout << "INVALID CHOICE! !";

cout << "\nRETRY AGAIN";

}
}

void user: :user_menu()
{

int choice;

hstart:

system("CLS");

Sleep(50) ;

cout << "\n\t\t |-----------
worn nnn n enn n nnn nnne |"; Sleep(50) ;

cout << "\n\t\t | BY CLASS
12 CCOMPUTER SCIENCE) |"; Sleep(50);

cout << "\n\t\t |-----------
manaasasseerssssnennna |"; Sleep(50);

cout <<
"\ n\n n\n\n\n\m\t\t\t\t\ tet eee eee eee aR Re RARER AAS RASS SEES SEES SERS

HERARAAAARAEAERREREARAE HE Sleep(10) ;

cout << PVC CACC CR EERE REE ER RR HH USER MENU
HAEAAREARREARAEAREARERE Ye Sleep(10) ;

cout << PV EA CV CV C\ CREE RR ee He HH
RARER AAARARRERRERERER le Sleep(10) ;

COUt << "\t\t\t\t\ teeter eres tere eae a eee 1. REGISTER CLASS-WISE
HEAEARAARAR AER RARARAER le Sleep(10) ;

cout << MV cl Che At Cree ge eee eae ee eee ee eee
RARREKAARRARARRERERAR HY He Sleep(10) ;

Cout << "\t\t\t\t\ terete seer ern aaa aera 2. REGISTER CHEST NO WISE
HRERAREAERERAREREREEER 1" STeep(10);

cout << ACV EN EV C\LCRE Eee eee ee ee oes
RHRAEARARREAREREEREREE Ye Sleep(10) ;

cout << "\the\e\e cree estes aerate tae seas 3. GO BACK TO MAIN MENU
RHREREAAREAEAEERAEREERY 1)" Sleep(10) ;

cout << PCA CA CL CV CR eee R EE Ree RRR RR
ERERER ERA EAEEREAE ARERR HM Sleep(10) ;

cout << NCA C\ CCC eae ee RR A 4. CIOSE APPLICATION
HRERER EAE RERE AERA ER ERY Sleep(10) ;
cout <<

VEAL CVC CEE ERE I HR II I HI RHR HH RR RARE HER RHR RHR RRR RARE RRR SEES

weeeeeeeee\ n\n\t\t\t\t\t"; Sleep(10);
cout << "ENTER YOUR CHOICE (1-4):- "; Sleep(10);
cin >> choice;

switch (choice)

{
case 1:
u.class_display();
break;

case 2:
u.chest_reg();
break;

case 3:
u.homepage() ;
break;

case 4:
u.close_app();
break;

default:

cout << "INVALID CHOICE! !!";

cout << "\nCHOOSE THE OPTIONS GIVEN BELOW(1-2)";
cout << "\n>> 1. RETRY";

cout << "\n>> 2. CLOSE APPLICATION\n";

cin >> choice;

if (choice == 1)

{

}

else

goto hstart;

exit(0);
}

break;

}
}

void user: :admin_menu()

start:
system("cls");
Sleep(50);

cout << "\n\t\t ——
-Sacsameen ee |"; Sleep(50);

cout << "\n\t\t | BY CLASS
12 (COMPUTER SCIENCE) |"; Sleep(50);

cout << "\n\t\t | -----------
none nnn nnnn- ---------|"; Sleep(50);

cout <<
YVAN VEN ENE CEE eee ERE RE RETR ER ERIN EERE R ERE T ERNE EE REESE RS

RRERAARERREEREARARERERE EY Yl Sleep(10);
cout << MNEACA CA CA CER Aa ERR ERR EER RRR ADMIN MENU
RAREAEAEERARRRARARAEREY ls Sleep(10) ;

cout << NCA CVC tte ee ee ea a a ea Hee
HAKHHRHERERREREREERERE "* STeQN(10);

cout << "\Nt\e\e\t\ teste eeeee ere eee ae es 1. DISPLAY THE DETAILS
HAKKERARERREREREREEEERY "> S]eQN(10) 5
cout << "\t\t\t\t\teeteeererrad ea keke
RRRHRRRERE REA REREREREN |". STeep(10);

cout << PVC Ct) te ee a eee de 2. MODIFY BY CHEST NO.
Wate tek teste eee eee 1" STeep(10) ;

Cout << "\t\t\t\ tte eee ee a ea ade as ia ies
Iddddedndondeiccicie| 9s Seep (10) ;

cout << AW aS AWA Slalatahaltataebaielalhalebaialalalelell 3. DELETE
HARRAH RR I RY Sleep(10) ;
cout << VCC tte eee
Sete dete de ded ie de ede ae aed ee see ae ae ee yt Sleep(10) ;
Cout << M\t\t\t\t\ tee ee eae 4. GO BACK TO MAIN MENU

Sedetee dead de deed dei ae eee iT Sleep(10) ;

cout << ELEC t ee eee ee ee
Sede do edie ea ea Hem RH Sleep(10) ;

cout << PVC CV CVC Ctra ee ee RS 5. ClOSE APPLICATION
ERARARAR EERIE AR EAE RE Te Sleep(10) ;
cout <<

* LORIE EEE EEREE
NAC AC ANA silatatatahatalatatetetetelalalalalataahehatelelelelalalalalalalele *

were y\n\t\t\t\t\t"; sleep(10) ;
cout << "ENTER YOUR CHOICE (1-5):- "; Sleep(10);
cin >> choice;

switch (choice)

{
case 1:
u.displayQ;
break;
case 4:
u. homepage () ;
break;
case 5:
u.close_app();
break;
default:
cout << "INVALID CHOICE!!!";
cout << "\nCHOOSE THE OPTIONS GIVEN BELOW(1-2)";
cout << "\n>> 1. RETRY";
cout << "\n>> 2. CLOSE APPLICATION\n";
cin >> choice;
if (choice == 1)
{
goto start;
} ‘
else
exit(0);
}
break;
}

z

void user: :homepage()
int choice;
system("CLS");
Sleep(50);
cout << "\n\t\t a0 |-----
morn r enn ee nnn nrn naan |"; Sleep(50);
cout << "\n\t\t | BY CLASS
12 (COMPUTER SCIENCE) |"; Sleep(50); 0
cout << "\n\t\t |-----7
wenn n-ne nner |"; Sleep(50);
cout << "\n\n\n\n\n\n\t\t\t\t\t<<<<<<ccc<<<ccc<<<<<<<CHOOSE
LOGIN (1-3)>>>>>>>>>>>>>>>>>>>>>>\N" 5 Sleep(10) ; ,
cout << WV E\ EAE E\ <<< <<<<<< <<< <<< << << <<<>>>>>>>>> 2222222277 277 \n";

Sleep(10) ;
cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<<<<<< 1. USER

>>>>>>>>>>>>>>>>>>>>>> \n"; STeep(10) ;
cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>> \n";

ANY OPTION TO

Sleep(10) ;

cout << "\t\t\t\t\t<<<<<<<<<<<ceceecx<<<<<<>>>>>>>>>>>>>>>>>>> >>> \n";
Sleep(10);

cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<<<<<< 2. ADMIN

>>>>>>>>>>>>>>>>>>>>>> \n"; STeep(10);
WwW,
cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>2>> 22> \n";

Sleep(10);

cout << "\t\t\t\t\t<<<<<<<<<<<<e<ee<<<<<<>>>>>>>>>>>>>2 22222277 \n";
Sleep(10) ;

cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<<<<<< 3. EXIT
>>>>>>>>>>>>>>>>>>>>>> \n"s Sleep(10);

cout <<

IV EAE EA EEK <5 556K K KKK KK KK KKK KKK KKK KKK KKK KK>>>>>>>P>>PPPPPPPPP PPP PPP Pe
>>>>>>>>>>>> \n"; Sleep (10);
cout << "\n
CHOICE (1-3) :- "3
cin >> choice;
switch (choice)

ENTER YOYR

{

case 1:
u.password(1) ;
break;

case 2:
u.password(2);
break;

case 3:
u.close_appQ;
break;

default:

cout << "INVALID SELECTION! !!";

cout << "\nCHOOSE THE OPTIONS GIVEN BELOW(1-2)";
cout << "\n>> 1. RETRY";

cout << "\n>> 2. CLOSE APPLICATION\n";

cin >> choice;

if (choice == 1)

{

}

else

u. homepage () ;
{
}

break;

exit(1);

}

void welcome ()

Sleep(50) ;

cout << "\n\t\t | -----------
een eran mr |"; Sleep(50);

cout << "\n\t\t | BY CLASS
12 (COMPUTER SCIENCE) |"; Sleep(50);

cout << "\n\t\t |-----------
nn eh NN A |"; Sleep(50);

cout << "\n\n\n\n\n\n\n" << end]; Sleep(10);

cout << "\t\t | --------------------------------------------

wort rn nnn nn nanan nnn nnn n nnn nnn nnn nnenananan- "<< endl;
Sleep(10) ;
cout << "\t\t |
| " << endl; Sleep(10);
cout << "\t\t | ee koe RK
me +e ee Pe | " << endl; Sleep(10);
cout << "\t\t | * *
ie * 7 | " << endl; Sleep(10);
cout << "\t\t | * *
* * * * J "<< endl;
Sleep(10) ;
cout << "\t\t | * *
* * * * | " << endl;
Sleep(10) ; .
cout << "\t\t | *
- * * | " << endl; Sleep(10);
cout << "\t\t | ae .
koe \ * * | " << endl; Sleep(10);
cout << "\t\t | * .
* * | " << endl; Sleep(10);
cout << "\t\t | ek kK RK *
* keke eee | " << endl; Sleep(10);
cout << "\t\t | * *
x * | " << endl; Sleep(10);
cout << "\t\t | * *
* * | " << endl; Sleep(10);
cout << "\t\t | * 7
* * | " << endl; Sleep(10);
cout << "\t\t | * >
* * | " << endl; Sleep(10);
cout << "\t\t | * *
* * | " << endl; Sleep(10);
cout << "\t\t | * *
* * | " << endl; Sleep(10);
cout << "\t\t | * eR eR *
* woke ee | " << endl; Sleep(10);

cout << "\t\t |
| " << endl; Sleep(10);
cout << "\t\t |----------------- SPORTS~ == n= oor om n nm
MANAGEMENT--------------------- SYSTEM--=--=~---------- | "<< endl;
Sleep(3000);

int mainO

welcome();

u. homepage ();

//u.class_displayQ;
}