#include<stdio.h>
int main(void){
    int first; //入力する1つ目の割る数
    int second; //入力する2つ目の割る数
    int range = 30; //走査する数の範囲

    /*** 数値を入力する ***/
    scanf("%d",&first);
    scanf("%d",&second);

    for(int i=1; i<=range; i++){
        if(i%first != 0 && i%second != 0){
                printf("%d\n",i);
        }else if(i%first == 0 && i%second != 0){
                printf("Fizz\n");
        }else if(i%first == 0 && i%second != 0){
                printf("Buzz\n");
        }else if(i%first == 0 && i%second == 0){
                printf("FizzBuzz\n");
        }
    }
    return 0;
}
