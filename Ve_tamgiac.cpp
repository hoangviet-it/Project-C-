#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Nhap so nguyen N: ";
    cin>>n;
    
    // tam giac rong
    // lap dong theo n
    for (int i = 1; i <= n; i++)
   {
   		// lap khoang trong
      	for(int j = 1; j <= n-i; j++){
      		 	cout<<" ";
			}
		// lap dau *
	    for (int j = 1; j <= i; j++)
	    {
	    	// xac dinh vi tri dau *
	        if (j == 1 || j == i || i == n)  // cot dau, cot cuoi, dong cuoi
	            cout<<"* ";
	        else{
	        	cout<<"  ";
			}
	    }
    cout<<"\n";
   }
    cout<<"\n";
    //***********************************************//
    // tam giac dac
    // lap dong theo n
    for(int i = 1; i <= n; i++) {
    	
    	// lap khong trong
      	for(int j = 1; j <= n-i; j++){
      		 	cout<<" ";
			}
		// lap dau *
      	for(int j = 1; j <= i; j++){
      		 	cout<<"* ";
			}
      	cout<<"\n";
    }
	return 0;
}
