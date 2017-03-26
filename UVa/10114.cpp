#include <iostream>
#include <cstdio>

using namespace std;

int main(){

int dur,rec;
double dp,loan,carV;

  while(scanf("%d %lf %lf %d",&dur,&dp,&loan,&rec), dur >= 0){
    double depr[101];
    carV = dp + loan;

    for(int ii = 0; ii < rec; ii++){
      int index = 0;
      double temp = 0;
      scanf("%d %lf",&index,&temp);
      for (int jj = index; jj <= dur; jj++ ){
        depr[jj] = temp;
      }
    }

    int counter = 0;
    double monthly = loan/dur;
    while(counter <= dur){
      if(counter > 0){
        loan -= monthly;
      }
      carV -= (depr[counter]*carV);

      if(loan < carV){
        if(counter != 1){
          printf("%d months\n",counter);
        } else {
          printf("%d month\n",counter);
        }
        counter = dur;
      }

      counter++;
    }

  }

  return 0;
}
