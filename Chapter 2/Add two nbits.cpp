#include <iostream>
#include <algorithm>
using namespace std;

// Given Two nbits binary strings
// Return a (n+1)bits binary string that gets the addition of both
string add_nbits(string num1, string num2){
    string result = "";
    char carry = '0';
    for(int i=num1.length()-1;i>=0;i--){
        int val = int(carry - '0') + int(num1[i] - '0') + int(num2[i] - '0');
        switch(val){
            case 0:
                result += '0';
                carry = '0';
                break;
            case 1:
                result +='1';
                carry = '0';
                break;
            case 2:
                result +='0';
                carry = '1';
                break;
            case 3:
                result += '1';
                carry = '1';
                break;
        }
    }
    result += carry;
    reverse(result.begin(),result.end());
    return result;
}

int main(){

    //Print
    cout<<add_nbits("0011","0111")<<" "<<add_nbits("0101","1010")<<" "<<add_nbits("1111","1111")<<endl;
}
