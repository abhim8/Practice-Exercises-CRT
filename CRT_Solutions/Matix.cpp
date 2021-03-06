/*
A) Matrix
Two positive integers n and m are given. Print the matrix that consists of n lines and m columns, filled with positive integers from 1 to n * m, as shown in the sample.

Input
Two positive integers n and m.

Output
Print the required matrix.

Example 1
Input example #1 content_copy
2 3
Output example #1 content_copy
1 2 3
4 5 6
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int n,m;
    while(cin>>n>>m){
    	int M[n][m],temp=1;
    	for(int i=0; i<n; i++) {
	        for(int j=0; j<m; j++) {
				M[i][j]=temp;
				temp++;
			}    
    	}      
	for(int i=0; i<n; i++) { 
	        for(int j=0; j<m; j++)
	            cout<<M[i][j]<<" ";
	        cout<<"\n";  
	       }
    }
    return 0;
}



/*
B) Print Matrix 
Given n * n matrix - let's call it [1..n] * [1..n] array. For given values r and c print the [1..r] * [1..c] array (r rows and c columns of the given array).

Input
First line contains number n (1 ≤ n ≤ 100). Next lines contains the n * n matrix. The last line contains two integers r and c (1 ≤ r, c ≤ n). All numbers in the matrix are no more than 100 by absolute value.

Output
Print r * c matrix.

Example 1
Input example #1 content_copy
4
1 2 3 4
5 6 7 8
9 1 2 3
4 5 6 7
3 2
Output example #1 content_copy
1 2
5 6
9 1
Example 2
Input example #12 content_copy
5
1 5 -3 2 6
6 3 34 5 8
10 12 3 18 -25
13 22 11 9 45
23 39 20 15 -49
4 3
Output example #12 content_copy
1 5 -3
6 3 34
10 12 3
13 22 11
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int n,m;
    while(cin>>n){
    	m = n;
    	int M[n][m];
    	for(int i=0; i<n; i++) {
	        for(int j=0; j<m; j++) {
				cin>>M[i][j];
			}    
    	}
    	int r,c;
    	cin>>r>>c;
		for(int i=0; i<r; i++) { 
	        for(int j=0; j<c; j++)
	            cout<<M[i][j]<<" ";
	        cout<<"\n";  
	       }
    }
    return 0;
}



/*
E) Sum of rows
Two dimensional array of size n * n is given. Find the sum of elements in its rows.

Input
First line contains the size of array n (n ≤ 100). Each of the next n lines contains n integers.

Output
In the i-th line print the sum of elements in the i-th row of array.

Example 1
Input example #1 content_copy
3
4 6 7
8 3 2
5 4 2
Output example #1 content_copy
17
13
11
*/

#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n,m;
    cin>>n;
    	if (n<100){
    		m = n;
	    	int M[n][m];
	    	for(int i=0; i<n; i++) {
		        for(int j=0; j<m; j++) {
					cin>>M[i][j];
				}    
	    	}
	    	
	    	for(int i=0; i<n; i++) { 
	    		int sum=0,sum1=0;
		        for(int j=0; j<m; j++) 
		            sum += M[i][j];
		            cout<<sum<<"\n";
		       }
    	}
    return 0;
}



/*
F) Matrix: sum of indexes
Let m[i][j] be a two dimensional array of size n * n. Let m[i][j] = i + j. Indexation starts from 1 (m[1][1] is a left upper corner of the matrix). Print the array.

Input
One positive integer n (n < 50).

Output
Print the two dimensional array. Each number must be printed in 2 positions.

Example 1
Input example #1 content_copy
6
Output example #1 content_copy
 2  3  4  5  6  7 
 3  4  5  6  7  8 
 4  5  6  7  8  9 
 5  6  7  8  9 10 
 6  7  8  9 10 11 
 7  8  9 10 11 12 
 */
 
 #include<bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n,m;
    cin>>n;
    	if (n<50){
    		m = n;
	    	int M[n][m];
	    	for(int i=1; i<n+1; i++) {
		        for(int j=1; j<m+1; j++) {
					cout<<(i+j)<<" ";
				}    
				cout<<endl;
	    	}
    	}
    return 0;
}




/*
G) Half 
Write a program that fills array n × n with the next way: secondary diagonal contains zeros, all cells above it contains twos and all cells below it contains ones.

Input
One integer n (n ≤ 20).

Output
Print the array with described manner.

Example 1
Input example #1 content_copy
3
Output example #1 content_copy
220
201
011
*/
#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int M[n][n];
    
    
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            if ((i + j) > (n - 1)) 
            M[i][j]=1;
            if ((i + j) < (n - 1)) 
            M[i][j]=2;
    		if ((i + j) == (n - 1)) 
            M[i][j]=0;
        } 
    }
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            cout<<M[i][j]; 
        } 
        cout<<endl;
    } 
    
    
	return 0;
}



/*
H) Bypass matrix with "snake"
For a given number n fill the square matrix of size n * n with integers from 1 to n2 as follows:

The number 1 is in the upper left corner;
Then numbers go like a "snake", i.e. in ascending order from left to right in the odd lines and from right to left in the even;
Input
One integer n (1 ≤ n ≤ 100).

Output
Print the filled matrix in the form of n rows by n integers each.

Example 1
Input example #1 content_copy
3
Output example #1 content_copy
1 2 3
6 5 4
7 8 9
*/

#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int M[n][n],a=1;
	for (int i=0; i<n; i++) {
		for(int j=0; j<n; j++){
			M[i][j] = a;
			a++;
		}
	}
		
	for (int i = 0; i<n; i++) { 
    	if(i % 2 == 0)
        	for (int j = 0; j < n; j++) 
    			cout<<M[i][j]<<" ";
    	else
        	for (int j = n - 1; j >= 0; j--) 
            	cout<<M[i][j]<<" ";
            	
            	cout<<"\n";
   }
	return 0;
}



/*
L) Sum of matrices 
Given two matrices A and B. Find their sum C = A + B.

Input
First line contains the size of matrices n and m (1 ≤ n, m ≤ 100). Each of the next n lines contains m integers and describe matrix A. Then empty line is given, after which the description of matrix B is given in the same format.

Output
Print the matrix С: n rows, each with m integers.

Example 1
Input example #1 content_copy
3 4
3 4 5 6
1 2 3 4
7 6 5 4

0 0 -3 -2
-1 3 4 5
5 6 1 2
Output example #1 content_copy
3 4 2 4 
0 5 7 9 
12 12 6 6 
*/

#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n,m;
    cin>>n>>m;
    	if (n<=100 && m<=100){
    		
	    	int M1[n][m], M2[n][m], C[n][m];
	    	for(int i=0; i<n; i++) {
		        for(int j=0; j<m; j++) {
					cin>>M1[i][j];
				}    
	    	}
	    	for(int i=0; i<n; i++) {
		        for(int j=0; j<m; j++) {
					cin>>M2[i][j];
				}    
	    	}
	    	
	    	for(int i=0; i<n; i++) {
		        for(int j=0; j<m; j++){ 
		            C[i][j] = M1[i][j]+M2[i][j];
		        }
	    	}
		        for(int i=0; i<n; i++) {
		        for(int j=0; j<m; j++){ 
		        cout<<C[i][j]<<" ";
		        } 
		       cout<<"\n";
			}
    	}
    return 0;
}



/*
N) Snake
Write a program that prints an integer located at line x and column y of matrix n × m that is filled like a snake:


Input
Given the integers n, m, x, y (1 ≤ x ≤ n ≤ 50, 1 ≤ y ≤ m ≤ 50). Here n is number of matrix lines, m is number of matrix columns, x and y are the numbers of row and column of element to print.

Output
Print the element of line x and column y.

Example 1
Input example #1 content_copy
5 2 3 1
Output example #1 content_copy
4
*/


#include <iostream>
using namespace std;
int main() {
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	int M[n][m],a=0;
	
	if(n>50||m>50||x>50||y>50||n<1||m<1||x<1||y<1 )
	exit(0);
	
	int t=n,i=0;
	while(t--){
		if(i % 2 == 0)
        	for (int j = 0; j < m; j++) {
			M[i][j] = a;
			a++;
		}
    	else
        	for (int j = m - 1; j >= 0; j--) {
			M[i][j] = a;
			a++;
		}
         i++;   	
	}
	cout<<M[x-1][y-1];
	return 0;
}



/*
O) Matrix multiplication
Given two square matrices A and B of dimensions m × n and n × q respectively:

prb1482-1

Then the matrix C of dimension m × q is called their product:

where:

The operation of multiplication of two matrices is feasible only if the number of columns in the first factor equals to the number of rows in the second. In this case we say that the shape of the matrices is consistent.

Given two matrices A and B. Find their product.

Input
The first line contains two positive integers na and ma - the dimensions of matrix A. Each of the next na rows contains ma numbers - the elements aij of matrix A. In (na + 2)-nd row two positive integers nb and mb are given - the dimensions of matrix B. In the following nb lines mb numbers are given - the elements bij of matrix B. Dimensions of the matrices do not exceed 100 × 100, all integers do not exceed 100 by absolute value.

Output
Print in the first line the dimensions of the resulting matrix C: nс and mc. In the next nс rows print space separated mc numbers - the corresponding elements cij of matrix C. If you can not multiply matrixs in the first and only line of output -1.

Example 1
Input example #1 content_copy
2 3
1 3 4
5 -2 3
3 3
1 3 2
2 1 3
0 -1 1
Output example #1 content_copy
2 3
7 2 15
1 10 7
*/


#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int ma,na,nb,mb;
    cin>>na>>ma;
    int M1[na][ma];
	    	for(int i=0; i<na; i++) {
		        for(int j=0; j<ma; j++) 
					cin>>M1[i][j];   
	    	}
	cin>>nb>>mb;
	int M2[nb][mb];
	    	for(int i=0; i<nb; i++) {
		        for(int j=0; j<mb; j++) 
					cin>>M2[i][j];    
	    	}
		if (ma!=nb)
    	cout<<"-1";
    	else {
    		int C[na][mb];
			for(int i=0; i<na; i++)
    		for(int j=0; j<mb; j++)
    			C[i][j] = 0;
        	
	    	for(int i=0; i<na; i++) {
	        for(int j=0; j<mb; j++){ 
	        	for(int k=0; k<ma; k++){
	            	C[i][j] += M1[i][k]*M2[k][j];
	        	}
	        }
    	}
    		cout<<na<<" "<<mb<<endl;
	        for(int i=0; i<na; i++) {
	        	for(int j=0; j<mb; j++){ 
		        	cout<<C[i][j]<<" ";
		        } 
	    		cout<<"\n";
			}
		}
    return 0;
}














