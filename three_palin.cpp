using namespace std;
#include <bits/stdc++.h>
int isp(string s)
{
    int n= s.length();
    if(n==1)
    {
        return 1;
    }
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            return 0;
        }
    }
    return 1;
}
void fun(string s)
{
    string temps;
    for(size_t i =1;i<=s.size();i++)
    {
        
        for(size_t j =0;j<i;j++)
        {
            temps.push_back(s[j]);
        }
        
        if(isp(temps))
        {
            for(size_t y=i+1;y<s.size();y++)
            {
                string temp2;
                string temp3;
                for(size_t j =i;j<y;j++)
                {
                    temp2.push_back(s[j]);
                }
                for(size_t j =y;j<s.size();j++)
                {
                    temp3.push_back(s[j]);
                }
                if(isp(temp2) && isp(temp3))
                {
                    cout<<temps <<endl;
                    cout<<temp2 <<endl;
                    cout<<temp3<<endl;
                    return;
                }
                temp2.clear();
                temp3.clear();
                
            }
            
            
        }    
        temps.clear(); 
    }
    cout<<"Impossible";
}
int main()
{
    int n =0;
	cin>>n;
    for(int i =0;i<n;i++)
{
    string s;
    cin>>s;
    fun(s);
    
}
    return 0;
}
