#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
srand(time(0));
int billo=1+rand()%10;
int i;
int guess;
for(i=0;i<3;i++){
printf("guess the number 1 to 10 :\n");
scanf("%d",&guess);
if(guess==billo)
{
    printf("you guessed it RIGHT :%d\n",billo);
    printf("WHAT A TUKKA, GREAT!\n");
    exit(0);
}
else if(billo !=guess && i==2){
    printf("tumse na ho payega rhene do!\n");
    printf("the number was :%d",billo);

}
else if(billo !=guess && i<2){
    printf("CHAL 1 AUR TRY KARLE\n");
    }
    
}
}
