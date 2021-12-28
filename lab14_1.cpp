#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
    
    return 0;
 
    return 0;
}


void stat(const double A[],int N,double B[]){
    float sum=0,GM=1.0,HM=0,Max=0,Min=A[0];
    float sum2;
    for(int i=0;i<N;i++)
        sum=sum+A[i];
    
    B[0]=sum/(double)N;
    float mean =sum/(float)N;
    for(int i=0;i<N;i++){
        sum2+=pow(((float)A[i]-mean),2);
        GM = GM * A[i]; 
        HM=HM+(1.0/A[i]);
    }
    for(int i=0;i<N;i++){
        if(Max<A[i])
            Max = A[i];
        if(A[i] < Min)
            Min = A[i];

    }
   
    B[1]=sqrt(sum2/(N));
    B[2]=pow(GM,(double)1/N);
    B[3]=N/HM;
    B[4]=Max;
    B[5]=Min;
}