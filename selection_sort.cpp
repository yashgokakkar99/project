#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[5] = {15,20,36,1,25};
    int n=5;
    cout<<"Before selection sort : "<<endl;
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[j]<array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    cout<<"After selection sort : "<<endl;
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}