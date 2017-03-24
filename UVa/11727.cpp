#include <cstdio>
#include <iostream>

using namespace std;

int main(){

	int TC;
	int counter = 0;

	scanf("%d",&TC);

	while(TC--){
		int input = 3;
		int sal[input],min,max,imin,imax;
		counter++;

		while(input--) {
			scanf("%d",&sal[input]);
		}

		max = sal[0];
		min = sal[0];
		imax = 0;
		imin = 0;

		for(int ii = 1 ; ii < 3 ; ii++){
			if(max <= sal[ii]){
				max = sal[ii];
				imax = ii;
			}

			if(min >= sal[ii]){
				min = sal[ii];
				imin = ii;
			}
		}

		for(int jj = 0; jj < 3; jj++){
			if(jj != imax && jj != imin){
				printf("Case %d: %d\n",counter,sal[jj]);
			}

			if(imax == imin){
					imax = jj++;
					imin = jj++;
			}
		}


	}

	return 0;
}
