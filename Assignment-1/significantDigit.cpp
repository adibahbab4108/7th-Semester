#include<bits/stdc++.h>
using namespace std;


int codeByAdib(string &digit)
{
    int sigDig=0,midZero=0;
    for(auto i=0; i<digit.size(); i++)
    {
        if(digit[i]=='.')
        {
            sigDig=0;
            midZero=0;
            if(digit[0]!='0')
            {
                sigDig=digit.size()-1;
                break;
            }
            else
            {
                while(digit[i]=='0' || digit[i]=='.')i++;
                sigDig=digit.size()-i-1;
            }
        }
        else
        {
            if(digit[i]=='0')
            {
                if(sigDig>0)midZero++;
                continue;
            }
            else
            {
                if(midZero>0)sigDig=midZero+sigDig;
                sigDig++;
            }
        }
    }
    return sigDig;
    //ID C211009 - Adib Ahbab
}
int main()
{
    cout<<"Enter digit ( Ctrl+Z to exit ): "<<endl;
    string digit;
    while(cin>>digit)
    {

        cout<< codeByAdib(digit)<<endl;
    }
}
