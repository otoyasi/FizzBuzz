include<stdio.h>
int main(void){
    int a;
    int b;
    int c;

    /*** 数値を入力する ***/
    scanf("%d",&a);
    scanf("%d",&b);
    
    for(int i=1; i<=30; i++){
	c = i;
    	if(c%a != 0 && c%b != 0){
    		printf("%d\n",c);
    	}else if(c%a == 0 && c%b != 0){
    		printf("Fizz\n");
    	}else if(c%b ==0 && c %a != 0){
    		printf("Buzz\n");
    	}else if(c % a ==0 && c % b == 0){
        	printf("FizzBuzz\n");
        }
    }
    return 0;
}
