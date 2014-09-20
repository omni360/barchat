#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#define random(x) (rand()%x);
using namespace std;

int main(){
	srand((int)time(0));
	int storeArray[20][20];

	cout << endl;

	for (int i = 0; i < 20; i++){
		int j = random(20);
		for (int l = 0; l<j; l++){
			storeArray[i][l] = 1;
		}
		for (int m = j; m<20; m++){
			storeArray[i][m] = 0;
		}
	}
	for (int sj = 19; sj >= 0; sj--){
		for (int si = 0; si<20; si++){
			if (storeArray[si][sj] == 1 || si == 0){
				cout << "¡ö";
			}
			else if (storeArray[si][sj] == 0){
				cout << "¡õ";
			}
		}
		cout << endl;
	}
	return 0;
}