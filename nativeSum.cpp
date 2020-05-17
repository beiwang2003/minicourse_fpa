#include<cstdio>
#include<cstdlib>

int main() {
   float tenth=0.1f;
   float count = float(60*60*100*10);
   printf("%f %f %a\n",count,count*tenth,count*tenth);	
   float sum=0;
   long long n=0;
   while(n<1000000) {
     sum+=0.1f;
     ++n;
     if (n<21 || n%36000==0) printf("step=%d expected=%f solution=%f diff=%f\n",n, 0.1f*n, sum, std::abs(0.1f*n-sum));
   }
   return 0;
}
