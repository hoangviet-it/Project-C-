#include <iostream>
using namespace std;
// Xay dung ham
int SNT(int n){ // Ham kiem tra SNT, ket qua 1 la SNT - 0 khong phai SNT
if (n==0 || n==1) return 0;
for (int i=2 ; i<=n/2 ; i++)
if (n%i==0) return 0;
return 1;
}
int SHT(int n){ // Ham kiem tra SHT, ket qua 1 la SHT - 0 khong phai SHT
int s = 0;
for (int i=1 ; i<=n/2 ; i++)
if (n%i==0) s=s+i;
if (s==n) return 1;
else return 0;
}
int SCP(int n){ // Ham kiem tra SCP, ket qua 1 la SCP - 0 khong phai SCP
for (int i=1 ; i<=n/2 ; i++)
if (i%i==n) return 1;
return 0;
}
void NhapMang1C(int a[],int &n){
cout<<"\n Nhap so phan tu cua mang: "; cin>>n;
for (int i=0 ; i<n ; i++){
cout<<"Gia tri phan tu thu "<<i<<" :"; cin>>a[i];
}
}
void XuatMang1C(int a[],int n){
for(int i=0 ; i<n ; i++) cout<<" "<<a[i];
cout<<endl;
}
void Bai01(int a[],int n){
cout<<"\n Cac phan tu co gia tri chan va nho hon 20 (co the co) la:";
for (int i=0 ; i<n ; i++)
if (a[i]%2==0 && a[i]<20) cout<<" "<<a[i];
}
void Bai02(int a[],int n){
cout<<"\n Cac phan tu la so nguyen to trong mang co the co la: ";
for (int i=0 ; i<n ; i++)
if (SNT(a[i])) cout<<" "<<a[i];
}
void Bai03(int a[],int n){
cout<<"\n Cac phan tu la so hoan thien trong mang co the co la: ";
for (int i=0 ; i<n ; i++)if (SHT(a[i])) cout<<" "<<a[i];
}
void Bai04(int a[],int n){
cout<<"\n Cac phan tu la so chinh phuong trong mang co the co la: ";
for (int i=0 ; i<n ; i++)
if (SCP(a[i])) cout<<" "<<a[i];
}
void Bai05(int a[],int n){
cout<<"\n Vi tri cua cac phan tu la so nguyen to trong mang co the co la: ";
for (int i=0 ; i<n ; i++)
if (SNT(a[i])) cout<<" "<<i;
}
int Bai08(int a[],int n){
int s=0;
for (int i=0 ; i<n ; i++)
if (a[i]%2==0) s = s + a[i];
return s;
}
int Min(int a[],int n){
int GTMin = a[0];
for (int i=1 ; i<n ; i++)
if (GTMin > a[i]) GTMin = a[i];
return GTMin;
}
int Max(int a[],int n){
int GTMax = a[0];
for (int i=1 ; i<n ; i++)
if (GTMax < a[i]) GTMax = a[i];
return GTMax;
}
void Bai14(int a[],int n){
int GTMax = Max(a,n);
cout<<"\n Cac vi tri cua phan tu co gia tri lon nhat la:";
for (int i=0 ; i<n ; i++)
if (a[i]==GTMax) cout<<" "<<i;
}
int Bai16(int a[],int n){
for (int i=0 ; i<n ; i++)
if (a[i]<0) return i;
return -1;
}

// bai 31.
void Swap(int &a,int &b){int Temp = a; a = b; b = Temp;}
void IncSort_Sel(int a[],int n){
int VTMin;
for(int i=0 ; i<n-1 ; i++){
VTMin = i;
for (int j=i+1 ; j<n ; j++)
if (a[VTMin]>a[j]) VTMin = j;Swap(a[i],a[VTMin]);
}
}
void DecSort_Sel(int a[],int n){
int VTMax;
for(int i=0 ; i<n-1 ; i++){
VTMax = i;
for (int j=i+1 ; j<n ; j++)
if (a[VTMax]<a[j]) VTMax = j;
Swap(a[i],a[VTMax]);
}
}
void Bai32(int a[],int n){
int VTMin;
for(int i=0 ; i<n-1 ; i++)
if (SNT(a[i])){
VTMin = i;
for (int j=i+1 ; j<n ; j++)
if (SNT(a[j]) && a[VTMin]>a[j]) VTMin = j;
Swap(a[i],a[VTMin]);
}
}
void Bai33(int a[],int n){
int VTMax;
for(int i=0 ; i<n-1 ; i++)
if (a[i]%2==0) {
VTMax = i;
for (int j=i+1 ; j<n ; j++)
if (a[j]%2==0 && a[VTMax]<a[j]) VTMax = j;
Swap(a[i],a[VTMax]);
}
}
void Bai34(int a[],int &n,int k){
for (int i=k ; i<n-1 ; i++)
a[i] = a[i+1];
n--;
}
void Bai35(int a[],int &n){
int GTMax = Max(a,n);
int i = 0;
while (i<n){
if (a[i]==GTMax) Bai34(a,n,i);
else i++;
}
}
void Bai36(int a[],int &n,int x){
int i = 0;
while (i<n){if (a[i]<x) Bai34(a,n,i);
else i++;
}
}
void Bai37(int a[],int &n,int k,int x){
n++;
for (int i=n-1 ; i>k ; i--)
a[i] = a[i-1];
a[k] = x;
}
void Bai38(int a[],int &n,int x){
int GTMax = Max(a,n);
int i=0;
while (i<n){
if (a[i] == GTMax) {
Bai37(a,n,i+1,x);
i++;
}
i++;
}
}
void Bai39(int a[],int &n,int x){
int GTMin = Min(a,n);
int i=0;
while(i<n){
if (a[i] == GTMin) {
Bai37(a,n,i,x);
i++;
}
i++;
}
}
void Bai40(int a[],int &n){
int i = 0;
while (i<n){
if (SNT(a[i])){
Bai37(a,n,i,a[i]);
Bai37(a,n,i,a[i]);
i = i + 2;
}
i++;
}
}
int main(){
int a[100],n;
int k,x;
cout<<"\n Nhap mang mot chieu a: ";NhapMang1C(a,n);
cout<<"\n Mang vua nhap la: ";
XuatMang1C(a,n);
cout<<"\n Nhap vi tri can xoa: "; cin>>k;
cout<<"Nhap gia tri can chen: "; cin>>x;
//Bai39(a,n,x);
Bai37(a,n,k,x);
cout<<"khi da xoa phan tu lon nhat ta duoc mang: ";
//cout<<"\n Mang sau khi chen la: ";
XuatMang1C(a,n);
//cout<<"\n Tong cua cac phan tu co gia tri chan la: "<<Bai08(a,n);
//int VTAm = Bai16(a,n);
//if (VTAm!=-1) cout<<"\n Vi tri cua so am dau tien la: "<<VTAm;
//else cout<<"\n Khong co so am trong mang";
cout<<endl;
system("pause");
return 0;
}
