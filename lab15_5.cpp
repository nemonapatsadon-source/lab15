#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 

void shuffle(int *a, int *b, int *c, int *d) {
    int temp[] = {*a, *b, *c, *d};
    int n = 4;

    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int hold = temp[i];
        temp[i] = temp[j];
        temp[j] = hold;
    }

    *a = temp[0];
    *b = temp[1];
    *c = temp[2];
    *d = temp[3];
}