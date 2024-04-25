#include <stdio.h>

int geekout(int n){
    if(n%2 == 0){
        printf("Geek\n");
    }
    else if(n%3 == 0){
        printf("Out\n");
    }
    else{
        printf("");
    }
}

int main(){
    geekout(2);
    geekout(3);
    return 0;
}