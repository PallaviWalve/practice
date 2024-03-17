#include<iostream>
using namespace std;

class student
{ 
     
	int roll_no;
	char name[29];
	float total;
	
	
	public:
	
	void get_info( )
	{
		cout<<"enter the roll_no\n";
		cin>>roll_no;
		cout<<"\n enter the name";
		cin>>name;
		cout<<"enter the total";
		cin>>total;
	}
	void show_info()
	{
		cout<<"\n roll_no"<<roll_no<<"\n name"<<name<<"\n total"<<total;
	}
	
};
main()
{
	
	
	student s1,s2,s3;
	cout<<"enter the details of student\n";
	//int sum=s1.display()+s2.display()+s3.dispaly();
	
	s1.get_info();	
	s2.get_info();
	s3.get_info();
	s3.show_info();
    s1.show_info();
    s2.show_info();
    s3.show_info();
    
}