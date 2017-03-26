#include <iostream>
#include <cstdio>

using namespace std;

int main (){

  int TC,counter;
  counter = 0;
  scanf("%d",&TC);
  while(TC--){
    int scary,maxspeed,scarryc,speed;
    scarryc = 0;
    maxspeed = 0;
    scanf("%d",&scary);
    while(scarryc < scary){
      scanf("%d",&speed);
      if(scarryc == 0 || maxspeed < speed){
        maxspeed = speed;
      }
      scarryc++;
    }
    counter++;
    printf("Case %d: %d\n",counter,maxspeed);
  }

  return 0;
}
