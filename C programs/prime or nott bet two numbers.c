#include <stdio.h>
int checkPrime(int n){
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main(){
	int a, b, check;
	printf("Enter two positive integer such that a<b:\n ");
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		check = checkPrime(i);
		if(check==1){
			printf("%d\t",i);
		}
	}
	return 0;
}
