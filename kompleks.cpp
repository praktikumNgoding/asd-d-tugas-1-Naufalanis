#include <iostream>
#include <cmath>

using namespace std;

typedef struct komplek
{
int bil;
char kar;
};

komplek a, b, c, d;

void inisialisasi(){
a.bil=1;
b.bil=3;
b.kar='i';
c.bil=6;
d.bil=8;
d.kar='i';

cout<<"a= "<<a.bil<<endl;
cout<<"b= "<<b.bil<<b.kar<<endl;
cout<<"c= "<<a.bil<<endl;
cout<<"d= "<<d.bil<<d.kar<<endl;}

void penambahan(){
cout<<a.bil+c.bil<<" + "<<b.bil+d.bil<<d.kar<<endl;}

void pengurangan(){
cout<<a.bil-c.bil<<" + "<<b.bil-d.bil<<d.kar<<endl;}

void perkalian(){
int h1=(a.bil*c.bil)-(b.bil*d.bil);
int h2=(a.bil*d.bil)-(b.bil*c.bil);
cout<<h1+h2<<d.kar<<endl;}

void pembagian(){
int n, m, o, p;
n=((a.bil*c.bil)+(b.bil*d.bil));
m=(pow(a.bil, 2)+pow(b.bil, 2));
o=((b.bil*c.bil)-(a.bil*d.bil));
p=(pow(c.bil, 2)+pow(d.bil, 2));
cout<<((n/m)+(o/p))<<d.kar<<endl;}

int main(){
inisialisasi();
int pilihan;

do{
    cout<<"\nsilahkan pilih operasi : "<<endl;
    cout<<"1. Penambahan"<<endl;
    cout<<"2. pengurangan"<<endl;
    cout<<"3. perkalian"<<endl;
    cout<<"4. pembagian"<<endl;
    cout<<"5. exit"<<endl;
    cout<<"silahkan pilih : ";
    cin>>pilihan;

    if (pilihan==1){
        penambahan();}
    else if (pilihan==2){
        pengurangan();}
    else if (pilihan==3){
        perkalian();}
    else if (pilihan==4){
        pembagian();}
    else if (pilihan==5){
        break;}
    else{
        cout<<"Pilihan hanya 1-5"<<endl;}}
while (true);

return 0;}
