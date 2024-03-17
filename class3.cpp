#include<iostream>
using namespace std;
class product
{
	int pro_id;
	char pro_name[30];
	int rate_pro ;
	 int qua_pro;
	 float rate,discount,net,amount;
	 
	 public:
	 	void get_info()
	 	{
	 		cout<<"enter the pro_id\n";
	 		cin>>pro_id;`
	 		cout<<"enter the product name\n";
	 		cin>>pro_name;
	 		cout<<"\n enter the product rate\n";
	 		cin>>rate_pro;
	 		cout<<"\n enter the product quantity";
	 		cin>>qua_pro;
	 		amount=rate_pro*qua_pro;
	 		discount=amount*10/100;
	 		net=amount-discount;
	 		
		 }
		 void shoe_info()
		 {
		 	cout<<"\n prodcut id"<<pro_id<<"\n product name"<<pro_name<<"product rate"<<rate_pro<<"product quantity"<<qua_pro;
		 	cout<<"\n amount is"<<amount<<"\n discount id"<<discount <<"\n net"<<net;
		 }
		 
};
main()
{
	product p1,p2;
	
	p1.get_info();
	p2.get_info();
	
}