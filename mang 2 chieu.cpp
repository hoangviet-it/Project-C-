/*
//bai 41: tinh tong so chan trong mang 2 chieu
#include<iostream>
using namespace std;
void nhapmang(int n,int m,int mang[][100])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"nhap phan tu thu "<<i<<","<<j<<": ";
			cin>>mang[i][j];
		}
	}
}
int tong(int n,int m,int mang[][100])
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(mang[i][j]%2==0)
			{
				tong=tong+mang[i][j];
			}
		}
	}
	return tong;
}
int main()
{
	int n,m;
	int mang[100][100];
	cout<<"nhap hang: ";
	cin>>n;
	cout<<"nhap cot: ";
	cin>>m;
	nhapmang(n,m,mang);
	int s=tong(n,m,mang);
	cout<<s;
	return 0;
}*/



/*
//bai 42: tong cac phan tu la so nguyen to
#include<iostream>
using namespace std;
void nhapmang(int n,int m,int mang[][100])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"nhap phan tu thu "<<i<<","<<j<<": ";
			cin>>mang[i][j];
		}
	}
}
int snt(int n)
{
		if (n==0 || n==1) 
		{
			return 0;
		}
	for (int i=2; i<=n/2; i++)
	{
		if (n%i==0) 
		{
			return 0;// ko la so nguyen to
		}
	}
	return 1;
}
int tongsnt(int n,int m,int mang[][100])
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(snt(mang[i][j])==1)
			{
				tong=tong+mang[i][j];
			}
		}
	}
	return tong;
}
int main()
{
	int n,m;
	int mang[100][100];
	cout<<"nhap hang: ";
	cin>>n;
	cout<<"nhap cot: ";
	cin>>m;
	nhapmang(n,m,mang);
	int s=tongsnt(n,m,mang);
	cout<<s;
	return 0;
}*/




/*
//bai 43: tinh trung binh cong cac so chinh phuong
#include<iostream>
using namespace std;
void nhapmang(int n,int m,int mang[][100])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"nhap phan tu thu "<<i<<","<<j<<": ";
			cin>>mang[i][j];
		}
	}
}
int SCP(int n)
{ 
	for (int i=1 ; i<=n/2 ; i++)
	{
		if (i*i==n) 
		{
			return 1;
		}
	}
	return 0;
}
float trungbinhscp(int n,int m,int mang[][100])
{
	float tong=0,dem=0,tb;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(SCP(mang[i][j])==1)
			{
				tong=tong+mang[i][j];
				dem++;
			}
		}
	}
	if(dem==0)
	{
		return 0;
	}
	else 
	{
		tb=tong/dem;
		return tb;
	}
	
}
int main()
{
	int n,m;
	int mang[100][100];
	cout<<"nhap hang: ";
	cin>>n;
	cout<<"nhap cot: ";
	cin>>m;
	nhapmang(n,m,mang);
	float s=trungbinhscp(n,m,mang);
	cout<<s;
	return 0;
}*/















