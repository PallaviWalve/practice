#include<iostream>
using namespace std;
class employee
{ public:
	int emp_no;
	char emp_name;
	float emp_sal;
	//public:
	void get_info()
	{
		cout<<"enter the emp_no\n";
		cin>>emp_no;
		cout<<"enter the name\n";
		cin>>emp_name;
		cout<<"enter the salary\n";
		cin>>emp_sal;
	}
	
	void show_info()
	{
		cout<<"\n the no of employee"<<emp_no<<"\n the name of employee"<<emp_name<<"\n enter the salary of employee"<<emp_sal;
	}
	int sum()
	{
		return (emp_sal);
	}
	
};

main()
{
	employee e1,e2,e3;
	int total;
	e1.get_info();
	e2.get_info();
	e3.get_info();
	total=e1.sum()+e2.sum()+e3.sum();
	cout<<"the total of all employee\n"<<total;
}