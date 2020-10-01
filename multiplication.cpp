#include<iostream>

using namespace std;

int main()

{

int i,n,sum=1, num[100];

cout<< "what is the frequency n ";

cin >> n;

cout<<"input the the set of numbers= ";

for(i=0;i<n;i++)

cin>>num[i];

for(i=0;i<n;i++)

sum*=num[i];

cout<<"the mean is = "<<sum<<endl;

return 0;

}
