/*
Create a Matrix class. Write a menu-driven program to perform following Matrix operations (exceptions should be
thrown by the functions if matrices passed to them are incompatible and handled by the main() function):

a. Sum

b. Product

c. Transpose
*/

#include <iostream>
#include <stdexcept>
using namespace std;

class Matrix{
    int rows,cols;
    int **mat;

public:
    void input(int row,int col){
            rows=row;
            cols=col;

        mat = new int *[rows];
        for(int i=0;i<rows;++i){
            mat[i]= new int[cols];
        }

        cout<<"enter the elemtents of the matrix: ";
        for(int i=0;i<rows;++i){
            for(int j=0;j<cols;++j){
                cin>>mat[i][j];
            }
        } 
    }

    void display(){
        cout<<"matrix entered\n";
        for(int i=0;i<rows;++i){
            for(int j=0;j<cols;++j){
                cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    void sum(const Matrix &a){
        if(rows!=a.rows || cols!=a.cols){
            throw invalid_argument("matrix dimension must match for sum");
        }
        for(int i=0;i<rows;++i){
            for(int j=0; j<cols;++j){
                mat[i][j]+=a.mat[i][j];
            }
        }
    }

    void product(const Matrix &a){
        if(cols!=a.rows){
            throw invalid_argument("matrix dimension must match for product");
        }
        int **temp=new int*[rows];
        for(int i=0;i<rows;++i){
            temp[i]=new int[a.cols]();
        }

        for(int i=0;i<rows;++i){
            for(int j=0;j<a.cols;++j){
                temp[i][j]=0;
                for(int k=0;k<cols;k++){
                    temp[i][j]+=mat[i][k]*a.mat[k][j];
                }
            }
        }

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < a.cols; ++j) {
                mat[i][j] = temp[i][j];
            }
        }
    }

    void transpose(){

        int **temp=new int*[rows];

        for(int i=0;i<rows;++i){
            temp[i]=new int[cols]();
        }

        for(int i=0;i<rows;++i){
            for(int j=0;j<cols;++j){
                temp[i][j]=mat[j][i];
            }
        }

        for(int i=0; i<rows;++i){
            for(int j=0;j<cols;++j){
                mat[i][j]=temp[i][j];
            }
        }

    }

    ~Matrix(){
        for(int i=0;i<rows;++i){
            delete[] mat[i];
        }
        delete[] mat;
    }
};


int main(){

    int choice;
    int r1,c1,r2,c2;
    char x='x';
    do{
        cout<<"choose operation from the list :\n";
        cout<<"1. sum of the matrix\n";
        cout<<"2. product of the matrix\n";
        cout<<"3. transpose of the matrix\n";
        cout<<"4. exit\n";
        cout<<"enter the operation: ";
        cin>>choice;
        try{
            switch(choice){
                case 1:{
                    cout<<"enter the dimension of the matrix 1: ";
                    cin>>r1;
                    cin>>c1;
                    Matrix mat1;
                    mat1.input(r1,c1);
                    mat1.display();
                    cout<<"enter the dimension of the matrix 2: ";
                    cin>>r2;
                    cin>>c2;
                    Matrix mat2;
                    mat2.input(r2,c2);
                    mat2.display();
                    cout<<"the sum of the matrix is : ";
                    Matrix sum_mat;
                    mat1.sum(mat2);
                    mat1.display();
                    break;
                }
                case 2:{
                    cout<<"enter the dimension of the matrix 1: ";
                    cin>>r1;
                    cin>>c1;
                    Matrix mat1;
                    mat1.input(r1,c1);
                    mat1.display();
                    cout<<"enter the dimension of the matrix 2: ";
                    cin>>r2;
                    cin>>c2;
                    Matrix mat2;
                    mat2.input(r2,c2);
                    mat2.display();
                    cout<<"the product of the matrix is : ";
                    mat1.product(mat2);
                    mat1.display();
                    break;
                }
                case 3:{
                    cout<<"enter the dimension of the matrix 1: ";
                    cin>>r1;
                    cin>>c1;
                    Matrix mat1;
                    mat1.input(r1,c1);
                    mat1.display();
                    cout<<"the transpose of the matrix is : ";
                    mat1.transpose();
                    mat1.display();
                    break;
                }
                case 4:{
                    cout<<"exiting the program";
                    break;
                }
                default: {
                    cout<<"this is not vaild";
                }
            }    
        } catch (const exception &e) {
            cerr << "Error: " << e.what() << endl;
        }
    }while(choice!=4);


    return 0;
}