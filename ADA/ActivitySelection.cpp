#include<bits/stdc++.h>
using namespace std;
static bool cmp(pair<int,int> &a,pair<int,int>&b){
    return a.second<b.second;
}

int main(){
int n;
cout<<"Enter the no. of activities\n";
cin>>n;
map<int,char>m;
vector<pair<int,int>>p(n);
    cout<<"Enter the meeting\n";
for (int i = 0; i < n; i++)
{
    cin>>p[i].first>>p[i].second;
    cin>>m[p[i].first];
}
sort(p.begin(),p.end());
int i=0;
vector<pair<int,int>>ans;
int prev=INT_MIN;
for (int i = 0; i < n; i++)
{
    if(p[i].first>prev){
        ans.push_back(p[i]);
        prev=p[i].second;
        }
}
for (int i = 0; i < ans.size(); i++)
{
    cout<<m[ans[i].first]<<" , ";
}
return 0;
}