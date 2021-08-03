#include<iostream>
#include<string>
using namespace std;
struct Employee{
	int ID;
	string Designation;
	string Department;
	int salary;
};
void inputdata(Employee *b)
{
	cout<<"Enter the ID \n";
	cin>>b->ID;
	cout<<"Enter the Desination \n";
	cin>>b->Designation;
	cout<<"Enter the Department \n";
	cin>>b->Department;
	cout<<"Enter the Salary \n";
	cin>>b->salary;
	
}
void display_any_record(Employee ar[],int key,int size)
{   
  bool check=false;
	for(int i=0;i<size;i++)
	{
	  if(ar[i].ID==key)
	  {
	  	cout<<"ID is          :"<<ar[i].ID<<endl;
	  	cout<<"Designation is :"<<ar[i].Designation<<endl;
	  	cout<<"Department is  :"<<ar[i].Department<<endl;
	  	cout<<"Salary is      :"<<ar[i].salary<<endl;
	  	check=true;
	  }	
	}
	if(check==false)
	{
		cout<<"No record found on this ID \n";
	}
}
void Delete_record(Employee ar[],int key,int &size)
{   bool check=false;

	int index=0;
	for(int i=0;i<size;i++)
	{
		if(ar[i].ID==key)
		{
		    index=i;
			check=true;	
		}
	}
	if(check==true)
	{
		for(int i=0;i<size;i++)
		{
			if(i>=index)
			{
				ar[i]=ar[i+1];
			}
			
		}
		size--;
		
		
	}
	else
	{
		cout<<"No record found on this ID \n";
	}
	
}
void sort(Employee ar[],int size)
{


	for(int i=0;i<size;i++)
	{		
		for(int j=i+1;j<size;j++)
		{
			if(ar[i].salary<ar[j].salary)
			{
				Employee temp  =ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
	cout<<"After Sorting on salary Record are :\n";
	for(int i=0;i<size;i++)
	{
	  	
	  	cout<<"ID is          :"<<ar[i].ID<<endl;
	  	cout<<"Designation is :"<<ar[i].Designation<<endl;
	  	cout<<"Department is  :"<<ar[i].Department<<endl;
	  	cout<<"Salary is      :"<<ar[i].salary<<endl;
	  	
	}
	
	
}
void Edit_any_record(Employee ar[],int key,int size)
{
	bool check=false;
	
	for(int i=0;i<size;i++)
	{
		if(ar[i].ID==key)
		{
			cout<<"Enter new Salary \n";
			cin>>ar[i].salary;
			check=true;
		}
	}
	
	if(check==false)
	{
		cout<<"No record found on this ID \n";
	}
}
void display_same_dep(Employee ar[],string k,int size)
{
  bool check=false; 
	cout<<"Employee Record have same department \n";
	for(int i=0;i<size;i++)
	{
		if(ar[i].Department==k)
		{
	    	cout<<"ID is          :"<<ar[i].ID<<endl;
	  		cout<<"Designation is :"<<ar[i].Designation<<endl;
	  		cout<<"Department is  :"<<ar[i].Department<<endl;
	  		cout<<"Salary is      :"<<ar[i].salary<<endl;
	  		check=true;
	  	
		}
	}
	if(check==false)
	{
		cout<<"No record found on this Department name \n";
	}
}

int main()
{
	Employee *obj=new Employee[50];
	string var;
	int size=0,count=0,key;
	do{
		cout<<"Enter 1 For Enter New Record \n";
		cout<<"Enter 2 Find any record \n";
		cout<<"Enter 3 For Delete Record on ID base \n";
		cout<<"Enter 4 Sort Record on Salary based \n";
		cout<<"Enter 5 For Edit any record \n";
		cout<<"Enter 6 For Display Same Department Record \n";
		cout<<"Enter 7 For EXIT \n";
		cin>>count;
		if(count==1)
		{
	       inputdata(&obj[size]);
		   size++;		
		}
		else if(count==2)
		{
			cout<<"Enter the ID for Search Record \n";
			cin>>key;
			display_any_record(obj,key,size);
		}
		else if(count==3)
		{   
			cout<<"Enter the ID For Delete Record \n";
			cin>>key;
			Delete_record(obj,key,size);
		}
		else if(count==4)
		{
			sort(obj,size);
		}
		else if(count==5)
		{
			cout<<"Enter the ID For Edit Record \n";
			cin>>key;
			Edit_any_record(obj,key,size);
		}
		else if(count==6)
		{
			cout<<"Enter Department name For search same dep \n";
			cin>>var;
			display_same_dep(obj,var,size);
		}
		
		
		
		
		
		
	}while(count!=7);
	
	
	delete[] obj;
	
	
	
}
