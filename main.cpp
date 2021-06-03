#include<iostream.h>
#include<conio.h>
int menu();
void bus();
void cycle();
void riksha();
void showdata();
void Delete();

int nor=0,nob=0,noc=0,amount=0,count=0;
void main()
{
int b;
do
{
clrscr();
switch(menu())
{
case 1:
bus();
break;
case 2:
cycle();
break;
case 3:
riksha();
break;
case 4;
showdata();
break;
case 5:
Delete();
break;
default;
cout<<"DEAR SIR YOU HAVE SELECTED A WRONG CHOICE PLEASE ENTER AGAIN"<<endl;
}
cout<<"TO ADD MORE VEHICLE DETAILS PLEASE ENTER 0 ELSE ANY NUMBER FOR EXIT"<<endl;
cout<<"ENTER YOUR CHOICE";
cin>>b;
}
while(b==0);
cout<<"THANKYOU PLEASE VISIT AGAIN"<<endl;
getch();
}
int menu()
{
int ch;
cout<<"******************************************"<<endl;
cout<<"PRESS 1 FOR BUS CHARGES IS 100 INR"<<endl;
cout<<"PRESS 2 FOR CYCLE CHARGES IS 70 INR"<<endl;
cout<<"PRESS 3 FOR RIKSHA CHARGES IS 50 INR"<<endl;
cout<<"PRESS 5 TO SEE THE ENTER RECORD"<<endl;
cout<<"PRESS 6 FOR EXIT "<<endl;
cout<<"******************************************"<<endl;
cout<<"PLEASE ENTER YOUR CHOICE=";
cin>>ch;
}
return ch;
}
void bus()
{
nob++;
amount=amount+100;
count++;
}
void cycle()
{
noc++;
amount=amount+70;
conut++;
}
void riksha()
{
nor++;
amount=amount+50;
count++;
}
void showdata()
{
cout<<"******************************************"<<endl;
cout<<"TOTAL NUMBER OF BUS STANDING IN PARKING."<<nob<<endl;
cout<<"TOTAL NUMBER OF CYCLE STANDING IN PARKING."<<noc<<endl;
cout<<"TOTAL NUMBER OF RIKSHA STANDING IN PARKING."<<nor<<endl;
cout<<"TOTAL NUMBER OF VEHICLES STANDING IN PARKING."<<count<<endl;
cout<<"TOTAL COLLECTION OF PARKING AMOUNT."<<amount<<endl;
cout<<"******************************************"<<endl;
}
void Delete()
{
nob=0;
noc=0;
nor=0;
amount=0;
count=0;
}
