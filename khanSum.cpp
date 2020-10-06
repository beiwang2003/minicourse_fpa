#include<cstdio>
#include<cstdlib>

int main() {
   float tenth=0.1f;
   float count = float(60*60*100*10);
   printf("%f %f %a\n",count,count*tenth,count*tenth);	
   float sum=0;
   long long n=0;
   float c=0;
   while (n < 1000000) {
     float y = 0.1f - c;
     float x = sum + y;
     c = (x - sum) - y;
     sum = x;
     ++n;
     if (n<21 || n%36000==0) printf("step=%llu expected=%f solution=%f diff=%f\n",n, 0.1f*n, sum, std::abs(0.1f*n-sum));
   }
   return 0;
}



