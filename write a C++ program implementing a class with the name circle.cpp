#include<iostream>
#include<conio.h>
using namespace std;
class ahad
{
	private :
		float radius;
	public :
	void getradius()	
	{
		cout<<"\n enter radius";
		cin>>radius;
	}
	void CalArea()
	{
		cout<<"area of circle:"<<3/14*radius*radius;
	}
};


int main()
{
	ahad c;
	c.getradius();
	c.CalArea();
	return(0);
}