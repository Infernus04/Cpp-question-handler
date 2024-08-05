#include <bits/stdc++.h>
using namespace std;

//get BIT 
int getBit(int num , int pos){
    return ((num & (1<<pos)) != 0 );
}

//set BIT
int setBit(int num, int pos){
    return (num | (1<<pos)); 
}

//clear BIT (Takin compliment of original bit then applying AND operator)
int clearBit(int num , int pos){
    int mask = ~(1<<pos);
    return (num & mask);
}

//update BIT (clear the bit at the given position then set the bit to the desired value)
int updateBit(int num , int pos ,int value){
    int mask = ~(1<<pos);
    num = num & mask;
    return (num | (value<<pos));

}

int main(){
    int num,pos;
    cout<<getBit(5, 2)<<endl;

    cout<<setBit(5,1)<<endl;

    cout<<clearBit(5,2)<<endl;

    cout<<updateBit(5,1,1)<<endl;
    return 0;
}