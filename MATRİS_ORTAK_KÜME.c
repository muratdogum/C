#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#define a 4
int main(){
    int dizi_1[a][a],dizi_2[a][a],dizi_kp[a][a],m=0,n=0,u=0;
    float h,x,y,s,r;
printf("Birici metrisin elemanlarini giriniz\n");
for(int i=0;i<a;i++)
for(int j=0;j<a;j++){
    printf("[%d][%d]=",i+1,j+1);
    scanf("%4d",&dizi_1[i][j]);}
printf("ikinci metrisi elemanlarini giriniz\n");
for(int i=0;i<a;i++)
for(int j=0;j<a;j++){
    printf("[%d][%d]=",i+1,j+1);
    scanf("%4d",&dizi_2[i][j]);}
printf("\n");
printf("Birinci dizi=\n");
for(int i=0;i<a;i++){
for(int j=0;j<a;j++){
printf("%4d",dizi_1[i][j]);
}printf("\n");}
printf("\n");
printf("Ikinici dizi=\n");
for(int i=0;i<a;i++){
   for(int j=0;j<a;j++){
printf("%4d",dizi_2[i][j]);
}printf("\n");}
printf("\n");
printf("Ortak elemanli dizi=\n");

for(int i=0;i<a;i++){
   for(int j=0;j<a;j++){
if(dizi_1[i][j]==dizi_2[i][j]&& dizi_1[i][j]!=0){
    dizi_kp[i][j]=(dizi_1[i][j]+dizi_2[i][j])/2;}
else if(dizi_1[i][j]==dizi_2[i][j]&& dizi_1[i][j]==0)
    {dizi_kp[i][j]=0;}
else {dizi_kp[i][j]=0;}
     if(dizi_1[i][j]!=0&&dizi_kp[i][j]!=0)
    {printf("%4d,",dizi_kp[i][j]);}
else if(dizi_1[i][j]==dizi_2[i][j]&&dizi_1[i][j]==0)
    {printf("%4d,",dizi_1[i][j]);}}}printf("\n");printf("\n");printf("\n");
for(int i=0;i<a;i++){
   for(int j=0;j<a;j++){
if(dizi_1[i][j]==dizi_2[i][j]&& dizi_1[i][j]!=0){
        m++;}
else if(dizi_1[i][j]==0){m++;}

if (dizi_1[i][j]!=0){
n+=dizi_kp[i][j];}
x+=dizi_1[i][j];
y+=dizi_2[i][j];}}
h=n/m;
s=x/16;
r=y/16;
printf("\n");
printf("Dizi Ortalamalari=");
printf("\n");printf("\n");
printf("ORTAK DIZI=");
printf("[%f]\n",h);
printf("BIRINCI DIZÝ=");
printf("[%f]\n",s);
printf("IKINCI DIZI=");
printf("[%f]\n",r);printf("\n");
printf("DIZILERIN ORTALAMALARI SIRALAMASI=>");
printf("\n");

if (h==s)
{printf("BIRINCI DIZI=ORTAK DIZI\n");
    printf("[%f]",h);printf("=");printf("[%f]",s);printf("\nDIZI ORTALAMALARI ESIT");}
else if(h>s){printf("BIRINCI DIZI<ORTAK DIZI\n");printf("[%f]",h);
printf(">"); printf("[%f]",s);}
else if(s>h){printf("BIRINCI DIZI>ORTAK DIZI\n");printf("[%f]",s);printf(">");printf("[%f]",h);}

printf("\n");
if (h==r)
{printf("IKINCI DIZI=ORTAK DIZI\n");
    printf("[%f]",h);printf("=");printf("[%f]",r);printf("\nDIZI ORTALAMALARI ESIT");}
else if(h>r){printf("IKINCI DIZI<ORTAK DIZI\n");printf("[%f]",h);
printf(">"); printf("[%f]",s);}
else if(r>h){printf("IKINCI DIZI>ORTAK DIZI\n");printf("[%f]",r);printf(">");printf("[%f]",h);}

printf("\n");printf("\n");
printf("\n ORTAK DIZIDEKI ASAL SAYILAR=");
for(int i=0;i<a;i++){
for(int j=0;j<a;j++){
        u=dizi_kp[i][j];
if(u%2!=0){if(u!=1){if (u%3!=0){for (int g=1;;g++){
if(u%g!=0){printf("[%d],",u);break;}}}}
else {printf("[YOK]");}}}}
getch();

printf("\n");printf("\n");

return 0;
}
