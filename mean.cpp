/*This is only used to calculate the mean of the set of a given number only;

NOTE; it does not calculate for a given k, frequencies e.g 6,7,4,5,3 which is (6+7+4+5+3)/5=5 */

#include<iostream>

using namespace std;

int main()

{

int i,n,sum=0,mean,num[100];

cout<< "what is the frequency n, ?";

cin >> n;

cout<<"input the the set of numbers= ";

for(i=0;i<n;i++)

cin>>num[i];

for(i=0;i<n;i++)

sum+=num[i];

mean=sum/n;

cout<<"the mean is = "<<mean<<endl;

return 0;

}
