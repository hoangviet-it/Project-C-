/*
// bai 4 phan 1: tong 1 +1/2...+ 1/n
#include<iostream>
using namespace std;
float tong(float n)
{
	if(n==0)
	{
		return n;
	}
	else return tong(n-1)+1/n;
}
int main()
{
	int n;
	cout<<"nhap n: ";
	cin>>n;
	float t=tong(n);
	cout<<t;
	return 0;
}*/




/*
// bai 6 phan 1: tong 1 +1/3+1/5...+ 1/2n-1
#include<iostream>
using namespace std;
float tong(float n)
{
	if(n==0)
	{
		return n;
	}
	else return tong(n-1)+1/(2*n-1);
}
int main()
{
	int n;
	cout<<"nhap n: ";
	cin>>n;
	float t=tong(n);
	cout<<t;
	return 0;
}*/









