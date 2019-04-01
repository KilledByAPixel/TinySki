#include<windows.h>// -+TINY SKI+-  
#include<iostream>// By Frank Force 
#include<ctime>   //  ski.3d2k.com  
#define S SetConsoleCursorPosition  
#define K GetStdHandle(-11)//  O....
#define I U.dwCursorPosition//  O...
#define GO S(K,I)//..O           O..
#define D E(K,&U);//..O    \^\    O.
#define A std::cout<<//O           O
#define N(o)!(rand()%(o))//       O.
#define G(o)(1&GetKeyState(o)>>16)  
#define E GetConsoleScreenBufferInfo
#define R COORD i={o-1,I.Y-11};S(K,i
void O(int _){while(_--)A(N(9)?'*': 
'.');}int main(){_:short s=72,k=1,i=
70,w=11,h=0,o=36,a[11][2],*g=*a,m,e=
-1;while(w--)A'\n';srand(int(time(0)
));while(++w<12||1[g]>=o&&*g<o){O(k)
;A'O';for(m=i;m--;)A(w%100?' ':'-');
CONSOLE_SCREEN_BUFFER_INFO U;A'O';O(
s-k-i);if(w%10==0)A' '<<w/10;D{R);}A
". .";GO;A'\n';o+=m=G(39)-G(37);D{R)
;}A(m?m<0?"/^/":"\\^\\":"|^|");*g++=
k;*g=i+k;GO;h=k<1?1:s<=k+i?-1:N(50)?
N(2)*2-1:h;k+=N(2)*h;Sleep(w<99?50-w
/3:16);N(5)?e=i<-25*e*N(i-15)||25<i*
e&&N(35-i)?-e:e,k-=e*(N(2)*k||s<k+i+
e),i+=e:1;g=a[w%11];}A"\n"<<w*.1-1.1
<<" meters!";while(!G(13));goto _;}
