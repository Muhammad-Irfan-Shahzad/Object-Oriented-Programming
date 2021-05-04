#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class employee
{
	
int id;
string name;
int salary;

public:
	employee()
	{
	   id=0;
	   name="";
	   salary=0;
	}
	
	
	void setid()
  	{
  		cout<<"Enter the  employee  id :";
		cin>>id;
	}
	
	void setname()
	{
		cout<<"Enter the  employee name : ";
		cin>>name;
	}
   
    void setsalary()
	{
		cout<<"Enter the  employee salary : ";
		cin>>salary;	
	}	
  	
    int getid()
	{
		return id;
	}
	
    string getname()
	{
		return name;	
	} 
	
	int getsalary()
	{
		return salary;
	}
	
	
	
	
	void write_file()
	{
		
		ofstream infile;
		infile.open("employee.txt", ios::app);
		infile<<getid();
		infile<<endl;
		infile<<getname();
		infile<<endl;
		infile<<getsalary();
		infile<<endl;
		infile.close();
		

	}
	
	void read_data()
	{
		ifstream outfile;
        outfile.open("employee.txt");
        outfile>>id;
        outfile>>name;
        outfile>>salary;
        while(!outfile.eof())
        {  
            
        	cout<<"Employee Id is     :"<<id<<endl;
        	cout<<"Employee Name is   :"<<name<<endl;
        	cout<<"Employee Salary is :"<<salary<<endl;
        	outfile>>id;
            outfile>>name;
            outfile>>salary;
        	
		}
		outfile.close();

	}
	
	
	void search_record()
	{
		bool check=false;
		ifstream outfile;
        outfile.open("employee.txt");
        outfile>>id;
        outfile>>name;
        outfile>>salary;
        int ID;
        cout<<"Enter the employee id for you want to search record :";
        cin>>ID;
        while(!outfile.eof())
        {  
            if(ID==id)
            {
        		cout<<"Employee Id is     :"<<id<<endl;
        		cout<<"Employee Name is   :"<<name<<endl;
        		cout<<"Employee Salary is :"<<salary<<endl;
        		
            	check=true;
            	
            	
           }
                outfile>>id;
            	outfile>>name;
            	outfile>>salary;
        	
		}
		outfile.close();
		if(check=false)
		{
			cout<<"No record found on this employee id \n";
		}
	}
	
	
	
	



};
int main()
{
  employee obj;
 
  obj.setid();
  obj.setname();
  obj.setsalary();
  obj.write_file();
  	
  obj.read_data();
  obj.search_record();
}





