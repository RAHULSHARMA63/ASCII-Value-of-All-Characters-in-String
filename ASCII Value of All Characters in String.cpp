#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char ch, str[200];
    int i=0, val;
    cout<<"Enter the String: ";
    gets(str);
    cout<<"\nCharacter\t\tASCII Value\n";
    while(str[i])
    {
        ch = str[i];
        val = ch;
        cout<<ch<<"\t\t\t"<<val<<"\n";
        i++;
    }
    cout<<"\n";
    return 0;
}
