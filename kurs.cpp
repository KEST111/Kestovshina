// Курсовой проект.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<fstream>

using namespace std;
struct LIFE{  //Структура базы данных 
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
int i,n; //введение глобальных переменных
LIFE book[25]; 
void menu(void){ //МЕНЮ
printf(" Меню \n");
printf("1.Добавление имени жителя;\n");
printf("2.Cортировка по имени;\n");
printf("3.Ввод данных в файл;\n");
printf("4.Вывод БД на экран;\n");
printf("5.Редактирование имени жителя;\n");
printf("6.Поиск жителя по имени;\n");
printf("7.Удаление жителя по имени;\n");
printf("0.Выход;\n");}


	
	  LIFE t;
		
		void vvod(void){  //процедура ввода
			ofstream B; // описываем переменную типа ofstream
			cout<<"Введите кол-во записей: "<<endl;
            cin>>n; 
			B.open("www.txt", ios::out); //открываем файл для записи
			for(i=0;i<n;i++){
			cout<<"ФИО: "<<endl;
			cin>>book[i].name;
			B<<book[i].name<<endl;
		    cout<<"Дата рождения:"<<endl;
		    cin>>book[i].bday;
			B<<book[i].bday<<endl;
			cout<<"Адрес: "<<endl;
			cin>>book[i].adress;
			B<<book[i].adress<<endl;
	        cout<<"Место рождения: "<<endl;
		    cin>>book[i].from;
			B<<book[i].from<<endl;
            cout<<"ИНН: "<<endl;
		    cin>>book[i].inn;
			B<<book[i].inn<<endl;
			cout<<"Страховой номер: "<<endl;
			cin>>book[i].snumber;
			B<<book[i].snumber<<endl;
			cout<<"Телефон: "<<endl;
			cin>>book[i].phone;
			B<<book[i].phone<<endl;
			cout<<"Семейное положение: "<<endl;
			cin>>book[i].status;
			B<<book[i].status<<endl;
			cout<<" Место работы: "<<endl;
			cin>>book[i].work;
			B<<book[i].work<<endl;
            cout<<"Номер изб.участка: "<<endl;
			cin>>book[i].izbnumber;
			B<<book[i].izbnumber<<endl;
		}
	
		B.close();  //закрытие файла
		}
	void vivod(void){ //вывод БД
		ifstream B; // описываем переменную типа ifstream
			B.open("www.txt", ios::in); //открываем файл для чтения
			
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
	   cout<<"  Банк данных жителей города :  "<<endl;		
	for(int i=0;i<n-1;i++){
        cout <<setw(10)  <<" Имя                         "<<book[i].name<<endl;  
        cout <<setw(10)  <<" Дата рождения               "<<book[i].bday<<endl;
		cout << setw(10) <<" Адрес                       "<<book[i].adress<<endl;
		cout << setw(10) <<" Место рождения              "<<book[i].from<<endl;
		cout << setw(10) <<" ИНН                         "<<book[i].inn<<endl;
		cout << setw(10) <<" Страховой номер             "<<book[i].snumber<<endl;
		cout << setw(10) <<" Телефон                     "<<book[i].phone<<endl;
		cout << setw(10) <<" Семейное положение          "<<book[i].status<<endl;
		cout << setw(10) <<" Место работы                "<<book[i].work<<endl;
		cout << setw(10) <<" Номер изб. участка          "<<book[i].izbnumber<<endl;
		cout<<endl;
			B.close();
	
		}}

		void dobav(int n) // процежура добавления
{  
		ofstream B;
			B.open("www.txt", ios::app); //открываем файл для дозаписи 
			for(int i=n;i<(n+1);i++){
		    cout<<"ФИО: "<<endl;
			cin>>book[i].name;
			B<<book[i].name<<endl;
		    cout<<"Дата рождения:"<<endl;
		    cin>>book[i].bday;
			B<<book[i].bday<<endl;
			cout<<"Адрес: "<<endl;
			cin>>book[i].adress;
			B<<book[i].adress<<endl;
	        cout<<"Место рождения: "<<endl;
		    cin>>book[i].from;
			B<<book[i].from<<endl;
            cout<<"ИНН: "<<endl;
		    cin>>book[i].inn;
			B<<book[i].inn<<endl;
			cout<<"Страховой номер: "<<endl;
			cin>>book[i].snumber;
			B<<book[i].snumber<<endl;
			cout<<"Телефон: "<<endl;
			cin>>book[i].phone;
			B<<book[i].phone<<endl;
			cout<<"Семейное положение: "<<endl;
			cin>>book[i].status;
			B<<book[i].status<<endl;
			cout<<" Место работы: "<<endl;
			cin>>book[i].work;
			B<<book[i].work<<endl;
            cout<<"Номер изб.участка: "<<endl;
			cin>>book[i].izbnumber;
			B<<book[i].izbnumber<<endl;
			}
			B.close();
   }
         void ud(void) //Процедура удаление
{  
  cout<<"Введите имя удаляемого жителя"<<endl;
  int u=0; char ud[50]; int j=0;
  cin>>ud;
  ofstream B;
  B.open("www.txt",ios::out);  //Открытие файла для перезаписи
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
  for(int j=u;j<n;j++){    //"Удаление" жителя, замена последующим
  book[j]=book[j+1];}
  n--;
  for(j=u;j<n;j++){      //Запись остатка
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


void sort(void){//Сортировка по имени 
ifstream B;
B.open("www.txt", ios::in);//открытие файла
do{
for (int i=0;i<n;i++){ //цикл считывания инфы из файла//
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
cout<<"Сортировка по имени"<<endl;
for (int i = 0; i<n - 1; i++){
for(int j=i+1;j<n;j++)
if (strcmp(book[i].name, book[j].name)>0){
 t = book[i];
book[i] = book[j];
book[j] = t;
}
}
cout<<"Отсортированный вывод"<<endl;
for (int i=0;i<n;i++){
cout<<book[i].name<<endl;
}
B.close();
}

void izm(void){     //процедура изменения
			char s[25];
			 int n=5;
			fstream B;
B.open("www.txt", ios::in); // открытие файла для чтения
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
cout<<" Изменение имени: "<<endl; 
cin>>s;
for (int i=0;i<n;i++){
if(!strcmp(book[i].name,s)){
cout<<" Введите новое имя: "<<endl;
cin>>book[i].name;
}
}
B.open("www.txt", ios::out); //вводим данные для изменения
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
		

void poisk(void){ //процедура поиска по выбранному критерию//
char d[15];
int n=5;
bool state;
ifstream B;
B.open("www.txt", ios::in); //открытие файла для считывания информации//
do{
for (int i=0;i<n;i++){ //цикл считывания инфы из файла//
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
cout<<" Поиск жителя по имени "<<endl;
cin>>d; //искомое значение, вводим с клавиатуры//
for (int i=0;i<n;i++){
if(!strcmp(d,"exit")) return; //поиск будет длиться, пока не введем "exit" для выхода//
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
int main() //Основная программа из который происходит выбор пункта меню
{setlocale(LC_ALL,"rus"); 
system("color f0");
int r;
 for (;;) {
menu();
cout<<"Введите пункт меню"<<endl;
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

