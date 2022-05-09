#include <iostream>
using namespace std;

int main(){
	int n,m;
	int a[n][m];
	cin >> n >>m;
	for ( int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	
	for ( int x=0; x<n; x++){
		for (int y=0; y<m; y++){
			cout << "a[" << x << "][" << y << "]: ";
			cout << a[x][y] << endl;
		}
	}
	return 0;
}

/*
int main() {
    cout << "Welcome to the Edit Distance Program!" << endl;

    string word1, word2;
    cout << "Enter first word: ";
    cin >> word1;
    cout << "Enter second word: ";
    cin >> word2;

    cout << "Words: " << word1 << " and " << word2 << endl;
    return 0;
}
*/