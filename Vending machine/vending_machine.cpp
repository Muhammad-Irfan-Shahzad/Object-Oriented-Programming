#include<iostream>
#include<string>
using namespace std;
struct machine{
string drink_name;
double cost;
int number_in_machine;
};
void fun(machine *p)
{
cout << "Drink sode " << "\tCost" << "\tNumber in machine" << endl;
for (int i = 0; i < 4; i++)
{
cout << p[i].drink_name << " " << p[i].cost << " " <<

p[i].number_in_machine << endl;

}
}
int main()
{
machine *m = new machine[4];
m[0].drink_name = "cole ";
m[1].drink_name = "rootbear ";
m[2].drink_name = "Grapesode ";
m[3].drink_name = "Creamsode ";
m[0].cost = .75;
m[1].cost = .75;
m[2].cost = .80;
m[3].cost = .80;

m[0].number_in_machine = 20;
m[1].number_in_machine = 20;
m[2].number_in_machine = 20;
m[3].number_in_machine = 20;

double count = 0;
int j = 0;
double ret;
while (j < 2)
{
fun(m);
cout << endl;

cout << "Enter 1 for coke :" << endl;
cout << "Enter 2 for root bear :" << endl;
cout << "Enter 3 for Grape sode :" << endl;
cout << "Enter 4 for Cream sode :" << endl;
cout << "Enter 5 for quit " << endl;
int r;
cin >> r;
double price;
cout << "Enter money greater then 0.75$ and less or equal than

1$ :" << endl;

cin >> price;

while ( price <0 || price>1)//validation

{
cout << "your Entered wrong enter again " << endl;
cout << "Enter money greater then 0.75$ and less than

1$ :" << endl;

cin >> price;
}
if (r == 1)
{
if (price >= m[0].cost)
{
m[0].number_in_machine =

m[0].number_in_machine - 1;

ret = price - 0.75;
count=count+0.75;
}
else
{
cout << "Enter invalid price not enough for

purchase " << endl;
}
}
else if (r == 2)
{
if (price >= m[1].cost)
{
m[1].number_in_machine =

m[1].number_in_machine - 1;

ret = price - 0.75;
count=count+0.75;
}
else
{
cout << "Enter invalid price not enough for

purchase " << endl;
}
}
else if (r == 3)

{
if (price >= m[2].cost)
{
m[2].number_in_machine =

m[2].number_in_machine - 1;

ret = price - 0.80;
count=count+0.80;
}
else
{
cout << "Enter invalid price not enough for

purchase " << endl;
}
}
else if (r == 4)
{
if (price >= m[3].cost)
{
m[3].number_in_machine =

m[3].number_in_machine - 1;

ret = price - 0.80;
count=count+0.80;
}
else
{
cout << "Enter invalid price not enough for

purchase " << endl;
}
}
else if (r == 5)
{
break;
}
cout << "remaining of customer :" << ret << endl;
j++;
fun(m);
}

cout << endl;
cout << "machine earn price are :" << count << endl;
delete[] m;

system("pause");
}
