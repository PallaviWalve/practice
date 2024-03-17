#include<iostream>
using namespace std;
class fd

{
	
	int fd_no,no_year;
	char name[60];
	int pri_amount;
	float rate_in ,si,amount;
	 
	 public:
	 	void get_info()
	 	{
	 		cout<<"\nenter the fd no";
	 		cin>>fd_no;
	 		cout<<"\nenter the name\n";
	 		cin>>name;
	 		cout<<"\n enter the pricipal amount rate";
	 		cin>>pri_amount;
	 		cout<<"\n enter the rate intrest";
	 		cin>>rate_in;
	 		cout<<"\n enter the number of years";
	 		cin>>no_year;
	 		si=pri_amount*rate_in*no_year/100;
	 		amount=pri_amount+si;
	 	
		 }
		 void show_info()
		 {
		 	cout<<"\n fd no= "<<fd_no<<"\n  name= "<<name<<"\n pricipal amount  rate= "<<pri_amount<<" \n the rate intrest= "<<rate_in<<"\n years= "<<no_year;
		 	cout<<"\n simple intrest= "<<si<<"\n amount= "<<amount;
		 }
		 
};
main()
{
	fd p1,p2;
	

	p1.get_info();
	p1.show_info();
	//p2.get_info();
//	p2.show_info();
	
	
}