#include<conio.h>
#include<iostream.h>
class Student
{
	public:
	int per;
	char name[30];
	Student()
	{
		per=90;
	}
	void accept()
	{
		cout<<"enter name of student "<<endl;
		cin>>name;
		cout<<"enter per :"<<endl;
		cin>>per;
	}
	void display()
	{
		cout<<"name :"<<name<<endl;
		cout<<"per:"<<per<<endl;
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