
#include <QCoreApplication>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>

using namespace std;



int main(int argc, char *argv[]) {
        QCoreApplication a(argc, argv);
        time_t rawtime;
        struct tm * timeinfo;

        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        re:
cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t _________________________________________________________________\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                          WELCOME TO                             |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                   Clinic MANAGEMENT SYSTEM                      |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|                                                                 |\n";
cout << "\t\t\t\t\t\t|________________Developed by Islam Abdelbakey____________________|\n\n\n";
system ("pause");
system ("cls");

char fname[20];
string pass ="";
char ch;
c:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  CLINIC MANAGEMENT SYSTEM \n\n";
cout<<"\t\t\t\t\t\t\t\t------------------------------";
cout<<"\n\t\t\t\t\t\t\t\t\t     LOGIN \n";
cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
cout << "\t\t\t\t\t\t\t\tEnter Password: ";
ch = _getch();
while(ch != 13){
   pass.push_back(ch);
   cout << '*';
   ch = _getch();
}
if(pass == "pass"){
   cout << "\n\n\t\t\t\t\t\t\t\tGOOOOOOOOOOOOOD! \a\n";
   system("PAUSE");
   system ("CLS");
}else{
   cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n\a";
   system("PAUSE");
   system("CLS");
goto c;
}

int i;
b:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  CLINIC MANAGEMENT SYSTEM \n\n";
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1  >> Add New Patient Record                        |\n";
cout<<"\t\t\t\t\t\t|             2  >> Add Diagnosis Information                     |\n";
cout<<"\t\t\t\t\t\t|             3  >> Full History of the Patient                   |\n";
cout<<"\t\t\t\t\t\t|             4  >> Information About the clinic                  |\n";
cout<<"\t\t\t\t\t\t|             5  >> Exit the Program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
a:cout<<"\t\t\t\t\t\tEnter your choice: \a";
cin>>i;
if(i>5||i<1){
    cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n\a";
    cout<<"\t\t\t\t\t\tTry again...........\n\n\a";
    goto a;
}



system("cls");

//displaying the information about the hospital........option 4
if(i==4)
{
    ifstream file;
    file.open("clinic.txt");
        if(!file)
        {
        cout<<"\n\n\tError while opening the file\n";goto b;
        }
        else
        {
            cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information about Clinic MANAGEMENT SYSTEM.............................\n\n";
            string line;
            while(file.good())
            {
            getline(file,line);
            cout<<line<<"\n\t\t";
            }
            cout<<"\n\n\t\t";
            system("pause");
            system("cls");
            goto b;
        }
}

if(i==1)
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  cout<<"\n\n\t\t\t\t\t\t\t\t"<< asctime (timeinfo);
  ofstream pat_file;
  char fname[20];
  cout<<"\n\n\n\n\tEnter the patient's file name : ";
  cin.ignore();
  gets(fname);
  pat_file.open(fname);
        if(!fname)
        {
        cout<<"\n\tError while opening the file\n";goto b;
        }
        else
        {
                        struct patient_info
                        {
                            char name[20];
                            char address[100];
                            char contact[10];
                            char age[5];
                            char sex[8];
                            char blood_gp[5];
                            char disease_past[50];
                            char id[15];
                            char date[100];

                        };

            patient_info ak;
            cout<<"\n\t********************************************************************\n";pat_file<<"\n\t********************************************************************\n\n";//fn1353 st
            cout<<"\n\tName : ";
            pat_file<<"\tName : ";
            gets(ak.name);
            pat_file<<ak.name<<"\n";

            cout<<"\n\tAge : ";
            pat_file<<"\tAge : ";
            gets(ak.age);
            pat_file<<ak.age<<"\n";

            cout<<"\n\tPatient ID : ";
            pat_file<<"\tPatient ID : ";
            gets(ak.id);
            pat_file<<ak.id<<"\n";

            cout<<"\n\tDate : ";
            pat_file<<"\tDate : ";
            gets(ak.date);
            pat_file<<ak.date<<"\n";

            cout<<"\n\tAddress : ";
            pat_file<<"\tAddress : ";
            gets(ak.address);
            pat_file<<ak.address<<"\n";

            cout<<"\n\tContact Number : ";
            pat_file<<"\tContact Number : ";
            gets(ak.contact);
            pat_file<<ak.contact<<"\n";

            cout<<"\n\tSex : ";
            pat_file<<"\tSex : ";
            gets(ak.sex);
            pat_file<<ak.sex<<"\n";

            cout<<"\n\tBlood Group : ";
            pat_file<<"\tBlood Group : ";
            gets(ak.blood_gp);
            pat_file<<ak.blood_gp<<"\n";

            cout<<"\n\t********************************************************************\n";pat_file<<"\n\t********************************************************************\n\n";//fn1353 st

            cout<<"\n\tAny Major disease suffered earlier : ";
            pat_file<<"\tAny Major disease suffered earlier : ";
            gets(ak.disease_past);
            pat_file<<ak.disease_past<<"\n";


            cout<<"\n\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
            pat_file<<"\n\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n\n";
            cout<<"\n\tInformation Saved Successfully\n";
            }
  system("pause");
  system("cls");
  goto b;

}

//Appending diagnosis information of patient datewise.................option 2
if(i==2)
{
    fstream pat_file;
    cout<<"\n\n\tEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
    pat_file.open(fname, ios::in);
        if(!pat_file)
        {
        cout<<"\n\tError while opening the file\n";goto b;
        }
        else
        {
            cout<<"\n\n\n\n\t\t\t\t........................................ Information about "<<fname<<" ........................................\n\n\n\n";
            string info;
            while(pat_file.good())
            {
            getline(pat_file,info);
            cout<<info<<"\n";
            }
            cout<<"\n";
            pat_file.close();
            pat_file.open(fname, ios::out | ios::app);
            cout<<"\n";
            cout<<"\tAdding more information in patient's file................on : ";
                            struct app
                            {
                                char Complain[500];
                                char diagnosis[500];
                                char medicine[500];
                                char addmission[30];
                                char ward[15];
                                char presentation[1000];
                                char date[100];
                                char past_histoy[1000];
                                char Family_history[1000];

                            };
            app add;

             cout<<"\n\tDate : "; 
             pat_file<<"\tdate : ";
             gets(add.date); 
             pat_file<<add.date<<"\n\n\n\n";
             cout<<"\n\t********************************************************************\n";
             pat_file<<"\n\t********************************************************************\n\n";

             cout<<"\n\tDiagnosis : "; 
             pat_file<<"\tDiagnosis : ";
             gets(add.diagnosis); 
             pat_file<<add.diagnosis<<"\n\n\n\n\n";
             cout<<"\n\t********************************************************************\n";
             pat_file<<"\n\t********************************************************************\n\n";

             cout<<"\n\tComplain : "; 
             pat_file<<"\tComplain : ";
             gets(add.Complain); 
             pat_file<<add.Complain<<"\n";
             cout<<"\n\t********************************************************************\n";
             pat_file<<"\n\t********************************************************************\n\n";

             cout<<"\n\tpresentation : ";
             pat_file<<"\tpresentation : ";
             gets(add.presentation);
             pat_file<<add.presentation<<"\n\n\n\n";
             cout<<"\n\t********************************************************************\n";
             pat_file<<"\n\t********************************************************************\n\n";


             cout<<"\n\tpast history : ";
             pat_file<<"\tpast history : ";
             gets(add.past_histoy); 
             pat_file<<add.past_histoy<<"\n\n\n\n";
             cout<<"\n\t********************************************************************\n";
             pat_file<<"\n\t********************************************************************\n\n";


             cout<<"\n\tFamily history : "; 
             pat_file<<"\tFamily history : ";
             gets(add.Family_history); 
             pat_file<<add.Family_history<<"\n\n\n\n";
             cout<<"\n\t********************************************************************\n";
             pat_file<<"\n\t********************************************************************\n\n";




            cout<<"\n\tMedicines : "; 
            pat_file<<"\tMedicines : ";
            gets(add.medicine); 
            pat_file<<add.medicine<<"\n\n\n\n";
            cout<<"\n\t********************************************************************\n";
            pat_file<<"\n\t********************************************************************\n\n";

            cout<<"\n\tprocedures required : "; 
            pat_file<<"\tAprocedures required : ";
            gets(add.addmission);
            pat_file<<add.addmission<<"\n";
            cout<<"\n\t********************************************************************\n";
            pat_file<<"\n\t********************************************************************\n\n";

            cout<<"\n\t\tother informations : ";
            pat_file<<"\t\tother informations: ";
            gets(add.ward);
            pat_file<<add.ward<<"\n";
            pat_file<<"\n\t*************************************************************************\n";
            cout<<"\n\n"<<add.ward<<"\t\t ward is alloted Successfully\n";
            pat_file.close();
            cout<<"\n\n";
            system("pause");
            system("cls");
            goto b;
        }
}

if(i==3)
{
    fstream pat_file;
    cout<<"\n\n\tEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
    pat_file.open(fname, ios::in);
        if(!pat_file)
        {
        cout<<"\n\tError while opening the file\n";goto b;
        }
        else
        {
            cout<<"\n\n\n\n\t\t\t\t........................................ Full Medical History of "<<fname<<" ........................................\n\n\n\n";
            string info;
            while(pat_file.good())
            {
            getline(pat_file,info);
            cout<<info<<"\n";
            }
            cout<<"\n";
        }
        system("pause");
        system("cls");
        goto b;
}

if(i==5)
{
system("cls");
cout << "\t\t\t\t\t\t _________________________________________________________________ \n";
       cout << "\t\t\t\t\t\t|                                           	                  |\n";
       cout << "\t\t\t\t\t\t|                                                                 |\n";
       cout << "\t\t\t\t\t\t|                      THANK YOU                                  |\n";
       cout << "\t\t\t\t\t\t|                                                                 |\n";
       cout << "\t\t\t\t\t\t|                                                                 |\n";
       cout << "\t\t\t\t\t\t|___________________Islam Abdelbakey______________________________|\n\n";

}
cout<<"\n";

}
