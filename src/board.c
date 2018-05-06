#include "board.h";
#include <iostream>

using namespace std;


void Run_W(char deck[8][8]){
char n1, temp;
int n3, n4, i=0;
board_print(deck);
while(1){
cout « "Put coordinates (Expl: e 2 4):\n";
cin » n1; cin » n3; cin » n4;
n3--; n4--;
if (n1=='a'){i=0;}
if (n1=='b'){i=1;}
if (n1=='c'){i=2;}
if (n1=='d'){i=3;}
if (n1=='e'){i=4;}
if (n1=='f'){i=5;}
if (n1=='g'){i=6;}
if (n1=='h'){i=7;}
//printf("\n\ni=%d\n\n",i);
//if (n1!=n2) cout « "Error";
//printf("\n\ndeck[i][n3]=%d\n\n",deck[i][n3]);
//printf("\n\ndeck[i][n4]=%d\n\n",deck[i][n4]);
if ((deck[n3][i]=='p')||(deck[n3][i]=='P')&&(deck[n4][i]==' ')){
temp=deck[n3][i];
deck[n3][i]=deck[n4][i];
deck[n4][i]=temp;
}
if ((deck[n3][i]=='p')&&(deck[n4][i]!=' ')){
temp=deck[n3][i];
deck[n3][i]=' ';
deck[n4][i]=temp;
}
//system("CLS");
board_print(deck);
}
}

void Run_B(char deck[8][8]){
char n1, temp;
int n3, n4, i=0;
board_print(deck);
while(1){

cout « "Put coordinates (Expl: e 2 4):\n";
cin » n1; cin » n3; cin » n4;
n3--; n4--;
if (n1=='a'){i=0;}
if (n1=='b'){i=1;}
if (n1=='c'){i=2;}
if (n1=='d'){i=3;}
if (n1=='e'){i=4;}
if (n1=='f'){i=5;}
if (n1=='g'){i=6;}
if (n1=='h'){i=7;}
//printf("\n\ni=%d\n\n",i);
//if (n1!=n2) cout « "Error";
//printf("\n\ndeck[i][n3]=%d\n\n",deck[i][n3]);
//printf("\n\ndeck[i][n4]=%d\n\n",deck[i][n4]);
if ((deck[n3][i]=='p')||(deck[n3][i]=='P')&&(deck[n4][i]==' ')){
temp=deck[n3][i];
deck[n3][i]=deck[n4][i];
deck[n4][i]=temp;
}
if ((deck[n3][i]=='p')&&(deck[n4][i]!=' ')){
temp=deck[n3][i];
deck[n3][i]=' ';
deck[n4][i]=temp;
}
//system("CLS");
board_print(deck);
}
}

void start_game(char deck[8][8]){
int n;
cout « "Who turns first:\n"
« "1 - white\n"
« "2 - back\n";
cin » n;
switch(n){
case 1 : system("CLS"); Run_W(deck); break;
case 2 : system("CLS"); Run_B(deck); break;
default: printf("\n Error \n");
}
}
