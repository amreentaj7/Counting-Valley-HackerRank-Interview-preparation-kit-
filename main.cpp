#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countingvalley(int n, string s){
int tracker=0 , valley=0;
for (int i=0;i<n;i++){
if (s[i] == 'U'){
 tracker++;}
else {
 tracker --;
}
if (tracker==0 && s[i] == 'U'){
valley ++;
}
}
return valley;
}


int main()
{
int n;
cout<<"enter the total number of socks "<<endl;
cin>>n;

string s;
cin>>s;

cout<<countingvalley(n, s);

return 0;
}





