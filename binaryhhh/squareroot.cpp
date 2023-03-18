#include <iostream>
using namespace std;
long long int normalnum(int n)
{
    int s=0;
    int e=n-1;
    int mid=s+((e-s)/2);
    long long int ans=-1;
    while(s<e){
        long long int squaree=mid*mid;

        if(n==squaree){
            return mid;
        }
        else if(squaree>n){
            
            e=mid-1;
        }
        else if(squaree <n){
            ans=mid;
            s=mid+1;
        }
        mid=s+((e-s)/2);
    }  
    return ans; 
}

double precisionn(int num,int precision,int n){
    double factor=1;
    double ans=num;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int temp=normalnum(n);
    cout<<"Ans without precision "<<temp<<endl;
    cout<<"Ans with precision "<<precisionn(temp,3,n);

    return 0;
}