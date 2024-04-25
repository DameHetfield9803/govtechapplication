#include <iostream>
#include <cstdio>

int geekout(int n){
    for(int i=0; i < n; ++i){
        if(n % 2 == 0){
            printf("Geek\n");
        }
        else if(n % 3 == 0){
            printf("Out\n");
        }
    }
    return n;
}


auto geekout_char_length(int n2){
    int count = 0;
    for(int i =0; i < n2; ++i){
        if(n2 % 2 ==0 ){
            count +=5;
            std::cout << count;
        }
        else if (n2 % 3 == 0){
            count += 4;
            std::cout << count;
        }
    }
    return count;
}

int main(){
    geekout(2);
    geekout(3);
    return 0;
}