#include<bits/stdc++.h>
using namespace std;

string add(string a,string b)
{
    int carry = 0;
    string s;
    
    int lena = a.size() - 1;
    int lenb = b.size() - 1;
    int sum=0;
    while(lena >= 0 || lenb >= 0 || carry > 0)
    {
        int numA=(lena>=0)?(a[lena]-'0'):0;
        int numB=(lenb>=0)?(b[lenb]-'0'):0;
        
        sum = numA + numB + carry;
        int digit = sum % 10;
        carry = sum / 10;
        
        s.push_back(digit + '0');
        
        lena--;
        lenb--;
    }
    
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;
    return 0;
}