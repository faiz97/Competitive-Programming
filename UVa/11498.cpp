#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	
	int k,n,m,x,y;

	while(scanf("%d",&k), (k || 0)){
		scanf("%d %d",&n,&m);

		while(k--){
			scanf("%d %d",&x,&y);
			
			if(x == n || y == m){
				printf("divisa\n");
			} else if (x < n && y < m){
				printf("SO\n");
			} else if ( x > n && y > m){
				printf("NE\n");
			} else if ( x < n && y > m){
				printf("NO\n");
			} else {
				printf("SE\n");
			}
		}			

	}

	return 0;
}
