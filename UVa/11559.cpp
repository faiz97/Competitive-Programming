#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  int n,b,h,w;
  while(scanf("%d %d %d %d",&n,&b,&h,&w) != EOF){
    int price,pay,min;
    pay = 0;
    min = b;

    for(int ii = 0; ii < h; ii++){
      scanf("%d",&price);
      int kamar;

      for(int jj = 0; jj < w; jj++){
        scanf("%d",&kamar);
        if(kamar >= n && (n*price) <= b){
          pay = n*price;
        }
      }

      if(pay != 0 && pay <= min){
        min = pay;
      }
    }

    if(pay != 0){
      pay = min;
      printf("%d\n",pay);
    } else {
      printf("stay home\n");
    }
  }
  return 0;
}
