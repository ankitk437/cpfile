//miller rubin test
#include<bits/stdc++.h>

using namespace std;

int binexp1(int a, int b, int m){
	int result = 1;
	while(b>0){
		if(b & 1){
			result = (result  * 1LL * a) % m;
		}
		a = (a * 1LL * a) % m;
		b >>= 1;
	}
	return result;
}


void millertest(int n)
{ 
  int lo=log(n);
    lo*=lo;
    int ntest =n-1;
    int r,d;
    while(ntest%2==0){
     r+=1;
     ntest/=2;
    

    }
    d=ntest;

   int it=min(n-2,lo);
  for(int j=0;j<=it;j++){
     int x= binexp1(it,d,n);
   if(x == 1 || x == n -1) 
        continue ;
    for(int i=0;i<r;){
        x= (x%n)*(x%n) % n;
        if(x == n-1) 
            continue ; }
    cout<<"composite";
    return;
    
    

  }
  cout <<"prime";


}

int main(){
	
millertest(561);


}