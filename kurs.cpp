// �������� ������.cpp: ���������� ����� ����� ��� ����������� ����������.
//


#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<fstream>

using namespace std;
struct LIFE{  //��������� ���� ������ 
	 char name[50];
	 char bday[25];
	 char adress[50];
	 char from[50];
	 char inn[15];
	 char snumber[25];
	 char phone[20];
	 char status[25];
	 char work[30];
	 char izbnumber[10];
	};
int i,n; //�������� ���������� ����������
LIFE book[25]; 
void menu(void){ //����
printf(" ���� \n");
printf("1.���������� ����� ������;\n");
printf("2.C��������� �� �����;\n");
printf("3.���� ������ � ����;\n");
printf("4.����� �� �� �����;\n");
printf("5.�������������� ����� ������;\n");
printf("6.����� ������ �� �����;\n");
printf("7.�������� ������ �� �����;\n");
printf("0.�����;\n");}


	
	  LIFE t;
		
		void vvod(void){  //��������� �����
			ofstream B; // ��������� ���������� ���� ofstream
			cout<<"������� ���-�� �������: "<<endl;
            cin>>n; 
			B.open("www.txt", ios::out); //��������� ���� ��� ������
			for(i=0;i<n;i++){
			cout<<"���: "<<endl;
			cin>>book[i].name;
			B<<book[i].name<<endl;
		    cout<<"���� ��������:"<<endl;
		    cin>>book[i].bday;
			B<<book[i].bday<<endl;
			cout<<"�����: "<<endl;
			cin>>book[i].adress;
			B<<book[i].adress<<endl;
	        cout<<"����� ��������: "<<endl;
		    cin>>book[i].from;
			B<<book[i].from<<endl;
            cout<<"���: "<<endl;
		    cin>>book[i].inn;
			B<<book[i].inn<<endl;
			cout<<"��������� �����: "<<endl;
			cin>>book[i].snumber;
			B<<book[i].snumber<<endl;
			cout<<"�������: "<<endl;
			cin>>book[i].phone;
			B<<book[i].phone<<endl;
			cout<<"�������� ���������: "<<endl;
			cin>>book[i].status;
			B<<book[i].status<<endl;
			cout<<" ����� ������: "<<endl;
			cin>>book[i].work;
			B<<book[i].work<<endl;
            cout<<"����� ���.�������: "<<endl;
			cin>>book[i].izbnumber;
			B<<book[i].izbnumber<<endl;
		}
	
		B.close();  //�������� �����
		}
	void vivod(void){ //����� ��
		ifstream B; // ��������� ���������� ���� ifstream
			B.open("www.txt", ios::in); //��������� ���� ��� ������
			
	int i=0;
			do
			{
				B>>book[i].name;
		        B>>book[i].bday;
				B>>book[i].adress;
				B>>book[i].from;
				B>>book[i].inn;
				B>>book[i].snumber;
				B>>book[i].phone;
				B>>book[i].status;
				B>>book[i].work;
				B>>book[i].izbnumber;i++;}
			while(!B.eof());
			
	n=i;
	   cout<<"  ���� ������ ������� ������ :  "<<endl;		
	for(int i=0;i<n-1;i++){
        cout <<setw(10)  <<" ���                         "<<book[i].name<<endl;  
        cout <<setw(10)  <<" ���� ��������               "<<book[i].bday<<endl;
		cout << setw(10) <<" �����                       "<<book[i].adress<<endl;
		cout << setw(10) <<" ����� ��������              "<<book[i].from<<endl;
		cout << setw(10) <<" ���                         "<<book[i].inn<<endl;
		cout << setw(10) <<" ��������� �����             "<<book[i].snumber<<endl;
		cout << setw(10) <<" �������                     "<<book[i].phone<<endl;
		cout << setw(10) <<" �������� ���������          "<<book[i].status<<endl;
		cout << setw(10) <<" ����� ������                "<<book[i].work<<endl;
		cout << setw(10) <<" ����� ���. �������          "<<book[i].izbnumber<<endl;
		cout<<endl;
			B.close();
	
		}}

		void dobav(int n) // ��������� ����������
{  
		ofstream B;
			B.open("www.txt", ios::app); //��������� ���� ��� �������� 
			for(int i=n;i<(n+1);i++){
		    cout<<"���: "<<endl;
			cin>>book[i].name;
			B<<book[i].name<<endl;
		    cout<<"���� ��������:"<<endl;
		    cin>>book[i].bday;
			B<<book[i].bday<<endl;
			cout<<"�����: "<<endl;
			cin>>book[i].adress;
			B<<book[i].adress<<endl;
	        cout<<"����� ��������: "<<endl;
		    cin>>book[i].from;
			B<<book[i].from<<endl;
            cout<<"���: "<<endl;
		    cin>>book[i].inn;
			B<<book[i].inn<<endl;
			cout<<"��������� �����: "<<endl;
			cin>>book[i].snumber;
			B<<book[i].snumber<<endl;
			cout<<"�������: "<<endl;
			cin>>book[i].phone;
			B<<book[i].phone<<endl;
			cout<<"�������� ���������: "<<endl;
			cin>>book[i].status;
			B<<book[i].status<<endl;
			cout<<" ����� ������: "<<endl;
			cin>>book[i].work;
			B<<book[i].work<<endl;
            cout<<"����� ���.�������: "<<endl;
			cin>>book[i].izbnumber;
			B<<book[i].izbnumber<<endl;
			}
			B.close();
   }
         void ud(void) //��������� ��������
{  
  cout<<"������� ��� ���������� ������"<<endl;
  int u=0; char ud[50]; int j=0;
  cin>>ud;
  ofstream B;
  B.open("www.txt",ios::out);  //�������� ����� ��� ����������
  for(int j=0;j<n;j++)
{ if(!strcmp(book[j].name,ud)) {u=j; break;}
  else{
		B<<book[j].name<<endl;
		B<<book[j].bday<<endl;
		B<<book[j].adress<<endl;
		B<<book[j].from<<endl;
		B<<book[j].inn<<endl;
		B<<book[j].snumber<<endl;
		B<<book[j].phone<<endl;
		B<<book[j].status<<endl;
		B<<book[j].work<<endl;
		B<<book[j].izbnumber<<endl;
	B<<endl;
  }}
  for(int j=u;j<n;j++){    //"��������" ������, ������ �����������
  book[j]=book[j+1];}
  n--;
  for(j=u;j<n;j++){      //������ �������
	  B <<book[j].name<<endl;
       B   <<book[j].bday<<endl;
		B  <<book[j].adress<<endl;
		B  <<book[j].from<<endl;
		B  <<book[j].inn<<endl;
		B  <<book[j].snumber<<endl;
		B <<book[j].phone<<endl;
		B <<book[j].status<<endl;
		B <<book[j].work<<endl;
		B <<book[j].izbnumber<<endl;
		B<<endl;}
  	B.close();
}


void sort(void){//���������� �� ����� 
ifstream B;
B.open("www.txt", ios::in);//�������� �����
do{
for (int i=0;i<n;i++){ //���� ���������� ���� �� �����//
                B>>book[i].name;
		        B>>book[i].bday;
				B>>book[i].adress;
				B>>book[i].from;
				B>>book[i].inn;
				B>>book[i].snumber;
				B>>book[i].phone;
				B>>book[i].status;
				B>>book[i].work;
				B>>book[i].izbnumber;
}
}
while(!B.eof());
cout<<"���������� �� �����"<<endl;
for (int i = 0; i<n - 1; i++){
for(int j=i+1;j<n;j++)
if (strcmp(book[i].name, book[j].name)>0){
 t = book[i];
book[i] = book[j];
book[j] = t;
}
}
cout<<"��������������� �����"<<endl;
for (int i=0;i<n;i++){
cout<<book[i].name<<endl;
}
B.close();
}

void izm(void){     //��������� ���������
			char s[25];
			 int n=5;
			fstream B;
B.open("www.txt", ios::in); // �������� ����� ��� ������
for (int i=0;i<n;i++){
                B>>book[i].name;
		        B>>book[i].bday;
				B>>book[i].adress;
				B>>book[i].from;
				B>>book[i].inn;
				B>>book[i].snumber;
				B>>book[i].phone;
				B>>book[i].status;
				B>>book[i].work;
				B>>book[i].izbnumber;
}
B.close();
cout<<" ��������� �����: "<<endl; 
cin>>s;
for (int i=0;i<n;i++){
if(!strcmp(book[i].name,s)){
cout<<" ������� ����� ���: "<<endl;
cin>>book[i].name;
}
}
B.open("www.txt", ios::out); //������ ������ ��� ���������
for (int i=0;i<n;i++){
                B<<book[i].name<<endl;
		        B<<book[i].bday<<endl;
				B<<book[i].adress<<endl;
				B<<book[i].from<<endl;
				B<<book[i].inn<<endl;
				B<<book[i].snumber<<endl;
				B<<book[i].phone<<endl;
				B<<book[i].status<<endl;
				B<<book[i].work<<endl;
				B<<book[i].izbnumber<<endl;
}
B.close();
}
		

void poisk(void){ //��������� ������ �� ���������� ��������//
char d[15];
int n=5;
bool state;
ifstream B;
B.open("www.txt", ios::in); //�������� ����� ��� ���������� ����������//
do{
for (int i=0;i<n;i++){ //���� ���������� ���� �� �����//
                B>>book[i].name;
		        B>>book[i].bday;
				B>>book[i].adress;
				B>>book[i].from;
				B>>book[i].inn;
				B>>book[i].snumber;
				B>>book[i].phone;
				B>>book[i].status;
				B>>book[i].work;
				B>>book[i].izbnumber;
}
}
while(!B.eof());
do{
cout<<endl;
cout<<" ����� ������ �� ����� "<<endl;
cin>>d; //������� ��������, ������ � ����������//
for (int i=0;i<n;i++){
if(!strcmp(d,"exit")) return; //����� ����� �������, ���� �� ������ "exit" ��� ������//
state=true;
if(!strcmp(book[i].name,d)){
state=false;
        cout <<setw(10) <<book[i].name<<endl;
        cout <<setw(10)  <<book[i].bday<<endl;
		cout << setw(10) <<book[i].adress<<endl;
		cout << setw(10) <<book[i].from<<endl;
		cout << setw(10) <<book[i].inn<<endl;
		cout << setw(10) <<book[i].snumber<<endl;
		cout << setw(10) <<book[i].phone<<endl;
		cout << setw(10) <<book[i].status<<endl;
		cout << setw(10)<<book[i].work<<endl;
		cout << setw(10)<<book[i].izbnumber<<endl;
        cout<<endl;
}
}
}
while(true);
B.close();
}
int main() //�������� ��������� �� ������� ���������� ����� ������ ����
{setlocale(LC_ALL,"rus"); 
system("color f0");
int r;
 for (;;) {
menu();
cout<<"������� ����� ����"<<endl;
 cin>>r;
switch(r){
case(1):dobav(n); break;
case(2):sort() ;break;
case(3):vvod() ;break;
case(4):vivod() ;break;
case(5):izm() ;break;
case(6):poisk() ;break;
case(7):ud() ;break;
case(0): return 0;
}} 
system("pause");
return 0;}

