#include <iostream>
using namespace std;
int main() {
    
    
      int row,col;
      int i,j;

       for(row=0;row<6;row++)
       {
           if(row==0 || row==5)
           {
            for(i=0;i<5;i++){
                cout<<"* ";
            }
           }

           else{
            cout<<"* ";
            for(i=0;i<3;i++){
                cout<<"  ";
            }
            cout<<"* ";
           }
           cout<<endl;
           }
    return 0;
}



output:-  * * * * * 
          *       *
          *       *
          *       *
          *       *
          * * * * *
