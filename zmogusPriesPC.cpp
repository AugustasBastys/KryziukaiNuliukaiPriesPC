#include <iostream>
#include <windows.h>
#include <MMSystem.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <Windows.h>
#include <fstream>


using namespace std;

int Xwin=0, Owin=0, k=0;
char M[3][4]=
{
    "___",
    "___",
    "___",
};
char Q[3][4]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
bool gR=true, tenkina=true;

void pas(){

for(int j=0; j<3; j++){
for(int i=0; i<3; i++){
if(M[j][i]!='_'){
Q[j][i]=' ';
}


}}

}

int keic(){

    int T[9], p=0, g;

for(int j=0; j<3; j++){
for(int i=0; i<3; i++){
    if(M[j][i]!='O'&&M[j][i]!='+'){
        T[p]=(j*10)+i;
        p++;
    }
}}
srand(time(0));
g=rand()%p;

return T[g];
}

void iKrast(){
int q;
srand(time(0));
q=rand()%4;

if(q==0){
    M[0][0]='O';
}
else if(q==1){
    M[0][2]='O';
}
else if(q==2){
    M[2][2]='O';
}
else{
    M[2][0]='O';
}

}

void side(){
int q;
srand(time(0));
q=rand()%4;

if(q==0){
    M[0][1]='O';
}
else if(q==1){
    M[1][2]='O';
}
else if(q==2){
    M[2][1]='O';
}
else{
    M[1][0]='O';
}


}




int main()
{

ofstream rez("dd.txt");

int l, l1;


while(gR)
{
    system("cls");

cout<<endl<<endl;
   for(int i=0; i<3; i++){
        cout<<"\t";
    for(int j=0; j<3; j++){
    cout<<M[i][j]<<" ";
    if(j==2){
        cout<<"\t    esi '+' ,o ten pasirinkimai -> ";
            for(int t=0; t<3; t++)
        cout<<Q[i][t]<<" ";

    }
   }
   cout<<endl;
   }

   system("pause>nul");


   while(true)
   {

   while(true){
   cin>>l1;
   if(l1>0&&l1<10){
    break;
   }
   else{
    cout<<"netinkamas pasirinkimas"<<endl;
   }
   }

   switch(l1){
   case 1:
    l=0;
    break;
   case 2:
    l=1;
    break;
   case 3:
    l=2;
    break;
   case 4:
    l=10;
    break;
   case 5:
    l=11;
    break;
   case 6:
    l=12;
    break;
   case 7:
    l=20;
    break;
   case 8:
    l=21;
    break;
   case 9:
    l=22;
    break;
   }

   if(M[l/10][l%10]=='_')
    {

        M[l/10][l%10]='+';
        system("cls");
        k++;

        break;
    }   else cout<<"\n ten jau rinktis negali!\n\n";

 system("pause>nul");
   }

     if(k>=9)
        {
            gR=false;  cout<<"\n Lygiosios!\n";

        }

    if(M[0][0]=='+'&&M[0][1]=='+'&&M[0][2]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}
    if(M[1][0]=='+'&&M[1][1]=='+'&&M[1][2]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}
    if(M[2][0]=='+'&&M[2][1]=='+'&&M[2][2]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}

    if(M[0][0]=='O'&&M[0][1]=='O'&&M[0][2]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}
    if(M[1][0]=='O'&&M[1][1]=='O'&&M[1][2]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}
    if(M[2][0]=='O'&&M[2][1]=='O'&&M[2][2]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}

    if(M[0][0]=='+'&&M[1][0]=='+'&&M[2][0]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}
    if(M[0][1]=='+'&&M[1][1]=='+'&&M[2][1]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}
    if(M[0][2]=='+'&&M[1][2]=='+'&&M[2][2]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}

    if(M[0][0]=='+'&&M[1][1]=='+'&&M[2][2]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}
    if(M[0][2]=='+'&&M[1][1]=='+'&&M[2][0]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}


    if(M[0][0]=='O'&&M[1][0]=='O'&&M[2][0]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}
    if(M[0][1]=='O'&&M[1][1]=='O'&&M[2][1]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}
    if(M[0][2]=='O'&&M[1][2]=='O'&&M[2][2]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}

    if(M[0][0]=='O'&&M[1][1]=='O'&&M[2][2]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}
    if(M[0][2]=='O'&&M[1][1]=='O'&&M[2][0]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}







    //blokuoja kad nelaimetu VV
    if(k%2==1&&k<9){
        if((M[0][0]+M[0][1]+M[0][2]==253)) { if(M[0][0]!='O') {M[0][0]='O'; k++;} if(M[0][1]!='O') {M[0][1]='O'; k++;} if(M[0][2]!='O') {M[0][2]='O'; k++;}}

    else if(M[1][0]+M[1][1]+M[1][2]==253) { if(M[1][0]!='O') {M[1][0]='O'; k++;} if(M[1][1]!='O') {M[1][1]='O'; k++;} if(M[1][2]!='O') {M[1][2]='O'; k++;}}
    else if(M[2][0]+M[2][1]+M[2][2]==253) { if(M[2][0]!='O') {M[2][0]='O'; k++;} if(M[2][1]!='O') {M[2][1]='O'; k++;} if(M[2][2]!='O') {M[2][2]='O'; k++;}}
    else if(M[0][0]+M[1][0]+M[2][0]==253) { if(M[0][0]!='O') {M[0][0]='O'; k++;} if(M[1][0]!='O') {M[1][0]='O'; k++;} if(M[2][0]!='O') {M[2][0]='O'; k++;}}
    else if(M[0][1]+M[1][1]+M[2][1]==253) { if(M[0][1]!='O') {M[0][1]='O'; k++;} if(M[1][1]!='O') {M[1][1]='O'; k++;} if(M[2][1]!='O') {M[2][1]='O'; k++;}}
    else if(M[0][2]+M[1][2]+M[2][2]==253) { if(M[0][2]!='O') {M[0][2]='O'; k++;} if(M[1][2]!='O') {M[1][2]='O'; k++;} if(M[2][2]!='O') {M[2][2]='O'; k++;}}
    else if(M[0][0]+M[1][1]+M[2][2]==253) { if(M[0][0]!='O') {M[0][0]='O'; k++;} if(M[1][1]!='O') {M[1][1]='O'; k++;} if(M[2][2]!='O') {M[2][2]='O'; k++;}}
    else if(M[0][2]+M[1][1]+M[2][0]==253) { if(M[0][2]!='O') {M[0][2]='O'; k++;} if(M[1][1]!='O') {M[1][1]='O'; k++;} if(M[2][0]!='O') {M[2][0]='O'; k++;}}
    //blokuoja kad nelaimetu ^^
    else if(M[0][1]=='+'&&M[1][2]=='+'&&k==3)   { if(M[0][2]!='+'){M[0][2]='O'; k++;}}
    else if(M[0][0]+M[0][1]+M[0][2]==181) { if(M[0][0]!='+') {M[0][0]='O'; k++;} if(M[0][1]!='+') {M[0][1]='O'; k++;} if(M[0][2]!='+') {M[0][2]='O'; k++;}}
    else if(M[1][0]+M[1][1]+M[1][2]==181) { if(M[1][0]!='+') {M[1][0]='O'; k++;} if(M[1][1]!='+') {M[1][1]='O'; k++;} if(M[1][2]!='+') {M[1][2]='O'; k++;}}
    else if(M[2][0]+M[2][1]+M[2][2]==181) { if(M[2][0]!='+') {M[2][0]='O'; k++;} if(M[2][1]!='+') {M[2][1]='O'; k++;} if(M[2][2]!='+') {M[2][2]='O'; k++;}}
    else if(M[0][0]+M[1][0]+M[2][0]==181) { if(M[0][0]!='+') {M[0][0]='O'; k++;} if(M[1][0]!='+') {M[1][0]='O'; k++;} if(M[2][0]!='+') {M[2][0]='O'; k++;}}
    else if(M[0][1]+M[1][1]+M[2][1]==181) { if(M[0][1]!='+') {M[0][1]='O'; k++;} if(M[1][1]!='+') {M[1][1]='O'; k++;} if(M[2][1]!='+') {M[2][1]='O'; k++;}}
    else if(M[0][2]+M[1][2]+M[2][2]==181) { if(M[0][2]!='+') {M[0][2]='O'; k++;} if(M[1][2]!='+') {M[1][2]='O'; k++;} if(M[2][2]!='+') {M[2][2]='O'; k++;}}
    else if(M[0][0]+M[1][1]+M[2][2]==181) { if(M[0][0]!='+') {M[0][0]='O'; k++;} if(M[1][1]!='+') {M[1][1]='O'; k++;} if(M[2][2]!='+') {M[2][2]='O'; k++;}}
    else if(M[0][2]+M[1][1]+M[2][0]==181) { if(M[0][2]!='+') {M[0][2]='O'; k++;} if(M[1][1]!='+') {M[1][1]='O'; k++;} if(M[2][0]!='+') {M[2][0]='O'; k++;}}
    //

    if(k%2==1&&k<9){
    if(k==1&&M[1][1]!='+') {M[1][1]='O'; k++;}
    else if(((M[0][1]=='+'&&M[2][1]=='+')||(M[1][0]=='+'&&M[1][2]=='+'))&&k==3) {iKrast(); k++;}

    else if(M[2][2]=='+'&&M[0][0]=='+'&&M[0][1]!='O'&&k!=9) {M[0][1]='O'; k++;}
    else if(M[0][2]=='+'&&M[2][0]=='+'&&M[0][1]!='O') {M[0][1]='O'; k++;}
    else if(M[1][1]=='+'&&M[0][2]!='O') {M[0][2]='O'; k++;}
    else if(M[1][1]=='+'&&M[2][0]=='+'&&M[0][2]=='O') {M[0][0]='O'; k++;}
    }
    }

  // Kai jau nieko neliame, tada gali betkur random padeti
if(k%2==1&&k<9){

            int f=keic();
            M[f/10][f%10]='O';
            k++;

    }



cout<<endl<<endl;
   for(int i=0; i<3; i++){
        cout<<"\t";
    for(int j=0; j<3; j++){
    cout<<M[i][j]<<" ";
   }
   cout<<endl;
   }

 if(k>=9)
        {
          //cout<<"\n Lygiosios!\n";
          gR=false;
        }

    if(M[0][0]=='+'&&M[0][1]=='+'&&M[0][2]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}
    if(M[1][0]=='+'&&M[1][1]=='+'&&M[1][2]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}
    if(M[2][0]=='+'&&M[2][1]=='+'&&M[2][2]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}

    if(M[0][0]=='O'&&M[0][1]=='O'&&M[0][2]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}
    if(M[1][0]=='O'&&M[1][1]=='O'&&M[1][2]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}
    if(M[2][0]=='O'&&M[2][1]=='O'&&M[2][2]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}

    if(M[0][0]=='+'&&M[1][0]=='+'&&M[2][0]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}
    if(M[0][1]=='+'&&M[1][1]=='+'&&M[2][1]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}
    if(M[0][2]=='+'&&M[1][2]=='+'&&M[2][2]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}

    if(M[0][0]=='+'&&M[1][1]=='+'&&M[2][2]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}
    if(M[0][2]=='+'&&M[1][1]=='+'&&M[2][0]=='+') {  Xwin++;  gR=false;  cout<<"\n Kryziukai laimi!\n";}


    if(M[0][0]=='O'&&M[1][0]=='O'&&M[2][0]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}
    if(M[0][1]=='O'&&M[1][1]=='O'&&M[2][1]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}
    if(M[0][2]=='O'&&M[1][2]=='O'&&M[2][2]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}

    if(M[0][0]=='O'&&M[1][1]=='O'&&M[2][2]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}
    if(M[0][2]=='O'&&M[1][1]=='O'&&M[2][0]=='O') {  Owin++;  gR=false;  cout<<"\n Nuliukai laimi!\n";}



pas();

}

char r;
cout<<"\n\n\n\n\n  Press any key and 'Enter' to close "; cin>>r;

   return 0;
}

