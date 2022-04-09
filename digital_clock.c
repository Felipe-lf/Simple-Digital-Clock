#include <stdio.h>
#include<windows.h>

int main(){
int h,m,s;
int d = 1000;

printf("Set time: \n");
scanf("%d%d%d",&h,&m,&s);

if (h > 12 || m > 60 || s > 60){
    printf("\nERROR");
    exit(0);
}

while(1){         // Represent a infinit loop, anything inside is going to repeat itself to infinity

    s++;
    if(s>59){
        m++;
        s=0;
    } else if (m > 59){
        h++;
        m=0;
    } else if (h > 12){
        h = 1;
    }

    printf("\nClock: ");
    printf("\n%02d:%02d:%02d",h,m,s);
    Sleep(d);
    system("cls");

    
    }

}

