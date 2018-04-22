#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<string.h>

#define F1 59
#define F2 60
#define F3 61
#define ESC 27

typedef struct
{
	char username[40];
	char password[40];

}LOGIN;

LOGIN login;

char file1[]="C:\\rajat\\files\\project\\student\\login1.inf";  //security..
char file2[]="C:\\rajat\\files\\project\\student\\login2.inf";

FILE *fp;
FILE *flogin;

char app[]="ab";
char read[]="rb";

void createUser();
void loginUser();
void showUser();
void success();
void menu();


void main()
{
    clrscr();
    menu();
    getch();

}
void menu()
{
	char ch;
	char again;

	do
	{
		clrscr();
		printf("\tF1.  Create User");
		printf("\n\tF2.  Login      ");
		printf("\n\tF3.  Show User  ");
		printf("\n\n\t Enter Your Choice..");

		ch=getch();
		ch=getch();

		switch(ch)
		{
		case F1:
			clrscr();
			createUser();
			break;

		case F2:
			clrscr();
			loginUser();
			break;

		case F3:
			clrscr();
			showUser();
			break;
		}
		clrscr();
		printf("\n\nwant see menu again ?  <y.n>");
		again=getch();
		printf("\n\npress again");

	}while(again=='y'||again=='Y');
}
void createUser()
{
	char ch;
	char confirm;
	char new;
	int index=0;
	int exit=0;

	fp=fopen(file1,app);
	flogin = fopen(file2,app);

	if(fp!=NULL && flogin!=NULL)
	{
			clrscr();
			printf("\n\t\tUser Name     :");
			gets(login.username);
			printf("\n\t\tPassword      :");

			//loop for password
			while(exit!=13)
			{
				ch = getch();
				exit = ch;
				login.password[index] = ch;
				printf("*");
				index++;
			}

			printf("\n\n\n\t Do you want to save record <y/n>.....");
			confirm= getche();

			if(confirm == 'y' || confirm == 'Y')
			{
				clrscr();
				fwrite(&login,sizeof(LOGIN),1,fp);
				fwrite(&login,sizeof(LOGIN),1,flogin);
				printf("Record saved successfully.....");
				printf("\n\nPress any key to continue");
			}

			fclose(fp);
			fclose(flogin);
	}//end of if
	else
	{
		perror("No such files");
	}
}
void loginUser()
{
	char ch;
	char again;
	char user[40];
	char pass[40];
	int index=0;
	int exit=0;

	clrscr();

		fp = fopen(file1,read);
		if(fp != NULL)
		{

			printf("\n\t\tUser Name     :");
			gets(user);

			printf("\n\t\tPassword      :");
			//gets(pass);
			while(exit!=13)
			{
				ch = getch();
				exit = ch;
				if(exit!=13)
				{
					pass[index] = ch;
					printf("*");
					index++;
				}


			}
			pass[index--];

			fread(&login,sizeof(LOGIN),1,fp);

			while(!feof(fp))
			{
				if((strcmpi(user,login.username))==0 && (strcmpi(pass,login.password))==0)
				{
					success();
				}

				fread(&login,sizeof(LOGIN),1,fp);
			}
			printf("\n\nEntered details are incorrect..");
			printf("\nDo you want to try again...<y.n>");
			again = getche();
			if(again == 'y' || again == 'Y')
			{
				loginUser();
			}

		}
		else
		{
			perror("File not found");
		}

}
void success()
{
	int d = DETECT;
	int m;
	int x;
	char h[40];
	initgraph(&d,&m,"C:\\turboc3\\bgi");

	sprintf(h,"%c",3);

	outtextxy(200,200,"L o g i n     S u c c e s s f u l l");
	outtextxy(300,350,"Loading");

	for(x=0;x<10;x++)
	{
	    outtextxy(300+x,357,h);
	    delay(100);
	}

	closegraph();
}

void showUser()
{


	int row = 8;
	int x;

	clrscr();

	fp = fopen(file1,read);

	if(fp != NULL)
	{
		fread(&login,sizeof(LOGIN),1,fp);

		gotoxy(1,6);
		printf("username");

		//gotoxy(30,6);
		//printf("");

		gotoxy(60,6);
		printf("password");

		for(x=1;x<80; x++)
		{

			gotoxy(x,5);
			printf("%c",196);

			gotoxy(x,7);
			printf("%c",196);

			gotoxy(x,22);
			printf("%c",196);

			gotoxy(x,24);
			printf("%c",196);

			delay(10);

		}

		gotoxy(2,21);
		printf("Project powered by");

		gotoxy(30,23);
		printf("Amul Macho - Bade aram  se");

		while(!feof(fp))
		{
			gotoxy(1,row);
			printf("%s",login.username);

			//gotoxy(30,row);
		       //printf("%s",login.password);

			gotoxy(60,row);
			printf("%s",login.password);

			fread(&login,sizeof(LOGIN),1,fp);

			row++;
			delay(1000);

		}

		fclose(fp);
	}
	getch();
}

