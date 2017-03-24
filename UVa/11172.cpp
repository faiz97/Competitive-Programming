#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int TC,a,b;

	scanf("%d",&TC);	
	while(TC--){
		scanf("%d %d",&a,&b);
		a > b ? printf(">\n") : a < b ? printf("<\n") : printf("=\n");	
	}


	return 0;
}
