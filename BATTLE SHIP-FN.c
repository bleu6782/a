#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int NUMP1=0,NUMP2=0;

char landp1[400][400],landp2[400][400],player1[10],player2[10],landp12[400][400],landp22[400][400];
int width1,width2,length1,length2,bombs1[4],bombs2[4];
int win=0,win2,pc;

void delay(clock_t a)
{
    clock_t start;
    start  = clock();
    while(clock()-start<a)
    {

    }
}
void land(int i,int j,char arr[i][j])
{int x,y,z;
printf("   ");
for(z=0;z<j;z++){printf("%c ",65+z);}printf("\n");
    for(x=0;x<i;x++)
    { printf("%d",x+1);if(x<9){printf("  ");}else printf(" ");
    for(y=0;y<j;y++)
    {
        printf("%c ",arr[x][y]);
    }
        printf("\n");
    }
}





int main ()







{

system("color b1");

FILE *saves,*L1,*W1,*L2,*W2,*p1,*p2,*p12,*p22,*bomb101,*bomb201,*bomb102,*bomb202,*bomb103,*bomb203,*name1,*name2,*np1,*np2,*shiphits;
int numships1=0,numships2=0;
int aaa=0,saved;
char game;
int CH;
int SH;

while (aaa==0)
{if((game!=49 && game!=50) ||  saved==0 )
{
    printf("\n\n--------------------------------------------------------------------u\n");
     printf("--------------------------------------------------------------------u\n");
     printf("--------------------------------------------------------------------u---u\n");
     printf("--------------------------------------------------------------------u---u\n");
     printf("--------------------------------------------------ooo---------------u---u\n");
     printf("--------------------------------------------oooo$$$$$$$$o-----------u---u\n");
     printf("-----------------------------------ooooooooooooo$$$$$$$$$$$$o-------u---u\n");
     printf("---------------------------------ooooooooooooooo$$$$$$$$$$$$o-------u---u\n");
     printf("----------------------------------oooooooooooooooo$$$$$$$$$$$$$$o---uuuuu                       BATTLE SHIP\n");
     printf("-----------------------------------ooooooooooo++++++o$$$$$$$$$$$$$$$ouuuu\n");
     printf("------------------------------------ooooooo+++++++++++o$$$$$$$$$$$$$$$$$$ooooooooo          1-new game (two player)\n");
     printf("-------------------------------------ooooooo+++++++++++++o$$$$$$$$$$$$$$$ooooooooo          2-saved game\n");
     printf("--------------------------------------oooooo+++++++++++++++++o$$$$$$$$$$$$$$ooooooo         3-new game  (single player)\n");
     printf("---------------------------------------ooooo++++++++++++++++++++o$$$$$$$$$$$$$$$oooo\n");
     printf("----------------------------------------oooo++++++++++++++++++++++++o$$$$$$$$$$$$$$oo\n");
     printf("-----------------------------------------oooo+++++++++++++++++++++++++++o$$$$$$$$$$$oo\n");
     printf("-------------------------------------------ooooo+++++++++++++++++++++++++++++o$$$$$oo\n");
     printf("--------------------------------------------ooooooo+++++++++++++++++++++++++++++oooo\n");
     printf("---------------------------------------------ooooooooo++++++++++++++++++++++++++++++o\n");
     printf("----------------------------------------------oooooooooooo+++++++++++++++++++++++++++++ooo\n");
     printf("-----------------------------------------------oooooooooooooo++++++++++++++++++++++++++++++ooo\n");
     printf("------------------------~.......~....~----------ooooooooooooooooooo+++++++++++++++++++++++oooo\n");
     printf("-------------------~.......................~------oooooooooooooooooooooooooooooooooooooooooooo\n");
     printf("---------------~.................................~--oooooooooooooooooooooooooooo~.....~.....~\n");
     printf("------------~........................................~ooooooooooooooooooo~......................~\n");
     printf("----------~...............................................~....~...~................................~....~\n");
     printf("\n\n");



    game=getch();
}
	switch (game)
	    {
        case '1':
            {
               saved=0;
               aaa=1;
               pc=0;
               system("cls");
            }break;
        case '2':
            {
            	saves=fopen("d://saves.bin", "rb");
            	fread(&CH,sizeof(int),1,saves);
            	fclose(saves);
               if(CH==0)
        {aaa=0;
        saved=0;
        pc=0;
        system("cls");
        printf("we found no saved game!!!\a\n");

        } else {aaa=1;  saved=1; system("cls");}
            }break;
        case '3' :
            {
               aaa=1;
               saved=0;
               pc=1;
               system("cls");
            }break;
        default:
            {
              aaa=0;
              system("cls");
            }break;
	    }
}
if(pc==1)
{
    player2[10]="PC";
}

    system("color f5");

if(saved==0)

{
    char str[15]="BATTLE SHIP",str2[50]="made by: azade izadi & yasaman khosravi fard";
int counter,i,j;
printf("               ");
for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
        delay(60);
    }printf("\n               ");
    for(j=0;str2[j]!='\0';j++)
    {
        printf("%c",str2[j]);
        delay(60);
    }printf("\n\n\n\n\n\n");
      printf("          welcome to battle ship !!!!\n");
printf("          please enter the name of  player:\n");
gets(player1); printf("                    hello %s !\n",player1);
int mode;
if(pc==1)
{
    mode=1;
}
else{mode=2;}

for(counter=0;counter<mode;counter++)
{
    system("color f5");


   if(counter!=0)  {printf("                   welcome to battle ship !!!!\n");
printf("                     please enter the name of  player:\n");}

       if(counter!=0){scanf("%s",player2); printf("hello %s !\n",player2);}
printf ("                    you have 1500 coins to buy your staff to get ready for the battle!");
 printf("\n                    -------------------------------------------------------------\n");
       printf("                     sea area:\n                   ######################################################\n");
       printf("                            100-200 block                    500coins        #\n                            201-300 block                    750coins        #\n                            301-400 block                    1000coins       #\n");
       printf("                   ######################################################\n");

  int i1,j1,a,b=0;
  //getting area of sea for battle
  while(b==0)
  {printf("                    please enter the width of battle area:\n");
  scanf("%d",&i1);
  printf("                    please enter the length of battle area:\n");
  scanf("%d",&j1);
  if(counter==0)
  {
      width1=i1;
      length1=j1;
  } else{width2=i1;
      length2=j1;}
if (i1>=65 || j1>=65)
{
    printf("invalid input!\a\n");
    b=0;
}else
   {a=j1*i1;
   if(a>400 || a<100)
  {
    printf("                  area out of range\n it must be  between 100 - 400 blocks!!\n\a");
    b=0;
  }else {b=1;}}
  }
  int money1;
  if(a>=100 && a<=200)
  { money1=1000;}else;
  if(a>=201 && a<=300)
  {
    money1=750;
  }else;
  if(a>=301 && a<=400)
  {
      money1=500;
  }else;
  char g1[i1][j1];
int q,p;
for(q=0;q<i1;q++)
{
    for(p=0;p<j1;p++)
    {
        g1[q][p]='?';
    }
}

 system("cls");

 printf("   now you should buy some bombs to attack your enemy !! \n----------------------------------------------------------------------\n");
  printf("######################################################\n");
       printf(" bomb types:\n######################################################\n");
       printf("    1 block bomb                    150coins         #\n    9 block bomb                    400coins         #\n    25 block bomb                   800coins         #\n");
       printf("######################################################\n");

  printf("hydro bomb      1 bl0ck will be exploded          150 coins      enter 'h' to buy\nnitro bomb      4 blocks will be exploded         400 coins      enter 'n' to buy\natomic bomb     25 blocks will be exploded        800 coins      enter 'a' to buy\n");
  printf("you have %d coins\n",money1);
  printf("enter the bomb types you want to buy:\n");
 int count1=0,k1,y1,H1=0,n1=0,a1=0,left1,q1=0;
int bomb1[3];
while(money1>=150)
{   printf("your money:  %d\n",money1);
    char c;

    printf("enter bomb type to buy:     (if you dont want more bombs press 'E')  \n");
    scanf("%s",&c);

    count1++;
    switch (c)
    {
    case 'h':
    case 'H':
        { if(H1==1)
        {
            printf("you have bought this bomb type already!\n");
        }else
            {money1=money1-150;
        y1=0;
        H1=1;}}
        break;
    case 'n':
    case 'N':
        {
            if(n1==1)
        {
            printf("you have bought this bomb type already!\n");
        } else {if(money1>=400)
            {money1=money1-400;
        y1=0;
        n1=1;}else printf("your money is insufficient!!\n");}}
        break;
    case 'a':
    case 'A':
        {  if(a1==1)
        {
            printf("you have bought this bomb type already!\n\a");
        } else {if(money1>=800)
           {money1=money1-800;
        y1=0;
        a1=1;}else printf("your money is insufficient!!\n");}}
        break;
    case 'E':
    case 'e':
       {k1=money1;
       money1=0;
       y1=1;} break;
    default :
        {printf("invalid input!\a\n"); }
       break;}
        if(money1<150)
        {
            printf("your money is insufficient for buying more bombs!!\n");
        }
        if(money1>=150 && money1<400 && H1==1)
        {
            left1=money1;
            money1=0;
            q1=1;

        }else {q1=0;}
        if((money1>=150 && money1<400) && (H1==1 && n1==1))
        {
            left1=money1;
            money1=0;
            q1=1;
        }else {q1=0;}

}



if(counter==0)
{
    bombs1[0]=H1; bombs1[1]=n1; bombs1[2]=a1;
} else{bombs2[0]=H1; bombs2[1]=n1; bombs2[2]=a1;}
if(y1==1)
    {money1=k1;}else;
    if(q1==1)
    {
        money1=left1;
    }else;

    system("cls");



  //getting ship directions
printf("   you have 10 ships in all:\n   you have 4 single block ships , 3 two block ships ,2 three block ships and a four block ship\n");
printf("----------------------------------------------------------------------\n enter the position of single block ships:\n");

int c=0,count2=1,w;
for(w=0;w<4;w++)
    { land(i1,j1,g1); printf("single block %d :\n",count2);

while(c==0)
{    int x,y;
    printf("x:\n");
    scanf("%d",&x);
    printf("y:\n");
    scanf("%d",&y);
    if((x<=i1 && y<=j1) && g1[x-1][y-1]!='s')
    {   g1[x-1][y-1]='s';
     c=1;
      }
        else
    {printf("invalid position!\n\a");
    c=0;}
}
count2++;
c=0;
system("cls");
}

printf(" enter the position and direction  of two block ships:\n");
printf("ATTENTION! 1-the position you enter is for the first block of your ship\n           2-to input directions:\n up       u\n down     d\n left     l\n right    r\n");
int t,c1=0,count3=1,h1,v1;
for(t=0;t<3;t++)
{ land(i1,j1,g1);  printf("two block %d :\n",count3);
    while(c1==0)
    {

      char dir;
      printf("x:\n");
      int x;
      scanf("%d",&x);
      printf("y:\n");
      int yy;
      scanf("%d",&yy);
      printf("direction:\n");

      scanf("%s",&dir);
switch (dir)
       {
       case 'u':
       case 'U':
        {v1=-1;  h1=0;}
        break;
       case 'd':
       case 'D':
        {v1=1;  h1=0;}
        break;
       case 'r':
       case 'R':
        {v1=0;  h1=1; }
        break;
       case 'l':
       case 'L':
        {v1=0;   h1=-1;}
        break;
        default :
        {printf("unknown direction\a\n");
        c1=0;}
        break;

       }
       if(dir=='r'  || dir=='d'  || dir=='u' || dir=='l'  || dir=='L' || dir=='U' || dir=='D' ||  dir=='R')
      {

      if   ( ((((x<=i1 && yy<=j1) && (g1[x-1][yy-1]!='s')) && (g1[x+v1-1][yy+h1-1]!='s')) &&  ((x+v1<=i1 && x+v1>=1) && (yy+h1<=j1 && yy+h1>=1) ))  )
    {   g1[x-1][yy-1]='s';
        g1[x+v1-1][yy+h1-1]='s';

     c1=1;
      }
        else
    {printf("invalid direction!\n\a");
    c1=0;}
    }else { printf("invalid direction!\n\a"); c1=0;}

}
    count3++;
    c1=0;
    system("cls");
}
system("cls");
printf(" enter the position and direction  of three block ships:\n");
printf("ATTENTION! 1-the position you enter is for the first block of your ship\n           2-to input directions:\n up       u\n down     d\n left     l\n right    r\n");
int bb,count4=1,h2,h3,v2,v3,b1=0;

for(bb=0;bb<2;bb++)
{
   land(i1,j1,g1); printf("three block %d :\n",count4);
    while( b1==0)
    {
    char dir;
      printf("x:\n");
      int x;
      scanf("%d",&x);
      printf("y:\n");
      int y;
      scanf("%d",&y);
      printf("direction:\n");
      scanf("%s",&dir);
       switch (dir)
       {
       case 'u':
       case 'U':
        {v2=-1; v3=-2; h2=0; h3=0;}
        break;
       case 'd':
       case 'D':
        {v2=1; v3=2; h2=0; h3=0;}
        break;
       case 'r':
       case 'R':
        {v2=0; v3=0; h2=1; h3=2;}
        break;
       case 'l':
       case 'L':
        {v2=0; v3=0;  h2=-1; h3=-2;}
        break;
        default :
        {printf("unknown direction\a\n");
        b1=0;}
        break;
       }
    if(dir=='r'  || dir=='d'  || dir=='u' || dir=='l' || dir=='L' || dir=='U' || dir=='D' || dir=='R')


       {if (( y+h3<=j1 && y+h3>=1 && y+h2<=j1 && y+h2-1>=1  && x+v2<=i1  && x+v2>=1 && x+v3<=i1 &&  x+v3>=1  && x<=i1 && y<=j1) && (g1[x-1][y-1]!='s') && (g1[x+v2-1][y+h2-1]!='s') && (g1[x+v3-1][y+h3-1]!='s'))

	   {   g1[x-1][y-1]='s';
        g1[x+v2-1][y+h2-1]='s';
        g1[x+v3-1][y+h3-1]='s';
     b1=1;
      }
        else
    {printf("invalid direction!\n\a");
    b1=0;}
       }else { printf("invalid direction!\n\a"); b1=0; }
    }
    count4++;
    b1=0;
system("cls");;
}
system("cls");

printf(" enter the position and direction  of four block ship:\n");
printf("ATTENTION! 1-the position you enter is for the first block of your ship\n           2-to input directions:\n up       u\n down     d\n left     l\n right    r\n");
int d1=0,h4,h5,h6,v4,v5,v6;

printf("four block :\n");
while(d1==0)
    { land(i1,j1,g1);
    char dir;
      printf("x:\n");
      int x;
      scanf("%d",&x);
      printf("y:\n");
      int y;
      scanf("%d",&y);
      printf("direction:\n");
      scanf("%s",&dir);
       switch (dir)
       {
       case 'u':
       case 'U':
        {v4=-1; v5=-2; v6=-3; h4=0; h5=0; h6=0;}
        break;
       case 'd':
       case 'D':
        {v4=1; v5=2; v6=3; h4=0; h5=0; h6=0;}
        break;
       case 'r':
       case 'R':
        {v4=0; v5=0; v6=0; h4=1; h5=2; h6=3;}
        break;
       case 'l':
       case 'L':
        {v4=0; v5=0; v6=0; h4=-1; h5=-2; h6=-3;}
        break;
        default :
        {printf("unknown direction\a");
        d1=0;}
        break;

       }
       if(dir=='r'  || dir=='d'  || dir=='u' || dir=='l'  || dir=='L' || dir=='U' || dir=='D' ||  dir=='R')

       {if ((   x+v6>=1 && x+v5>=1 && x+v4>=1 && x+v6<=i1 && x+v5<=i1 && x+v4<=i1 && x<=i1 && y<=j1 && y+h4<=i1 && y+h5<=i1 && y+h6<=i1 && y+h4>=1 &&  y+h5>=1 &&  y+h6>=1) && (g1[x-1][y-1]!='s') && (g1[x+v4-1][y+h4-1]!='s') && (g1[x+v5-1][y+h5-1]!='s') && (g1[x+v6-1][y+h6-1]!='s'))

	      {   g1[x-1][y-1]='s';
        g1[x+v4-1][y+h4-1]='s';
        g1[x+v5-1][y+h5-1]='s';
        g1[x+v6-1][y+h6-1]='s';
     d1=1;
      }
        else
    {printf("invalid direction!\n\a");
    d1=0;}}else{   printf("invalid direction!\n\a");  d1=0;}
system("cls");
    }



if(counter==0 && pc==0)
{printf("\n\n           well done %s !! \nnow let the second player enter the information\n\n\n\n\n",player1);}

else;
if(counter==0)

{int u,s;
for(u=0;u<width1;u++)
{
    for(s=0;s<length1;s++)
    {

            landp1[u][s]=g1[u][s];
            landp12[u][s]='?';
    }
}
}
else if(counter==1)
    {int u,s;
for(u=0;u<width2;u++)
{
    for(s=0;s<length2;s++)
    {

            landp2[u][s]=g1[u][s];
            landp22[u][s]='?';
    }
}}}}

while (player1[NUMP1] != '\0')
    NUMP1++;

while (player2[NUMP2] != '\0')
    NUMP2++;

//inserting saved data
if(saved==1)
{ W1=fopen("d://width1.bin","rb");
L1=fopen("d://length1.bin","rb");
W2=fopen("d://width2.bin","rb");
L2=fopen("d://length2.bin","rb");
p1=fopen("d://p1.bin","rb");
p12=fopen("d://p12.bin","rb");
p2=fopen("d://p2.bin","rb");
p22=fopen("d://p22.bin","rb");
name1=fopen("d://name1.bin","rb");
name2=fopen("d://name2.bin","rb");
bomb101=fopen("d://bomb101.bin","rb");
bomb102=fopen("d://bomb102.bin","rb");
bomb103=fopen("d://bomb103.bin","rb");
bomb201=fopen("d://bomb201.bin","rb");
bomb202=fopen("d://bomb202.bin","rb");
bomb203=fopen("d://bomb203.bin","rb");
np1=fopen("d://numname1.bin","rb");
np2=fopen("d://numname2.bin","rb");
shiphits=fopen("d://shiphits.bin","rb");


	fread(&numships1,sizeof(int),1,shiphits);
    fread(&numships2,sizeof(int),1,shiphits);

int r;
int ccc;

fread(&SH,sizeof(int),1,W1);
width1=SH;
fread(&SH,sizeof(int),1,L1);
length1=SH;
fread(&SH,sizeof(int),1,W2);
width2=SH;
fread(&SH,sizeof(int),1,L2);
length2=SH;

fread(&SH,sizeof(int),1,bomb101);
bombs1[0]=SH;
fread(&SH,sizeof(int),1,bomb102);
bombs1[1]=SH;
fread(&SH,sizeof(int),1,bomb103);
bombs1[2]=SH;
fread(&SH,sizeof(int),1,bomb201);
bombs2[0]=SH;
fread(&SH,sizeof(int),1,bomb202);
bombs2[1]=SH;
fread(&SH,sizeof(int),1,bomb203);
bombs2[2]=SH;
fread(&SH,sizeof(int),1,np1);
NUMP1=SH;
fread(&SH,sizeof(int),1,np2);
NUMP2=SH;

int i,j;
for(i=0;i<width1;i++)
{
    for(j=0;j<length1;j++)
        {
            fread(&CH,sizeof(char),1,p1);
            landp1[i][j]=CH;
            fread(&CH,sizeof(char),1,p12);
			landp12[i][j]=CH;
        }
}
j=0; i=0;
for(i=0;i<width2;i++)
{
    for(j=0;j<length2;j++)
        {
            fread(&CH,sizeof(char),1,p2);
            landp2[i][j]=CH;
            fread(&CH,sizeof(char),1,p22);
            landp22[i][j]=CH;
        }}

        for(ccc=0;ccc<NUMP1;ccc++){
	fread(&CH, sizeof(char),1,name1);
player1[ccc]=CH;}
for(ccc=0;ccc<NUMP2;ccc++){
	fread(&CH, sizeof(char),1,name2);
	player2[ccc]=CH;
}

fclose(name1);
fclose(name2);
fclose(p2);
fclose(p22);
fclose(p1);
fclose(p12);
fclose(L1);
fclose(W1);
fclose(L2);
fclose(W2);
fclose(bomb101);
fclose(bomb102);
fclose(bomb103);
fclose(bomb201);
fclose(bomb202);
fclose(bomb203);
fclose(np1);
fclose(np2);
fclose(shiphits);

}





//single player mode
if(pc==1)
{

    int h1,h2,h3,h4,h5,h6,v1,v2,v3,v4,v5,v6;


srand(time(0));
width2=	11+rand()%10;
length2= 11+rand()%10;
int q,p;
for(q=0;q<width2;q++)
{
    for(p=0;p<length2;p++)
    {
        landp2[q][p]='?';
        landp22[q][p]='?';
    }
}

int pcarea;
pcarea=length2*width2;
if(pcarea>=100 && pcarea<=200)
{
    bombs2[0]=1;
    bombs2[1]=0;
    bombs2[2]=1;
}
if(pcarea>200 && pcarea<=300)
{
    bombs2[0]=1;
    bombs2[1]=1;
    bombs2[2]=0;
}
if(pcarea>300 && pcarea<=400)
{
    bombs2[0]=0;
    bombs2[1]=1;
    bombs2[2]=0;
}
int x,y,a=0,b=0,c=0,d=0,aa,bb,cc,dd;


for(aa=0;aa<4;aa++)
{   while(a==0)
    { srand(time(0));
     x=1+rand()%width2;
     y=1+rand()%length2;
       if(landp2[x-1][y-1]!='s')
       {
        landp2[x-1][y-1]='s';
        a=1;
       }else a=0;

    }
}
// u=1 d=2 r=3 l=4
for(bb=0;bb<3;bb++)
{ int d,v,h,vv,hh;
srand(time(0));
d=1+rand()%4;
switch (d)
{
case 1:
    { v1=-1;
      h1=0;
      v=1;
      vv=-1;
      h=0;
      hh=0;
    }break;
case 2:
    {
        v1=1;
        h1=0;
        v=0;
        vv=-1;
        h=0;
        hh=0;
    }break;
case 3:
    { v1=0;
    h1=1;
    v=0;
    vv=0;
    h=0;
    hh=-1;

    }break;
case 4:
    {
        v1=0;
        h1=-1;
        v=0;
        vv=0;
        h=-1;
        hh=-1;
    }
}
    while(b=0)
    {
       srand(time(0));
     x=v+1+rand()%(width2+vv);
     y=h+1+rand()%(length2+hh);
        if   (   landp2[x-1][y-1]!='s' && landp2[x+v1-1][y+h1-1]!='s'   )
    {   landp2[x-1][y-1]='s';
        landp2[x+v1-1][y+h1-1]='s';

     b=1;
      }else b=0;

    }
}

for(cc=0;cc<2;cc++)
{
    int d,h,v,hh,vv;
srand(time(0));
d=1+rand()%4;
switch (d)
{
case 1:
    {
       v2=-1; v3=-2; h2=0; h3=0;
        v=0;
        vv=-2;
        h=0;
        hh=0;

    }break;
case 2:
    {
       v2=1; v3=2; h2=0; h3=0;
      v=2;
      vv=-2;
      h=0;
      hh=0;
    }break;
case 3:
    {
      v2=0; v3=0; h2=1; h3=2;
      v=0;
    vv=0;
    h=0;
    hh=-2;
    }break;
case 4:
    {
        v2=0; v3=0; h2=-1; h3=-2;
        v=0;
        vv=0;
        h=-2;
        hh=-2;
    }
}
while(c=0)
{
    srand(time(0));
     x=1+rand()%width2;
     y=1+rand()%length2;
     if ( landp2[x-1][y-1]!='s' && landp2[x+v2-1][y+h2-1]!='s' && landp2[x+v3-1][y+h3-1]!='s')

	   {   landp2[x-1][y-1]='s';
        landp2[x+v2-1][y+h2-1]='s';
        landp2[x+v3-1][y+h3-1]='s';
     c=1;
      }
        else c=0;


}

}




    int ddd;
srand(time(0));
ddd=1+rand()%4;
switch (ddd)
{ int v,h,vv,hh;
case 1:
    {
       v4=-1; v5=-2; v6=-3; h4=0; h5=0; h6=0;
        v=0;
        vv=-3;
        h=0;
        hh=0;
    }break;
case 2:
    {
       v4=1; v5=2; v6=3; h4=0; h5=0; h6=0;
       v=3;
      vv=-3;
      h=0;
      hh=0;
    }break;
case 3:
    {
       v4=0; v5=0; v6=0; h4=1; h5=2; h6=3;
       v=0;
    vv=0;
    h=0;
    hh=-3;
    }break;
case 4:
    {
        v4=0; v5=0; v6=0; h4=-1; h5=-2; h6=-3;
        v=0;
        vv=0;
        h=-3;
        hh=-3;
    }
}
   while(d=0)
{
     srand(time(0));
     x=1+rand()%width2;
     y=1+rand()%length2;

   if ( (landp2[x-1][y-1]!='s') && (landp2[x+v4-1][y+h4-1]!='s') && (landp2[x+v5-1][y+h5-1]!='s') && (landp2[x+v6-1][y+h6-1]!='s'))

	      {   landp2[x-1][y-1]='s';
        landp2[x+v4-1][y+h4-1]='s';
        landp2[x+v5-1][y+h5-1]='s';
        landp2[x+v6-1][y+h6-1]='s';
     d=1;
      }
        else d=0;}






}else;




system("cls");
if(pc==1)
{
    printf("              note :   in single player mode games wont be saved");
}else;
printf("              press any key to start the battle . . .\n");

char e;
int starter=getch(e);
if(starter>0)
{



int winner=0,counter2=0;



while(winner<=20)
{ system("cls");
system("color 1f");
printf("               number of  hit ships in %s's land:   %d\n               number of  hit ships in %s's land:   %d\n",player1,numships1,player2,numships2);
printf("                    the one who destroys all the enemy's ships will win  \n\n\n\n\n\n                    be careful that you enter the position of the center block of destroying blocks while throwing your bomb\n\n\n ");
if(pc==0)
{printf("           %s's land\n",player2);
printf("           %s's bombs:      \n",player2);}
else if(pc==1)
{
    printf("             PC land\n");
    printf("             PC bombs:      \n");}


int f1;
for(f1=0;f1<3;++f1)
{
    int p=bombs2[f1];
    if(p==1 && f1==0)
    {
      printf("          hydro  ");
    }else;
    if(p==1 && f1==1)
    {
      printf("nitro  ");
    }else;
    if(p==1 && f1==2)
    {
      printf("          atomic  ");
    }else;

}printf("\n");


    int a,b,c;

    printf("                       ");
for(c=0;c<length2;c++){printf("%c ",65+c);}printf("\n");
    for(a=0;a<width2;a++)
    { printf("                    %d",a+1);if(a<9){printf("  ");}else printf(" ");
    for(b=0;b<length2;b++)
    {
        printf("%c ",landp22[a][b]);
    }
        printf("\n");
    }

printf("\n\n\n\n\n");

printf("           %s's land\n",player1);
printf("           %s's bombs:      \n",player1);

int f2;
for(f2=0;f2<3;++f2)
{
    int p=bombs1[f2];
    if(p==1 && f2==0)
    {
      printf("          hydro  ");
    }else;
    if(p==1 && f2==1)
    {
      printf("          nitro  ");
    }else;
    if(p==1 && f2==2)
    {
      printf("          atomic  ");
    }else;

}printf("\n");

    int aa=0 ,bb=0,cc=0;

    printf("                       ");
for(cc=0;cc<length1;cc++){printf("%c ",65+cc);}printf("\n");
    for(aa=0;aa<width1;aa++)
    { printf("                    %d",aa+1);if(aa<9){printf("  ");}else printf(" ");
    for(bb=0;bb<length1;bb++)
    {
        printf("%c ",landp12[aa][bb]);
    }
        printf("\n");
    }


printf("\n\n\n\n");
if((counter2%2)==0)
{


     printf("             %s's turn:\n",player1);
printf("     enter the position of bomb and then the type of bomb:\n");
int c=0;



       while(c==0)
   {   char btype;
    printf("x:\n");
int x;
scanf("%d",&x);
printf("y:\n");
int y;
scanf("%d",&y);

printf("bomb type:\n");
scanf("%s",&btype);

int flag,flag1;


switch (btype)
    {
    case 'a':
    case 'A':
        { if(bombs1[2]==1)
        {
            flag1=1;
        }else {flag1=2;}
          if(x<=width2-2 && x>=3 && y<=length2-2 && y>=3)
          {
              flag=1;
          }else flag=0;
        }break;
    case 'h':
    case 'H':
        { if(bombs1[0]==1)
        {
            flag1=1;
        }else {flag1=2;}

          if(x<=width2 && x>=1 && y<=length2 && y>=1)
          {
              flag=1;
          }else flag=0;
        }break;
    case 'n':
    case 'N':
        { if(bombs1[1]==1)
        {
            flag1=1;
        }else {flag1=2;}

          if(x<=width2-1 && x>=2 && y<=length2-1 && y>=2)
          {
              flag=1;
          }else flag=0;
        }break;


    }



   if(flag==1)
   {


     switch (btype)
    {
    case 'a':
    case 'A':
        {int i,j;
        for(i=(x-3);i<(x+2);i++)
        {
            for(j=(y-3);j<(y+2);j++)
            {
                landp22[i][j]=(landp2[i][j]=='s'?'*':' ');
                if(landp22[i][j]=='*'){numships2++;}else;

            }
        }
          }break;
    case 'h':
    case 'H':
        {
           landp22[x-1][y-1]=(landp2[x-1][y-1]=='s' ? '*' :' ');
           if(landp22[x-1][y-1]=='*'){numships2++;}else;


        }break;
    case 'n':
    case 'N':
        {
            int i,j;
        for(i=(x-2);i<(x+1);i++)
        {
            for(j=(y-2);j<(y+1);j++)
            {
                landp22[i][j]=(landp2[i][j]=='s'?'*':' ');
                if(landp22[i][j]=='*'){numships2++;}else;

            }
        }

        }break;


    }






     c=1;
   }else if(flag==0){printf("       invalid position!     try again\a\n");    c=0;}
   if(flag==3)
   {
       printf("                    you  haven't bought that bomb!!\a\n");    c=0;
   }
   }


}



else if((counter2%2)==1)

{ if(pc==0)
     {printf("             %s's turn:\n",player2);
printf("     enter the position of bomb and then the type of bomb:\n");
int c=0;
while(c==0)
{ char btype;
    printf("x:\n");
int x;
scanf("%d",&x);
printf("y:\n");
int y;
scanf("%d",&y);
printf("bomb type:\n");
scanf("%s",&btype);

int flag,flag1;


switch (btype)
    {
    case 'a':
    case 'A':
        { if(bombs2[2]==1)
        {
            flag1=1;
        }else {flag1=2;}

          if(x<=width1-2 && width1>=3 && y<=length1-2 && length1>=3)
          {
              flag=1;
          }else {flag=0;}
        }break;
    case 'h':
    case 'H':
        { if(bombs2[0]==1)
        {
            flag1=1;
        }else {flag1=2;}

          if(x<=width1 && x>=1 && y<=length1 && y>=1)
          {
              flag=1;
          }else {flag=0;}
        }break;
    case 'n':
    case 'N':
        { if(bombs2[1]==1)
        {
            flag1=1;
        }else {flag1=2;}

          if(x<=width1-1 && x>=2 && y<=length1-1 && y>=2)
          {
              flag=1;
          }else {flag=0;}
        }break;


    }



   if(flag==1)
   {
     switch (btype)
    {
    case 'a':
    case 'A':
        {
            int i,j;
        for(i=(x-3);i<(x+2);i++)
        {
            for(j=(y-3);j<(y+2);j++)
            {
                landp12[i][j]=(landp1[i][j]=='s'?'*':' ');
                if(landp12[i][j]=='*'){numships1++;}else;

            }
        }
        }break;
    case 'h':
    case 'H':
        {
           landp12[x-1][y-1]=(landp1[x-1][y-1]=='s' ? '*' :' ');
           if(landp12[x-1][y-1]=='*'){numships1++;}else;


        }break;
    case 'n':
    case 'N':
        {  int i,j;
        for(i=(x-2);i<(x+1);i++)
        {
            for(j=(y-2);j<(y+1);j++)
            {
                landp12[i][j]=(landp1[i][j]=='s'?'*':' ');
                if(landp12[i][j]=='*'){numships1++;}else;
            }
        }
        }
        break;
       }
       c=1;
   }
   else if(flag==0){printf("       invalid position!   try again\a\n");    c=0;}
   if(flag1==2)
   {
       printf("                    you  haven't bought that bomb!!\a\n");  c=0;}

}

}
else if(pc==1)
{     int x,y,t,yy=0;
while(yy==0)
{
    srand(time(0));
    t=rand()%3;
    if(bombs2[t]==0)
    {
        yy=0;
    } else yy=1;

} int v,h,vv,hh;
  switch (t)
  {
  case 0:
    {
      v=0;
      vv=0;
      h=0;
      hh=0;
    }break;
  case 1:
    {
       vv=-2;
       hh=-2;
       v=1;
       h=1;
    }break;
  case 2:
    { h=3;
    v=3;
    hh=-6;
    vv=-6;

    }break;
  }



    srand(time(0));
    x=1+v+rand()%(width1+vv);
    y=1+h+rand()%(length1+hh);

    switch (t)
    {
    case 0:
        {
           landp12[x-1][y-1]=(landp1[x-1][y-1]=='s' ? '*' :' ');
           if(landp12[x-1][y-1]=='*'){numships1++;}else;

        }break;
    case 1:
        {
           int i,j;
        for(i=(x-2);i<(x+1);i++)
        {
            for(j=(y-2);j<(y+1);j++)
            {
                landp12[i][j]=(landp1[i][j]=='s'?'*':' ');
                if(landp12[i][j]=='*'){numships1++;}else;
            }
        }
        }break;
    case 2:
        {
            int i,j;
        for(i=(x-3);i<(x+2);i++)
        {
            for(j=(y-3);j<(y+2);j++)
            {
                landp12[i][j]=(landp1[i][j]=='s'?'*':' ');
                if(landp12[i][j]=='*'){numships1++;}else;

            }
        }
        }break;
    }

}
}




if((counter2%2)==0)
{
   if(numships2==20)
   {
       winner=100;
       win2=1;
   }else {winner=numships2;}
}else if((counter2%2)==1)
{   if(numships1==20)

       {winner=100;
       win2=2;
   }else {winner=numships1;}

}

//saving procedure
if(pc==0)
{

shiphits=fopen("d://shiphits.bin","wb");
W1=fopen("d://width1.bin","wb");
L1=fopen("d://length1.bin","wb");
W2=fopen("d://width2.bin","wb");
L2=fopen("d://length2.bin","wb");
p1=fopen("d://p1.bin","wb");
p2=fopen("d://p2.bin","wb");
p12=fopen("d://p12.bin","wb");
p22=fopen("d://p22.bin","wb");
bomb101=fopen("d://bomb101.bin","wb");
bomb102=fopen("d://bomb102.bin","wb");
bomb103=fopen("d://bomb103.bin","wb");
bomb201=fopen("d://bomb201.bin","wb");
bomb202=fopen("d://bomb202.bin","wb");
bomb203=fopen("d://bomb203.bin","wb");
name1=fopen("d://name1.bin","wb");
name2=fopen("d://name2.bin","wb");
np1=fopen("d://numname1.bin","wb");
np2=fopen("d://numname2.bin","wb");
saves=fopen("d://saves.bin","wb");
int ll=1;

fwrite(&ll, sizeof(int), 1, saves);
fwrite(&numships1, sizeof(int), 1, shiphits);
fwrite(&numships2, sizeof(int), 1, shiphits);
fwrite(&bombs1[0], sizeof(int), 1, bomb101);
fwrite(&bombs1[1], sizeof(int), 1, bomb102);
fwrite(&bombs1[2], sizeof(int), 1, bomb103);
fwrite(&bombs2[0], sizeof(int), 1, bomb201);
fwrite(&bombs2[1], sizeof(int), 1, bomb202);
fwrite(&bombs2[2], sizeof(int), 1, bomb203);

fwrite(&NUMP1, sizeof(int), 1,np1);
fwrite(&NUMP2, sizeof(int), 1,np2);

fwrite(&width1, sizeof(int), 1,W1);
fwrite(&length1, sizeof(int), 1,L1);
fwrite(&width2, sizeof(int), 1,W2);
fwrite(&length2, sizeof(int), 1,L2);

int ccc=0,ddd=0;
for(ccc=0;ccc<NUMP1;ccc++)
{
	fwrite(&player1[ccc], sizeof(char),1,name1);
}
for(ccc=0;ccc<NUMP2;ccc++)
	{
	fwrite(&player2[ccc], sizeof(char),1,name2);
}

for(ccc=0;ccc<width1;ccc++)
{
    for(ddd=0;ddd<length1;ddd++)
    {

        fwrite(&landp1[ccc][ddd], sizeof(char),1,p1);
        fwrite(&landp12[ccc][ddd], sizeof(char),1,p12);

    }
}
ccc=0; ddd=0;
for(ccc=0;ccc<width2;ccc++)
{
    for(ddd=0;ddd<length2;ddd++)
    {

        fwrite(&landp2[ccc][ddd], sizeof(char),1,p2);
        fwrite(&landp22[ccc][ddd], sizeof(char),1,p22);

    }
}
fclose(shiphits);
fclose(name1);
fclose(name2);
fclose(p2);
fclose(p22);
fclose(p1);
fclose(p12);
fclose(L1);
fclose(W1);
fclose(L2);
fclose(W2);
fclose(bomb101);
fclose(bomb102);
fclose(bomb103);
fclose(bomb201);
fclose(bomb202);
fclose(bomb203);
fclose(np1);
fclose(np2);
fclose(saves);
}else;
counter2++;}





system("cls");
if(win2==1 || win2==2)

{ int lll=0;
    saves=fopen("d://saves.bin","wb");
    fwrite(&lll , sizeof(int) , 1 , saves );
    fclose(saves);
    if(win2==1)
{
    printf("\n\n\n\n\n\n\n\n                           well done %s !!!                            you won !!!\n",player1);
}
else if(win2==2)
{
    printf("\n\n\n\n\n\n\n\n                          well done %s !!!                            you won !!!\n",player2);

}
}
}



return 0;

}

