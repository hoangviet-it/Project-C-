/*
// tao file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream bodemghi("dothi.txt");
	int n;
	int dayso[n][n];
	cout << "nhap so cap cua ma tran vuong: ";
	cin >> n;
	bodemghi << n << "\n";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "nhap gia tri phan tu day so " << i << "," << j << ": ";
			cin >> dayso[i][j];
			bodemghi << dayso[i][j] << "\t";
		}
		bodemghi << "\n";
	}
	cout << "da ghi file trong thu muc.";
	bodemghi.close();
	return 0;
}*/




#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream bodemdoc ("dothi.txt");
	int n,m;
	if(!bodemdoc.is_open())
	{
		cout<<"khong the mo file.\n";
		return 0;
	}
	bodemdoc>>n>>m;
	
	double dayso[n][m];
	cout<<"Day so trong ma tran ke: "<<n<<m<<"\n";
		int t=0;
		int max=dayso[0][0];
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<m;j++)
		{
			bodemdoc>>dayso[i][j];
			cout<<dayso[i][j]<<"\t";
			
			//t=t+dayso[i][j];
		 /* if(max<dayso[i][j])
			{
				max=dayso[i][j];
			}*/
		}		
		cout<<"\n";
	}
	int width=5;
	int height=3;
	cout<<"\n";
	for(int j=0;j<width;j++)
	{
		for(int i=height-1;i>=0;i--)
		{
			cout<<dayso[i][j]<<"\t";
		}
		cout<<"\n";
	}	
	bodemdoc.close();
//	cout<<" so lon nhat trong mang la: "<<max;
	//cout<<t;
	
	return 0;
}
