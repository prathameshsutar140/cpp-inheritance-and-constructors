#include<conio.h>
#include<iostream.h>
#include<string.h>
class Student
{       public:

	int rollno;
	char name[30];
	char course[30];
	student()
	{
	       strcpy (course, "computer engineering");
	}

	void accept()
	{
		cout<<"enter rollno :"<<endl;
		cin>>rollno;
		cout<<"enter name:"<<endl;
		cin>>name;
	}
	void display()
	{
		cout<<"name is :"<<name<<endl;
		cout<<"rollno is :"<<rollno <<endl;
		cout<<"course is :"<<course<<endl;
	}
};
void main()
{
	Student s;
	s.accept();
	s.display();
	getch();
	clrscr();
}
