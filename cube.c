#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <sys/ioctl.h>

                                                   double t,
                                               C,u,b,e,I=0,x,y,
                                              z,a,c,d,f,*o,*v,P=(
                                             M_PI/180),w,h,W,H,D[8
                                             ][3];short X,Y,l,S[4]
                                             ,N,*L,F[6][4];int main
                                             (){printf   ("\e[2J\e"
                                              "[?25l"      );ioctl(
                   0,TIOCGWINSZ,&S)                      ;W=(w=S[1
               ])/2;C=(u=(H=(h=S[0])/2)            /2.2)*.3/10.40
             ;for(l=0;l<8;l++){D[l][0]=(Y          =l>>2)?u:-u;F
           [Y+2][Y=(Y?c++:y++)]=l;D[l][1]=        (Y=l>>1&1)?u:-u
         ;F[Y][Y=(Y?a++:z++)]=l;D[l][2]=(Y        =l&1)?u:-u;F[Y+4
       ][Y=(Y?d++:f++)]=l;}for(X=0;X<8;X++         ){Y=F[X][2];F[X]
      [2]=F[X][3];F[X][3]=Y;}for(;!usleep                (102103);){
     printf("\e[1;1H");;H+=(cos(I+=.1)>       0?C:         -C);a=cos
    (t=(cos(I/2)+.5)*5*P     );b=sin(        t);c=cos     (t=(cos(I+
    4.5)+.5)*3*P);d=                        sin(t);e=cos(t=(cos(I+2
    )+.5)*P);f=sin(                         t);for(l=0;l<8;l++){x=D[
   l][0];y=D[l][1]                          ;z=D[l][2];D[l][0]=x*c*
   e+y*(b*d*e+a*f                            )+z*(b*f-a*d*e);D[l][
  1]=-x*c*f+y*(a*                             e-b*d*f)+z*(a*d*f+
  b*e);D[l][2]=x                                 *d+y*(-b*c)+z
  *a*c;}for(Y=0;
  Y<h;(Y++)){for
  (X=0;X<w;X++){
  for(N=0,d=0;N++
  <6&&!d;z=1){L=F
   [N-1];for(l=0,
   e=0;l<4;(e+=D[
   L[l++]][1]));if
    (e>=0){for(l=0;
    l<4&&z;l++){u=((
    (v=D[L[l<3?l+1:0]])[     0]+W)-(a
     =(o=D[L[l]])[0]+W))*(Y-(b=o[2]+H))
      -(X-a)*(v[2]+H-b);;if(l>0&&!((u>0&&
        t>0)||(u<0&&t<0)))z=0;t=u;}}else{z
         =0;}d=z;}printf(d?"\e[10%1$dm%2$s"
           "\e[0m":"%2$s",(N+3)%7+1,"\x20"
              );}}a++;}X=F[0][0];b+=c-d+1
               ;if(!(v[1]||v[2])&&X*Y<
                   w*h)t=cos(I/2);}

// gcc cube.c -lm -o cube

