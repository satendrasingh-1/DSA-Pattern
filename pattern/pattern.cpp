/* 1. Pattern
* * * *
* * * *
* * * *
* * * *
 */
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows and cols:"<<endl;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


/* 2. Pattern 
1 1 1
2 2 2
3 3 3
4 4 4
5 5 5
*/
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows and cols:"<<endl;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=0;j<col;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


/* 3. Pattern
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
 */
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows and cols:"<<endl;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


/* 4. Pattern 
1 2 3
4 5 6
7 8 9
*/
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows and cols:"<<endl;
    cin>>row>>col;
    int count=1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}


/* 5. Pattern
* 
* * 
* * *
* * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


/* 6. Pattern
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


/* 7. Pattern
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<i;j++){
            cout<<i+j<<" ";
        }
        cout<<endl;
    }
}




/* 8. Pattern
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<i;j++){
            cout<<i-j<<" ";
        }
        cout<<endl;
    }
}


/* 9. Pattern
A
B B
C C C
D D D D
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    char c='A';
    for(int i=1;i<=row;i++){
        for(int j=0;j<i;j++){
            cout<<c<<" ";
        }
        c=c+1;
        cout<<endl;
    }
}


/* 10. Pattern
A B C
A B C
A B C
A B C
*/
#include<iostream>
using namespace std;
int main(){
    int row,cols;
    cout<<"Enter the number of rows and cols:"<<endl;
    cin>>row>>cols;
    for(int i=1;i<=row;i++){
        char c='A';
        for(int j=0;j<cols;j++){
            cout<<c<<" ";
            c+=1;
        }
        cout<<endl;
    }
}


/* 11. Pattern
A B C
D E F
G H I
J K L
*/
#include<iostream>
using namespace std;
int main(){
    int row,cols;
    cout<<"Enter the number of rows and cols:"<<endl;
    cin>>row>>cols;
    char c='A';
    for(int i=1;i<=row;i++){
        
        for(int j=0;j<cols;j++){
            cout<<c<<" ";
            c+=1;
        }
        cout<<endl;
    }
}


/* 12. Pattern
D
C D
B C D
A B C D
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    char c='A'+row-1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c+=1;
        }
        c='A'+(row-1)-i;
        cout<<endl;
    }
}


/* 13. Pattern
      *
    * *
  * * *
* * * *
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<row-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


/* 14. Pattern
* * * *
  * * *
    * *
      *
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=row;i>0;i--){
        for(int j=0;j<row-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


/* 15. Pattern
* * * *
* * *
* *
*
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows: "<<endl;
    cin>>row;
    for(int i=row;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


/* 16. Pattern
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows: "<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<row-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=1;j<i;j++){
            cout<<i-j<<" ";
        }
        cout<<endl;
    }
}


/* 17. Pattern
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1 
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows: "<<endl;
    cin>>row;
    for(int i=row;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=0;j<row-i;j++){
            cout<<"* ";
        }
        for(int j=0;j<row-i;j++){
            cout<<"* ";
        }
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


/* 18. Pattern
* * * *
*     *
*     *
*     *
* * * *
*/
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows and cols:"<<endl;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1||i==row){
                cout<<"*"<<" ";
            }
            else if(j==1||j==col){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}


/* 19. Pattern
*                 *
* *             * *
* * *         * * *
* * * *     * * * * 
* * * * * * * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        for(int j=0;j<row-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<row-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}


/* 20. Pattern
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * * * * * * * * 
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        for(int j=0;j<(row-i)*2;j++){
            cout<<"  ";
        }
        for(int j=i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=row;i++){
        for(int j=row;j>=i;j--){
            cout<<"* ";
        }
        for(int j=2;j<i*2;j++){
            cout<<"  ";
        }
        for(int j=i;j<=row;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


/* 21. Pattern
*                *
**            **
***        ***
****    ****
**********
**********
****    ****
***        ***
**            **
*                *
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<(row-i)*2;j++){
            cout<<"  ";
        }
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=row;i++){
        for(int j=row;j>=i;j--){
            cout<<"*";
        }
        for(int j=2;j<i*2;j++){
            cout<<"  ";
        }
        for(int j=i;j<=row;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


/* 22. Pattern
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}


/* 23. Pattern
    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<row-i;j++){
            cout<<" ";
        }
        for(int j=0;j<row;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


/* 24. Pattern
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<row-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


/* 25. Pattern
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<row-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


/* 26. Pattern
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * * 
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<row-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=row;i>=1;i--){
        for(int j=0;j<row-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


/* 27. Pattern
9
    *       *
  *   *   *   *
*       *       *
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=row;j++){
            if((i+j)%4==0 || i==2 && j%4==0){
                cout<<"* ";
            }
            
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}