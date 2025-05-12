#include <iostream>
#include <vector>
using namespace std;


void zeroMat(vector<vector<int>> & mat){
    bool row = false;
    bool col = false;
    int m = mat.size();
    int n = mat[0].size();

    for(int i = 0 ; i < m ; i++){
        if(mat[0][i] == 0) {
            col = true;
            break;
        }
    }

    for(int i = 0 ; i < n ; i++){
        if(mat[i][0] == 0) {
            row = true;
            break;
        }
    }


    for(int i = 1 ; i < m ; i++){
        for(int j = 1 ; j < n ; j++){
            if(mat[i][j] == 0){
                mat[0][j] = 0;
                mat[i][0] = 0;
            }
        }
    }

    for(int i = 1 ; i < m ; i++){
        for(int j = 1 ; j < n ; j++){
            if(mat[i][0] == 0 || mat[0][j] == 0){
                mat[i][j] = 0;
            }
        }
    }

    if(row){
        for(int i = 0 ; i < n ; i++){
            mat[i][0] = 0;
        }
    }

    if(col){
        for(int i = 0 ; i < m ; i++){
            mat[0][i] = 0;
        }
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

    cout << "The Original Matrix before Transformation : " << endl;
    for(auto i : mat){
        for(int j : i){
            cout << j << " ";
        }cout << endl;
    }


    zeroMat(mat);

    cout << "The Matrix after Transformation : " << endl;
    for(auto i : mat){
        for(int j : i){
            cout  << j << " ";
        }cout << endl;
    }

    return 0;
}