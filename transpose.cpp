#include <iostream>
using namespace std;

class sparse {
    int a[20][20], s[20][3], tra[20][20], r=0, c=0, h=0;
public:
      void accept() {
        int i, j;
        cout << "Enter the no of rows and columns: ";
        cin >> r >> c;
        cout << "Enter the elements of matrix rowwise:\n";
        for(i = 0; i < r; i++) 
        {
            for(j = 0; j < c; j++) 
            {
                cin >> a[i][j];
            }
        }
        
    }

    void sparseconvert() 
    {
        int i, j, m = 1;
        s[0][0] = r;
        s[0][1] = c;
        h=0;
        for(i = 0; i < r; i++) 
        {
            for(j = 0; j < c; j++) 
            {
                if(a[i][j] != 0) 
                {
                    s[m][0] = i;
                    s[m][1] = j;
                    s[m][2] = a[i][j];
                    m++;
                    h++;
                }
            }
        }
        s[0][2] = h;
        cout << "**SPARSE MATRIX**\n";
        for(i = 0; i <= h+1; i++) 
        {
            for(j = 0; j < 3; j++) 
            {
                cout << s[i][j] << "  ";
            }
            cout << "\n";
        }
    }

    void display() 
    {
        cout << "ENTERED MATRIX\n";
        for(int i = 0; i < r; i++) 
        {
            for(int j = 0; j < c; j++) 
            {
                cout << a[i][j] << "  ";
            }
            cout << "\n";
        }
    }

    void transpose() 
    {
        int i, j, b;
        for(i = 1; i <= h; i++) 
        {
            b = s[i][0];
            s[i][0] = s[i][1];
            s[i][1] = b;
        }
        
       
        for(i = 0; i < c; i++) 
        {
            for(j = 0; j < r; j++) 
            {
                tra[i][j] = 0;
            }
        }

  
        for(i = 1; i <= h; i++) 
        {
            int row = s[i][1];
            int col = s[i][0];
            tra[row][col] = s[i][2];
        }

        cout << "Transpose of sparse matrix:\n";
        for(i = 0; i <= h; i++) 
        {
            for(j = 0; j < 3; j++) 
            {
                cout << s[i][j] << "  ";
            }
            cout << "\n";
        }

        cout << "Transpose of matrix:\n";
        for(i=0; i < c; i++) 
        {
            for(j = 0; j < r; j++)
             {
                cout << tra[j][i] << "  ";
            }
            cout << "\n";
        }
    }
};

int main() {
    sparse a;
    a.accept();
    a.display();
    a.sparseconvert();
    a.transpose();
}
