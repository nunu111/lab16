#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
//Write definition of shuffle() using pointer here 
void shuffle(int *a,int *b,int *c,int *d){
	int A[]={*a,*b,*c,*d};
	int num=0;
	for(int i=0;i<10;i++){
		int random=rand()%4;
		if (random ==3){
			num= A[random];
			A[random] = A[random-1];
			A[random-1] = num;
		}
		else {
			num = A[random];
			A[random] = A[random+1];
			A[random+1] = num;
		}
	}
	*a = A[0];
	*b = A[1];
	*c = A[2];
	*d = A[3];
}