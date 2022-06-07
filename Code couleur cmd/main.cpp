#include <iostream>
#include <windows.h>
using namespace std;

//mon code couleur pour cmd @zebscode
/*
0 = Noir
1 = Bleu
2 = Vert
3 = Aqua
4 = Rouge
5 = violet
6 = Jaune
7 = Blanc
8 = Gris
9 = bleu clair
A = vert clair
B = Aqua clair
C = Rouge clair
D = violet clair
E = jaune clair
F = Blanc brillant
*/
void color(int t,int f)
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(H,f*16+t);
}
void gotoxy(int x, int y)
{
   HANDLE hConsoleOutput;
   COORD dwCursorPosition;
   //cout.flush();
   dwCursorPosition.X = x;
   dwCursorPosition.Y = y;
   hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}
void cadre (int x1 ,int x2 ,int y1 ,int y2,int c )
{
    int i;
    color(c,0);
    for (i=x1;i<=x2;i++)
    {
        gotoxy(i,y1);

        cout << "-";
         gotoxy(i,y2);
        cout << "-";
    }
    for (i=y1;i<=y2;i++)
    {
        gotoxy(x1,i);
        cout << "|";
         gotoxy(x2,i);
        cout << "|";
    }
     gotoxy(x1,y1);
    cout << "-";
     gotoxy(x2,y1);
    cout << "-";
     gotoxy(x1,y2);
    cout << "-";
     gotoxy(x2,y2);
    cout << "-";

}
int main()
{
    cadre(25,100,2,30,6);
    gotoxy(28,5);
    cout<<"entrer le nombre de valeur de votre tableau: ";
    int n;
    cin>>n;
    cadre(25,20,32,9,6);
    gotoxy(28,35);
    cout<<"votre valeur entrer est: "<<n;


    return 0;
}
