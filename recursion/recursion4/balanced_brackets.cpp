//Generate balanced brackets using N pairs of round brackets.
// Input N=2 Output-()() (())
// Input N=3 Output =()()(), (())(), ()(()), (()()), ((()))
#include<iostream>

using namespace std;

void generate_brackets(char *out,int n,int index,int open,int close){
    if(index==2*n){
        out[index]='\0';
        cout<<out<<endl;
        return;
    }
    if(open<n){
        out[index]='(';
        generate_brackets(out,n,index+1,open+1,close);
    }
    if(close<open){
        out[index]=')';
        generate_brackets(out,n,index+1,open,close+1);
    }
    return;
}
int main(){
    int n=1;
    char a[1000];
    generate_brackets(a,n,0,0,0);

    return 0;
}