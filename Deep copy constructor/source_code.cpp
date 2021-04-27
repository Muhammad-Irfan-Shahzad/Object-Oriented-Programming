#include <iostream>
#include <string>
using namespace std;
class polygon{
	float *lenght;
	float *width;
	public:
	
	polygon()
	{
		
   		lenght = new float;
   		width = new float; 
		
	}
	
	polygon(float l,float w)
	{
	
   		lenght = new float;
   		width = new float; 
		lenght = &l;
		width=&w;     
	}
	
	
	void set_length()
	{
		float l;
		cout<<"Enter the length : ";
		cin>>l;
		*lenght=l;
	}
	
	void set_width()
	{
		float w;
		cout<<"Enter the width :";
		cin>>w; 
		*width=w;
	}
	
	float get_l()
	{
		return *lenght;
	}
	
	float get_w()
	{
		
	    return *width;	
	}
	
	polygon(const polygon &ob)
	{
		lenght = new float;
		lenght=&(*ob.lenght);
		width = new float;
		width =&(*ob.width);
        
    

	}
	
	void display()
	{
		
		cout<<"Lenght            =  "<<*lenght<<endl;
		cout<<"Width             =  "<<*width<<endl;
		cout<<"Area of rectangle =  "<<get_l()*get_w()<<endl;
		
	}
		
	
	
	
};
int main()
{
	
	polygon obj1;
	cout<<"FOR OBJECT 1 : \n";
	obj1.set_length();
	obj1.set_width();
	obj1.display();
	cout<<endl;
	
	polygon obj2;
	cout<<"FOR OBJECT 2 : \n";
	obj2.set_length();
	obj2.set_width();
	cout<<"COPY CONSTRUCTOR CALLED \n";
	obj2=obj1;
	obj2.display();
	cout<<endl;
	cout<<"Change value of OBJECT 2 \n";
	obj2.set_length();
	obj2.set_width();
	cout<<"OBJECT 2 display \n";
	obj2.display();
	
	
	cout<<"OBJECT 1 display \n";
	obj1.display();
	
	
}
