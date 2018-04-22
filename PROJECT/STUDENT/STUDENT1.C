#include <stdio.h>
#include <conio.h>

#define F1 59
#define F2 60
#define F3 61
#define F4 62
#define F5 63
#define F6 64
#define F7 65

#define ESC 27
#define FILE "c:\\rajat\\files\\project\\student\\student.inf"
#define app "ab"

typedef struct{
	long id;
	char fname[40];
	char college[40];
	char cell[20];
	char course[30];
	float fees;
	float admfees;
	float balance;
}STUDENT;

STUDENT stu;

void newrecord();
void showall();
void search();
void update();
void delete();
void showbalance();
void menus();
void reports();

void newrecord()
{
	char ch;

	do{
		printf("\nEnter id");
		scanf("%ld",&stu.id);

		fflush(stdin);
		printf("\nEnter Nmae ");
		gets(stu.name);

		printf("\nEnter college name");
		gets(stu.college);

		printf("\nEnter course");
		gets(stu.course);

		fflush();
		printf("\nEnter fees");
		scanf("%.2f",&stu.fees);

		printf("\nEnter Admission fees");
		scanf("%.2f",&stu.admfees);


		printf("\nWant to enter new record <y.n>");
		ch = getche();

	}while(ch=='y' && ch=='Y');
}
void showall()
{

}
void search()
{

}
void update()
{

}
void delete()
{

}
void showbalance()
{

}
void menus()
{
	char choice;

	do
	{
	  printf("\nF1  New Record");
	  printf("\nF2  Show all");
	  printf("\nF3  Search");
	  printf("\nF4  Update");
	  printf("\nF5  Delete");
	  printf("\nF6  Show balance");
	  printf("\nF7  reports");

	  printf("\n\nEnter choice  : ");
	  choice = getche();
	  choice = getche();

	  switch()
	  {
		case F1:
			clrscr();
			newrecord();
			break;
		case F2:
			clrscr();
			void showall();
			break;

		case F3:
			clrscr();
			void search();
			break;
		case F4:
			clrscr();
			void update();
			break;
		case F5:
			clrscr();
			void delete();
			break;
		case F6:
			clrscr();
			void showbalance();
			break;

		case F7:
			clrscr();
			void reports();
			break;

	  }


	}while(choice!=ESC);
}
void reports()
{

}