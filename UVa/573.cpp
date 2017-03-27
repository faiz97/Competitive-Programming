#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  double h,u,d,f;

  while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f) , h > 0){
    f /= 100;
    f *= u;
    int day = 1;
    double init,after = 0;
    bool finish = false;

    while(!finish){
      if(day > 1 && (u-f) >= 0){
        u -= f;
      }

      init = after + u;
      after = init - d;

      if(init > h){
        printf("success on day %d\n",day);
        finish = true;
      } else if(after < 0){
        printf("failure on day %d\n",day );
        finish = true;
      }
      day++;
    }
  }

  return 0;
}
