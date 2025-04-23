/*
Create a class RELATION, use Matrix notation to represent a relation. Include member functions to check if the relation is
Reflexive, Symmetric, Anti-symmetric, Transitive. Using these functions check whether the given relation is: Equivalence or Partial Order relation
or None.
*/

#include <iostream>
using namespace std;

class Relation{
public:
    bool Reflexive(int **mat,int len){
        for(int i=0;i<len;++i){
            if(mat[i][i]==0){
                return false;
            }
        }
        return true;
    }

    bool symmetric(int **mat,int len){
        for(int i=0;i<len;++i){
            for(int j=0;j<len;++j){
                if (mat[i][j]==1 && mat[j][i]==0){
                    return false;
                }
            }
        }
        return true;
    }

    bool antisymmetric(int **mat,int len){
        for(int i=0;i<len;++i){
            for(int j=0;j<len;++j){
                if (mat[i][j]==1 && mat[j][i]==1 && i!=j){
                    return false;
                }
            }
        }
        return true;
    }

    bool transitive(int **mat,int len){
        for(int i=0;i<len;++i){
            for(int j=0;j<len;++j){
                if (mat[i][j]==1){
                    for(int k=0;k<len;++k){
                        if(mat[j][k]==1 && mat[i][k]==0){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }

};

int main(){

    int size;
    cout<<"enter the size of the matrix: ";
    cin>>size;

    int **mat= new int*[size];
    for(int i=0;i<size;++i){
        mat[i]=new int[size];
    }

    cout<<"enter the value of the matrix";
    for(int i=0;i<size;++i){
        for(int j=0;j<size;++j){
            cin>>mat[i][j];
        }
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    Relation matrix1;

    bool reflexive=matrix1.Reflexive(mat,size);
    bool transitive=matrix1.transitive(mat,size);
    bool symmetric=matrix1.symmetric(mat,size);
    bool antisymmetric=matrix1.antisymmetric(mat,size);

    if(reflexive && transitive && symmetric){
        cout<<"this matrix is equivalence";
    }
    else if(reflexive && transitive && antisymmetric){
        cout<<"this matrix is partial order realtion";
    }
    else{
        cout<<"none";
    }

    return 0;
}