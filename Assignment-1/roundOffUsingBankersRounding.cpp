#include<bits/stdc++.h>
using namespace std;

void removeChars(string &digit,int n)
{
    while(n+1<=digit.size())
    {
        digit[n+1]='\0';
        n++;
    }
}
//C211009 Adib Ahbab
int main()
{
    string digit,roundoffDigit;
    int n,i=0;
    cout<<"Enter the number & required significant digit (X 0 to exit): "<<endl;
    while(true)
    {
        cin>>digit;
        cin>>n;
        if(digit=="X" ||digit=="x" || n==0)break;
        if(digit[0]=='0')
        {
            while(digit[i]=='0')
            {
                if(digit[i+1]=='.')i++;
                i++;
            }
            i--;
        }
        n+=i;
        if(digit[n+1]>'5')
        {
            digit[n]= ++digit[n];
            removeChars(digit,n);
        }
        else if(digit[n+1]=='5')
        {
            if(int(digit[n+2])%2==0) {}
            else
            {
                digit[n]= ++digit[n];
            }
            removeChars(digit,n);
        }
        else
        {
            removeChars(digit,n);
        }
        cout<<digit;
        i=0;
    }
}
