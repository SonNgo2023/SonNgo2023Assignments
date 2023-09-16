#include<iostream>
using namespace std;
struct point
{
	double x;
	double y;	
};
struct line
{
	double a;
	double b;
};
line tt(point m,point n)
	{
		line tiept;
		tiept.a=m.x-n.x;
		tiept.b=m.y-n.y;
		return tiept;
	};
int main()
{
	point a;
	cin>>a.x>>a.y;
	point b;
	cin>>b.x>>b.y;
	point c;
	cin>>c.x>>c.y;
	point d;
	cin>>d.x>>d.y;
	line ab=tt(a,b);
	line cd=tt(c,d);
	if (ab.a!=cd.a)
	{
		cout<<"MANY";
	}
	else cout<<"NO";
	return 0;
}
