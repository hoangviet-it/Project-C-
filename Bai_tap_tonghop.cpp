/*
// bai 1: cong don cac so den n
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"nhap so can tinh: ";
	cin>>n;
	int tong=0;
	for(int i=0;i<=n;i++)
	{
		tong=tong+i;
	}
	cout<<tong;
	return 0;
}*/



/*
// bai 2: cong don so le
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"nhap so can tinh: ";
	cin>>n;
	
		int tong =0;
		for(int j=1;j<=n;j++)
		{
			tong=tong+2*j-1;
		}
		
		cout<<tong;
	
	
	return 0;
}*/




/*
// bai 3: cong don so chan
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"nhap so can tinh: ";
	cin>>n;
	
		int tong =0;
		for(int j=1;j<=n;j++)
		{
			tong=tong+2*j;
		}
		
		cout<<tong;
	
	
	return 0;
}*/





/*
// bai 4: cong don phan so
#include<iostream>
using namespace std;
int main()
{
	float n;
	cout<<"nhap so can tinh: ";
	cin>>n;
	
		float tong =0;
		for(float j=1;j<=n;j++)
		{
			tong=tong+1/j;
		}
		
		cout<<tong;
	
	
	return 0;
}*/




/*
// bai 5: cong don phan so mau chan
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so can tinh: ";
	cin>>n;
	
		
		float tong=0;
	
		for(float j=1;j<=n;j++)
		{
			tong=tong+1/(2*j);
			
		}
		cout<<tong;
		
	return 0;
}*/
/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    float S;
    S = 0;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }
    }while(n < 1);

    for(i = 1; i <= n; i++)
    {
        S = S + 1.0 / (2 * i);
    }
    printf("\nTong la: %f", S);

    getch();
    return 0;
}*/




/*
// bai 6: cong don phan so mau le
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so can tinh: ";
	cin>>n;
	
		
		float tong=1;
	
		for(float j=1;j<=n;j++)
		{
			tong=tong+1/((2*j)-1);
			
		}
		cout<<tong;
		
	return 0;
}*/


/*
// bai 8: tinh tong (n/n+1)
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so can tinh: ";
	cin>>n;
	
		
		float tong=0;
	
		for(float j=1;j<=n;j++)
		{
			tong=tong+j/(j+1);
			
		}
		cout<<tong;
		
	return 0;
}*/




/*
// bai 9: cong don giai thua
#include<iostream>
using namespace std;
double giaithua(int n)
{

	double kq = 1;

	for (int i = 1; i <= n; i++)
		kq = kq * i;
	return kq;
}
int main()
{
	int n,gt;
	cout<<"nhap so can tinh: ";
	cin>>n;
	
		gt=giaithua(n);
		
		float tong=0;
		for(float j=1;j<=n;j++)
		{
			tong=tong+giaithua(j);
			
		}
		cout<<tong;
		
	return 0;
}*/





/*
// bai 10: cong don phan so mau giai thua
#include<iostream>
using namespace std;
double giaithua(int n)
{

	double kq = 1;

	for (int i = 1; i <= n; i++)
		kq = kq * i;
	return kq;
}

int main()
{
	int n,gt;
	cout<<"nhap so can tinh: ";
	cin>>n;
	
		gt=giaithua(n);
		
		float tong=0;
		for(float j=1;j<=n;j++)
		{
			tong=tong+(1/giaithua(j));
			
		}
		cout<<tong;
		
	return 0;
}*/




/*
// bai 11: cong don so luy thua
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"nhap so can tinh: ";
	cin>>n;
		float tong=0;
	
		for(float j=1;j<=n;j++)
		{
			tong=tong+(j*j);
			
		}
		cout<<tong;
		
	return 0;
}*/




/*
// bai 12: cong tru don so luy thua
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so can tinh: ";
	cin>>n;
	
	int tong=0;
	for(int j=1;j<=n;j++)
	{
		if(j%2==0)
		{
			tong=tong*(-1)+j*j;
			
		}	
		else	tong=tong*(-1)+j*j;
	}
	if(n%2==0)
	{
		cout<<"-"<<tong;
	}	
	else cout<<tong;
	return 0;
}*/



/*
// bai 13: cong don ( n^n)
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"nhap n: ";
	cin>>n;
	int tong=0;
	for(int i=1;i<=n;i++)
	{
		int a=1;
		for(int j=0;j<i;j++)
		{
			a=a*i;
		}
		tong=tong+a;
	}
	cout<<"tong = "<<tong;
	//system("pause");

return 0;
}*/




/*
// bai 14: cong tru don phan so
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so can tinh: ";
	cin>>n;
	
	float tong=0;
	for(float j=1;j<=n;j++)
	{	
			tong=tong+1/(j*(j+1));
	}
		cout<<tong;
	return 0;
}*/




/*
// bai 15: tong (-1)^n-1*1/(j*(j+1))
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so can tinh: ";
	cin>>n;
	
	float tong=0;
	for(float j=1;j<=n;j++)
	{	
			tong=tong*(-1)+1/(j*(j+1));
	}
		
	if(n%2==0)
	{
		cout<<-tong;
	}	
	else cout<<tong;
	return 0;
}*/





/*
// bai 23: tim uoc so cua n
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	cout<<"uoc so cua "<< n <<" la: ";
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<"\t";
		}
	}
	return 0;

}*/




/*
// bai 24: in dao nguoc tung gia tri n
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	
	while(n>0)
	{
		
		cout<<n%10<<"\t";
		n=n/10;	
	}
	
return 0;
}*/




/*
// bai 25: in dao nguoc n
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	int m=0;
	for(int i=0;i<n;i++)
	{
		m=m*10+n%10;
		n=n/10;	
	}
	cout<<m;
return 0;
}*/





/*
// bai 26:
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	cout<<"uoc so cua "<< n <<" la: ";
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<"\t";
		}
	}
	int tong=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			tong=tong+i;
		}
	}
	
	cout<<"\ntong cac uoc so la: "<<tong;
	return 0;

}*/



/*
// bai 27:
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	cout<<"uoc so cua "<< n <<" la: ";
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<"\t";
		}
	}
	int dem=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	
	cout<<"\nso luong uoc so la: "<<dem;
	return 0;

}*/



/*
// bai 28:
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	cout<<"uoc so cua "<< n <<" la: ";
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<"\t";
		}
	}
	int tich=1;
	for(int i=1;i<n;i++)
	{
		if((n%i==0)&&(i%2!=0))
		{
			tich=tich*i;
		}
	}
	
	cout<<"\ntich cac uoc so la: "<<tich;
	return 0;

}*/




/*
// bai 29:
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	cout<<"uoc so cua "<< n <<" la: ";
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<"\t";
		}
	}
	int tong=0;
	for(int i=1;i<n;i++)
	{
		if((n%i==0)&&(i%2==0))
		{
			tong=tong+i;
		}
	}
	
	cout<<"\ntong cac uoc so chan la: "<<tong;
	return 0;

}*/



/*
// bai 30:
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	cout<<"uoc so cua "<< n <<" la: ";
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<"\t";
		}
	}
	int dem=0;
	for(int i=1;i<n;i++)
	{
		if((n%i==0)&&(i%3==0))
		{
			dem++;
		}
	}
	
	cout<<"\n so luong uoc so chia het cho 3 la: "<<dem;
	return 0;

}*/




/*
// bai 31:
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	cout<<"uoc so cua "<< n <<" la: ";
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<"\t";
		}
	}
	int max=1;
	for(int i=1;i<n;i++)
	{
		if((n%i==0)&&(i%2!=0))
		{
			if(max<i)
			{
				max=i;
			}
		}
	}
	
	cout<<"\n uoc so le lon nhat la: "<<max;
	return 0;

}*/



/*
// bai 32: tong cac chu so cua n
#include<iostream>
using namespace std;

int main()
{
	int n,tam;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	int tong=0;
	while(n>0)
	{
		tam=n%10;
		n=n/10;	
		tong=tong+tam;
		
	}
	cout<<"tong cac chu so cua n la: "<<tong;
return 0;
}*/



/*
// bai 33: tong cac chu so chan cua n
#include<iostream>
using namespace std;

int main()
{
	int n,tam;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	int tong=0;
	while(n>0)
	{
		tam=n%10;
		n=n/10;	
		if(tam%2==0)
		{
		tong=tong+tam;
		}
	}
	cout<<"tong cac chu so chan la: "<<tong;
return 0;
}*/



/*
// bai 34: dem so chan trong n
#include<iostream>
using namespace std;

int main()
{
	int n,tam;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	int dem=0;
	while(n>0)
	{
		tam=n%10;
		n=n/10;	
		if(tam%2==0)
		{
			dem++;
		}
	}
	cout<<"co "<<dem<<" chu so chan.";
return 0;
}*/




/*
// bai 35: tich cac so chan khac 0.
#include<iostream>
using namespace std;

int main()
{
	int n,tam;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	int tich=1;
	while(n>0)
	{
		tam=n%10;
		n=n/10;	
		if((tam%2==0)&&(tam!=0))
		{
		tich=tich*tam;
		}
	}
	cout<<"tich cac chu so chan khac 0 la: "<<tich;
return 0;
}*/




/*
// bai 36: tim so dau tien cua n
#include<iostream>
using namespace std;

int main()
{
	int n,sodautien;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	
	while(n>0)
	{
		
		sodautien=n%10;
		n=n/10;	
	}
	cout<<"so dau tien la: "<<sodautien;
return 0;
}*/








