#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
int pol1[10], pol2[10], pol3[10];
int i1, p=0, P1;

  cout<<"Masukkan Batas Polinomial 1= ";
  cin>>P1;

  for(i1=0; i1<=P1-1; i1++){
        cout<<"Masukkn Nilai Koefisien Polinomial X^"<<p<<" = ";
        cin>>pol1[i1]; p++;}
  cout<<"Jadi P1 : ";

  for(i1=P1-1; i1>=0; i1--){
        p--;
        cout<<" + ("<<pol1[i1]<<"X^"<<p<<")";}

  for(; P1<=10; P1++){
        pol1[P1]=0;}

  int i2;
  p=0;
  do{
        cout<<"\n\n Masukkan Batas Polinomial 2= ";
        cin>>P1;}
  while(P1>9);

  for(i2=0; i2<=P1-1; i2++){
        cout<<"Masukkn Nilai Koefisien Polinomial X^"<<p<<" = ";
        cin>>pol2[i2]; p++;}
  cout<<"Jadi P2 : ";

  for(i2=P1-1; i2>=0; i2--){
        p--;
        cout<<" + ("<<pol2[i2]<<"X^"<<p<<")";}

  for(; P1<=9; P1++ ){
        pol2[P1]=0;}

  int i3; p=0;
  do{
        cout<<"\n\n Masukkan Batas Polinomial 3= ";
        cin>>P1;}
  while(P1>9);

  for(i3=0; i3<=P1-1; i3++){
        cout<<"Masukkn Nilai Koefisien Polinomial X^"<<p<<" = ";
        cin>>pol3[i3];
        p++;}
  cout<<"Jadi P3 : ";

  for(i3=P1-1; i3>=0; i3--){
        p--;
        cout<<" + ("<<pol3[i3]<<"X^"<<p<<")";}
  for(;P1<=9; P1++){
        pol3[P1]=0;}

  cout<<"\n\n==============================================";
  cout<< "\n Hasil EMPAT OPERASI ARITMATIKA DASAR : ";
  cout<<"\n================================================";
  cout<<"\n\n Penambahan : \n";
  cout<<"P1+P2= "<<pol1[10]<<"x^10 + "<<pol1[9]+pol2[9]<<"x^9 + "
  <<pol1[8]+pol2[8]<<"x^8 + "<<pol1[7]+pol2[7]<<"x^7 + "
  <<pol1[6]+pol2[6]<<"x^6 + "<<pol1[5]+pol2[5]<<"x^5 + "
  <<pol1[4]+pol2[4]<<"x^4 + "<<pol1[3]+pol2[3]<<"x^3 +\n"
  <<pol1[2]+pol2[2]<<"x^2 + "<<pol1[1]+pol2[1]<<"x^1 + "
  <<pol1[0]+pol2[0]<<"x^0 ";

  cout<<"\n\n Pengurangan : \n";
  cout<<"P1-P2= "<<pol1[10]<<"x^10 + "<<pol1[9]-pol2[9]<<"x^9 + "
  <<pol1[8]-pol2[8]<<"x^8 + "<<pol1[7]-pol2[7]<<"x^7 + "
  <<pol1[6]-pol2[6]<<"x^6 + "<<pol1[5]-pol2[5]<<"x^5 + "
  <<pol1[4]-pol2[4]<<"x^4 + "<<pol1[3]-pol2[3]<<"x^3 +\n"
  <<pol1[2]-pol2[2]<<"x^2 + "<<pol1[1]-pol2[1]<<"x^1 + "
  <<pol1[0]-pol2[0]<<"x^0 ";

  cout<<"\n\n Perkalian : \n";
  cout<<"P1*P3= "<<pol1[10]*pol3[10]<<"x^11 + "<<pol1[9]*pol3[9]<<"x^10+ "
  <<pol1[8]*pol3[8]<<"x^9 + "<<pol1[7]*pol3[7]<<"x^8 + "
  <<pol1[6]*pol3[6]<<"x^7 + "<<pol1[5]*pol3[5]<<"x^6 + "
  <<pol1[4]*pol3[4]<<"x^5 + "<<pol1[3]*pol3[3]<<"x^4 +\n"
  <<pol1[2]*pol3[2]<<"x^3 + "<<pol1[1]*pol3[1]<<"x^2 + "
  <<pol1[0]*pol3[0]<<"x^1 " ;

  cout<<"\n\n Turunan : \n";
  cout<<"P2'= "<<pol2[8]*8<<"x^7 + "
               <<pol2[7]*7<<"x^6 + "<<pol2[6]*6<<"x^5 + "
               <<pol2[5]*5<<"x^4 + "<<pol2[4]*4<<"x^3 + "
               <<pol2[3]*3<<"x^2 + "<<pol2[2]*2<<"x^1 +\n"
               <<pol2[1]*1<<"x^0 + "<<pol2[0]*0<<"";
}
