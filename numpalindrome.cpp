#include<iostream>
using namespace std;

bool isPalindrome(int num)
{
    int original=num;
    int reversed=0;
    while(num>0)
    {
        int digit=num%10;
        reversed=reversed*10+digit;
        num=num/10;
    }

    return original==reversed;
}

bool isPalindrome(string s)
{
    int l=0;
    int r=s.length()-1;
    while(l<=r)
    {
        if(s[l]!=s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    string str;
    cout<<"enter the string: ";
    cin>>str;
    isPalindrome(n) ? cout<<"yes a palindrome  number\n" : cout<<"not a palindrome number\n" ;
    isPalindrome(str) ? cout<<"yes a palindrome string" : cout<<"not a palindrome string" ;
    return 0;
}