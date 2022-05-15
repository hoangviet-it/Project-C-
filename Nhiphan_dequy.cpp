#include <iostream>
#include <stdio.h>
#include <stdint.h>
using namespace std;
// nhi phan 32 bit
void nhiphan32(uint32_t n32, int bit32){
    if(bit32){
        nhiphan32(n32 >> 1, bit32-1);
        putchar("01"[n32 & 1]);
    }
}
void in32(uint32_t n32){
    nhiphan32(n32, 32);
}

// nhi phan 16 bit
void nhiphan16(uint16_t n16, int bit16){
    if(bit16){
        nhiphan16(n16 >> 1, bit16-1);
        putchar("01"[n16 & 1]);
    }
}
void in16(uint16_t n16){
    nhiphan16(n16, 16);
}

// nhi phan 8 bit
void nhiphan8(uint8_t n8, int bit8){
    if(bit8){
        nhiphan8(n8 >> 1, bit8-1);
        putchar("01"[n8 & 1]);
    }
}
void in8(uint8_t n8){
    nhiphan8(n8, 8);
}

// nhi phan 4bit
void nhiphan4(int n)
{
	if(n!=0)
       {
       	    int i;
            nhiphan4(n/2);
            i=n%2;
            cout<<i;
        }
}

// nhi phan 4bit
void nhiphan4_1(int n4)
{	
	if (n4 == 0)
	    {
	        cout<<"0";
	        return;
	    }
	    	nhiphan4_1(n4 / 2);
			cout<<n4%2;
}

// nhi phan 4bit
void nhiphan4_2(int n3)
{	
	if (n3 == 0)
	    {
	        cout<<"00";
	        return;
	    }
	    	nhiphan4_2(n3 / 2);
			cout<<n3%2;
}

// nhi phan 4bit
void nhiphan4_3(int n1)
{	
	if (n1 == 0)
	    {
	        cout<<"000";
	        return;
	    }
	    	nhiphan4_3(n1 / 2);
			cout<<n1%2;
}

int main(){
	int n;
	cout<<"Nhap so can chuyen: ";
	cin>>n;
	if(n>255&&n<65536){
	    in16(n);
	}
	else if (n>15&&n<256){
		in8(n);
	}
	else if (n<=15&&n>7){
		nhiphan4(n);
	}
	else if (n<=7&&n>3){
		nhiphan4_1(n);
	}
	else if (n<=3&&n>1){
		nhiphan4_2(n);
	}
	else if (n<=1&&n>0){
		nhiphan4_3(n);
	}
	else {
		in32(n);
	}
	
    return 0;
}

