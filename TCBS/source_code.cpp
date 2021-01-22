#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;

struct customer
{
	int id;
	string name;
	int phone_num;
	int payment;
	string date;
};
void input(customer *c)
{
    
	int i=0;
	
       ofstream file;
  
	
		cout<<"******TV CABLE'S CUSTOMERS BILL DETAIL******* "<<endl;
		cout<<"=============================================  "<<endl;
		
		cout<<"Enter Customer's ID: "<<endl;
		cin >> c->id;
	    cout<<"Enter Customer's Name: "<<endl;
	    cin>>c->name;
	    cout<<"Enter Customer's Phone Number: "<<endl;
	    cin>>c->phone_num;
	    cout<<endl;
	    int ch;
	    cout<<"Enter 1 if you have pending \n";
	    cout<<"Enter 2 if you have no pending \n";
	    cin>>ch;
	    if(ch==1)
	    {    int month;
		     cout<<"Enter the number of month you have pending \n";
		     cin>>month;
	         c->payment=200*month;
			 	
		}
		else if(ch==2)
		{
			c->payment=200;
		}
	    cout<<"Enter Date : "<<endl;
	    
	    cin>>c->date;
	    
		file.open("customers.txt", ios::app);
	    
	    file<<" "<<c->id<<endl;
        file<<" "<<c->name<<endl;
        file<<" "<<c->phone_num<<endl;
		file<<" "<<c->payment<<endl;
        file<<" "<<c->date<<endl;
        
	   file.close();
    
}

void view_list()
{
	string line;
	char line1;
  ifstream myfile ("customers.txt");
  cout<<"******TV CABLE'S CUSTOMERS BILL DETAIL******* "<<endl;
  if (myfile.is_open())
  {
    while (myfile.get(line1))
    {
      getline (myfile,line);
	  cout <<"ID is            :"<<line << "\n";
      getline (myfile,line);
      cout <<"Name is          :"<<line << "\n";
      getline (myfile,line);
      cout <<"Phone Number is :"<<line << "\n";
      getline (myfile,line);
      cout <<"Payment is :"<<line << "\n";
      getline (myfile,line);
      cout <<"Date is :"<<line << "\n";
    }
    myfile.close();
  }
	
	
}
void search()
{
	string id;
	cout<<"Enter the Customer ID  For Particulr Customer Record \n";
	cin>>id;
	string line,b;
	char line1;
  ifstream myfile ("customers.txt");
  if (myfile.is_open())
  {
  
  while (myfile.get(line1))
  {
  	getline(myfile,line);
  	
  	if(line==id)
  	{
  	  cout <<"ID is            :"<<line << "\n";
      getline (myfile,line);
      cout <<"Name is          :"<<line << "\n";
      getline (myfile,line);
      cout <<"Phone Number is :"<<line << "\n";
      getline (myfile,line);
      cout <<"Payment is :"<<line << "\n";
      getline (myfile,line);
      cout <<"Date is :"<<line << "\n";
      return ;
  		
	}
  
  }
  
  
  myfile.close();
}
  cout<<"NO record found on this ID \n";
}


void Payment_record()
{
	string id;
	cout<<"Enter the Customer ID  For Particulr Customer Payment Record \n";
	cin>>id;
	string line,b;
	char line1;
  ifstream myfile ("customers.txt");
  if (myfile.is_open())
  {
  
  while (myfile.get(line1))
  {
  	getline(myfile,line);
  	
  	if(line==id)
  	{
  	  
      getline (myfile,line);
      getline (myfile,line);
      getline (myfile,line);
      cout <<"Payment is :"<<line << "\n";
      getline (myfile,line);
      
      return ;
  		
	}
  
  }
  
  
  myfile.close();
}
cout<<"NO record found on this ID \n";
	
}


void moveFiles(){
    cout<<"FIles are moving..."<<endl;
    ifstream abc1;
    abc1.open("abc1.txt",ios::in);
    ofstream customers;
    customers.open("customers.txt",ios::trunc);
    string abc1_data="";
    while(getline(abc1,abc1_data)) {
        customers << abc1_data << endl;
    }
    abc1.close();
    customers.close();
    ofstream abc11;
    abc11.open("abc1.txt",ios::trunc);
    abc11.close();
    int status=0;
    status = remove("abc1.txt");
}

void deleteRecord()
{
    ofstream newfile;
    newfile.open("abc1.txt", ios::app);
    string custumer_name;
    ifstream ifile;
    ifile.open("customers.txt");
    string d="";
    string custumer_id;
    cout<<"Enter Custumer ID= :";cin>>custumer_id;
    while (getline (ifile, d)) {
        char*data=new char[d.length()];
        strcpy (data, d.c_str());
        char *token = strtok(data, ",");
        if (token!=custumer_id){
            newfile<<d<<endl;
            cout<<"-------RECORD DELETED SUCCESSFULLY---------"<<endl;
        }
        else continue;
    }

     moveFiles();

    ifile.close();

}


main()
{
	int size=0;
customer obj;
int choice;
int count;

do{
  cout<<"Enter 1 For new Record \n";
  cout<<"Enter 2 For  search Particular Customer Record \n";
  cout<<"Enter 3 For view all list \n";
  cout<<"Enter 4 For search Particular Customer Payment Record \n";
  cout<<"Enter 5 For Delete Particular Customer Record \n";
  cout<<"Enter 6 For exit \n";
  cin>>choice;	
   if(choice==1)
   {
   	input(&obj);
   }
   else if(choice==2)
   {
   	  search();
   }  	
	else if(choice==3)
	{
	    view_list();	
	}
	else if(choice==4)
	{
		Payment_record();
	}
	else if(choice==5)
	{
		deleteRecord();
	}
	
}while(choice!=6);



}
