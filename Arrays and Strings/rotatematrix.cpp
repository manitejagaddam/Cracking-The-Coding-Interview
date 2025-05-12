#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void rotate(vector<vector<int>> & mat){
    for(int i = 0 ; i < mat.size() ; i++){
        for(int j = 0 ; j < i ; j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    for(auto i : mat){
        reverse(i.begin(), i.end());
    }

}


int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n, 0));
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> mat[i][j];
        }
    }

    cout << "The Original Matrix : " << endl;

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << mat[i][j] << " ";
        }cout << endl;
    }

    rotate(mat);


    cout << "The Rotated matrix : " << endl;
    for(auto i : mat){
        for(int j : i){
            cout << j << " ";
        }cout << endl;
    }

    return 0;
}