/*
#include <iostream>
#include<string>
using namespace std;
class Person{
  protected:    
  string personName;
  int age;
  public:
   Person()
   {
       
   }
    
    virtual void print()=0;
};
class Student : public Person{
    protected:
    int Std_id;
    float Cgpa;
    public:
    Student()
    {
        
        cout<<"Enter the Person Name :";
        cin>>personName;
        cout<<"Enter the Person age :";
        cin>>age;
        cout<<"Enter the Student Id :";
        cin>>Std_id;
        cout<<"Enter  the Cgpa :";
        cin>>Cgpa;
    }
    
    void print()
    {
        cout<<"<----Person  ----->\n";
        cout<<"Name       = "<<personName<<endl;
        cout<<"Age        = "<<age<<endl;
        cout<<"Stduent ID = "<<Std_id<<endl;
        cout<<"CGPA       = "<<Cgpa<<endl<<endl;
    }
    
};
class Regular : public Student{
  string name_of_school;
  int Fee;
  public:
   Regular()
   {    
        cout<<"Enter the School Name :";
        cin>>name_of_school;
        cout<<"Enter the Fee for Regular Student :";
        cin>>Fee;
   }
   
   
   void print()
    {
        cout<<"<----Regular Student ----->\n";
        cout<<"Name        = "<<personName<<endl;
        cout<<"Age         = "<<age<<endl;
        cout<<"Stduent ID  = "<<Std_id<<endl;
        cout<<"CGPA        = "<<Cgpa<<endl;
        cout<<"School name = "<<name_of_school<<endl;
        cout<<"Fee         = "<<Fee<<endl<<endl;
    }
  
    
};
class Private : public Student{
  string address;
  int Fee;
  public:
    Private()
    {
       
        cout<<"Enter the address :";
        cin>>address;
        cout<<"Enter the Fee for Private Student :";
        cin>>Fee;
    }
    
    void print()
    {
        cout<<"<----Private Student --->\n";
        cout<<"Name        = "<<personName<<endl;
        cout<<"Age         = "<<age<<endl;
        cout<<"Stduent ID  = "<<Std_id<<endl;
        cout<<"CGPA        = "<<Cgpa<<endl;
        cout<<"Address     = "<<address<<endl;
        cout<<"Fee         = "<<Fee<<endl<<endl;
    }
    
};

int main()
{
	cout<<"<--Enter data For Person--> \n";
    Person *P = new Student();
    P->print();
    cout<<"<--Enter data For Regular Student--> \n";
    P = new Regular();
    P->print();
    cout<<"<--Enter data For Private Student--> \n";
    P = new Private();
    P->print();
    

    return 0;
}
*/
#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
class HospitalManagementSystem{
	
	public:
		
		
		virtual void display()=0;
	
	
};
class Patient : public HospitalManagementSystem{
	int P_id;
	string Pname;
	string Pcity;
	string Paddress;
	int P_docid;

	public:
		
		 static int Pcount;
	      Patient()
		  {
		  	P_id=0;
			Pname="";
			Pcity="";
			Paddress="";
			P_docid=0;
		  	
		  }
		  
		  
		  void input()
		  {
		  	cout<<"Enter the patient ID :";
		  	cin>>P_id;
		  	cout<<"Enter the Patient Name :";
		  	cin>>Pname;
		  	cout<<"Enter the Patient City :";
		  	cin>>Pcity;
		  	
		  	cout<<"Enter the Patient Address :";
		  	cin>>Paddress;
		  	
		  	Pcount++;
	      }  
	      
	      void setid()
	      {
	      	cout<<"Enter the Patient ID :";
	      	cin>>P_id;
		  }
	      void setP_docid()
		  {
		    cout<<"Enter the Patient Doctor ID :";
		  	cin>>P_docid;
	      }
	      
	      int getPid()
	      {
	      	return P_id;
		  }
		  int getPdoctid()
		  {
		  	return P_docid;
		  }
	      void display()
	      {
	      	cout<<"Patient ID      : "<<P_id<<endl;
	      	cout<<"Patient Name    : "<<Pname<<endl;
	      	cout<<"Patient City    : "<<Pcity<<endl;
	      	cout<<"Patient Address : "<<Paddress<<endl;
		  }
	      
	      static int getPcount()
	      {
	      	return Pcount;
		  }
		 
}; 
class ward : public HospitalManagementSystem{
	int wardNo;
	string wardName;
	int pid;
	int roomNo;
	
	public:
		ward()
		{
			wardNo=0;
			wardName="";	
		}
		
		
		void setid()
		{
			cout<<"Enter the Patient ID for ward :";
			cin>>pid;
		}
		void setid(int id)
		{
			pid=id;
		}
	    void setroom()
	    {
	    	cout<<"Enter the Room No :";
	    	cin>>roomNo;
		}
		
		void setroom(int r)
	    {
	    	roomNo=r;
		}
	    void setWardNo()
	    {
	    	cout<<"Enter the ward No :";
	    	cin>>wardNo;
		}
		
		
		void setWardName()
		{
			cout<<"Enter the ward Name :";
			cin>>wardName;
		}
		int getpid()
		{
			return pid;
		}
		
		void display()
		{
			cout<<"Ward No    : "<<wardNo<<endl;
			cout<<"Ward Name  : "<<wardName<<endl;
			cout<<"Room no    : "<<roomNo<<endl;
		}
	
};
class Doctor{
	int DoctId;
	string DoctName;
	string Specification;
	public:
		Doctor()
		{
		   DoctId=0;
		   DoctName="";
		}
		
		void setid()
		{
			cout<<"Enter the Doctor ID :";
			cin>>DoctId;
			
		}
		
		void setDoctName()
		{
			cout<<"Enter the Doctor Name :";
			cin>>DoctName;
		}
		
		void setSpecification()
		{
			cout<<"Enter Doctor Specification : ";
			cin>>Specification;
		}
		
		int getID()
		{
		   return DoctId;	
		}
		
		string getDocName()
		{
			return DoctName;
		}
		friend void display(Doctor d);
	
	
	
};
void display(Doctor d)
{
	cout<<"Doctor ID            : "<<d.DoctId<<endl;
	cout<<"Doctor Name          : "<<d.DoctName<<endl;
	cout<<"Doctor Specification : "<<d.Specification<<endl;
}
int Patient::Pcount = 0;
void menu()
{
	system("PAUSE");
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1) ;
	system("color 3F");
	 
	 
Sleep(700);
	cout<<"\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ ___________ @@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                           HOSPITAL MANAGEMENT SYSTEM                                  |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";

Sleep(100);
cout<<"\t\t\t\t\t@@|                                                   -\ University name   |@@\n";

Sleep(300);
cout<<"\t\t\t\t\t@@|___________|@@\n";

Sleep(300);
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";

Sleep(800);
system("CLS");
cout<<"\n\nLETS START\n\n";
cout<<"\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
     cout<<"\n  |-- MENUE --|\n";
     cout<<"\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
     
	cout<<"Enter 1  For New Doctor \n";
	cout<<"Enter 2  For New Patient \n";
	cout<<"Enter 3  For Specfic Patient Information \n";
	cout<<"Enter 4  For Specfic Doctor Information \n";
	cout<<"Enter 5  For Specfic Doctor All Patient Record \n";
	cout<<"Enter 6  For Total Count of Patient \n";
	cout<<"Enter 7  For New Ward \n";
	cout<<"Enter 8  For Delete Doctor Reocrd \n";
	cout<<"Enter 9  For Patient Discharge \n";
	cout<<"Enter 10 For All Patient Record \n";
	cout<<"Enter 11 For All Doctor Record \n";
	cout<<"Enter 12 For Exit \n";
	
}
int main()
{
	Patient obj[30];
	Doctor obj1[30];
	ward obj2[15];
	int p=0;
	int d=0;
	int w=0;
	int id;
	int choice;
	do{
		menu();
		cout<<"Enter the choice : ";
		cin>>choice;
		if(choice==1)
		{
		   obj1[d].setid();
		   obj1[d].setDoctName();
		   obj1[d].setSpecification();
		   d++;	
		}
		else if(choice==2)
		{
			obj[p].input();
	        obj[p].setP_docid();
			int id,check=0;
			do{
			
				id=obj[p].getPdoctid();
				for(int i=0;i<d;i++)
				{
			   		if(id==obj1[i].getID())
			   		{
			       		check=1;	
			   		}	
			   		else
					{
			   		   cout<<"No Doctor exit on this ID kindly again Enter Doctor ID \n";
					   obj[p].setP_docid();  	
					}
				}
		      }while(check!=1);
	   
	       p++;
		}
		else if(choice==3)
		{
			int id;
			cout<<"Enter the Patient ID : ";
			cin>>id;
			bool check=false;
			for(int i=0;i<p;i++)
			{
				if(id==obj[i].getPid())
				{
					check=true;
					obj[i].display();
				}
			}
			
			if(!check)
			{
				cout<<"No Patient Record on this ID \n";
			}
		}
		else if(choice==4)
		{
			int id;
			cout<<"Enter the Doctor ID : ";
			cin>>id;
			bool check=false;
			for(int i=0;i<d;i++)
			{
				if(id==obj1[i].getID())
				{
					check=true;
					display(obj1[i]);
				}
			}
			
			if(!check)
			{
				cout<<"No Doctor Record on this ID \n";
			}
		}
	    else if(choice==5)
		{
			
			cout<<"Enter the Specfic Doctor ID : ";
			cin>>id;
			int check=0;
			int index=0;
			for(int i=0;i<d;i++)
			{
				if(id==obj1[i].getID())
				{
					check=1;
					index=i;
					
				}
			}
			
			if(check==1)
			{
				cout<<obj1[index].getDocName()<<" Record are Below \n";
						
				for(int i=0;i<p;i++)
				{
					if(id==obj[i].getPdoctid())
					{
					    obj[i].display();
							
					}
				}
			}
	    }
	    else if(choice==6)
	    {
	    	cout<<"Total Number of Patient "<<Patient::getPcount()<<endl;
		}
		else if(choice==7)
	    {
	    	obj2[w].setWardNo();
	    	obj2[w].setWardName();
	    	obj2[w].setroom();
	    	int check=0;
			do
	    	{
			
	    	  cout<<"Enter the ID for this ward : ";
	    	 
			  cin>>id;
				
				for(int i=0;i<p;i++)
				{
					if(id==obj[i].getPid())
					{
				   		check=1;	
					}
				}
			
				if(check==1)
				{
					obj2[w].setid(id);
				}
				else
				{
				  cout<<"Enter Invalid  \n Again";
				}
		   }while(check!=1);
	    }
	    else if(choice==8)
	    {
	    	cout<<"Enter the Doctor ID :";
	    	cin>>id;
	    	int check=0;
	    	int index=0;
	    	for(int i=0;i<d;i++)
	    	{
	    		if(id==obj1[i].getID())
	    		{
	    			check=1;
					index=i;	
				}
			}
			
			if(check==1)
			{
				for(int i=0;i<d;i++)
				{
					if(i>=index)
					{
						obj1[i]=obj1[i+1];
				    }
				}
				d--;
				
			}
			else
			{
				cout<<"No Doctor Record found on this ID \n";
			}
	    	
	    }
		else if(choice==9)
	    {
	    	cout<<"Enter the Patient ID for discharge : ";
	    	cin>>id;
	    	int check=0,index=0;
	        for(int i=0;i<p;i++)
			{
			  if(id==obj[i].getPid())
			  {
			  	check=1;
			  	index=i;
			  }	
			}	
			
			if(check==1)
			{
				for(int i=0;i<p;i++)
				{
					if(i>=index)
					{
						obj[i]=obj[i+1];
				    }
				}
				p--;
			
			int check2=0;
			index=0;
			for(int i=0;i<w;i++)
			{
				if(id==obj2[i].getpid())
				{
				  	check2=1;
				  	obj2[i].setroom(0);
				  	
				}	
			} 
			
	    }
	    else
		{
		   cout<<"No Patient Record on this ID \n";	
	    }
	    
	    
   }
   else if(choice==10)
   {
	    for(int i=0;i<p;i++)
	    {
	    	obj[i].display();
		}
   }
	else if(choice==11)
	{
	    for(int i=0;i<d;i++)
	    {
	    	display(obj1[i]);
		}
	}
   
	}while(choice!=12);
	
	
}
