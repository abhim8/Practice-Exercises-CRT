/*
1)A - Even or Odd
Positive integer n is given. Determine its parity.

Input
One positive integer n (1 ≤ n ≤ 109).

Output
If number n is even, print EVEN. If number is odd, print ODD..
Example 1
Input example #1 
Output example #1  
ODD

Example 2
Input example #2  
100
Output example #2  
EVEN

solution)
*/
#include <iostream> 
using namespace std; 
 
	
 
int main() 
{ 
	int n;
	cin>>n;
!(n & 1) 
? cout << "EVEN"<<endl
: cout << "ODD"<<endl; 
	return 0; 
} 


/*
2)  Degree of two
Print the number 2n using bit operations only.

Input
One number n (0 ≤ n ≤ 30).

Output
Print the number 2n using bit operations only.


Example 1
Input example #1 
0
Output example #1  
1

Example 2
Input example #2 
1
Output example #2  
2
solution)
*/
#include <iostream> 
using namespace std; 
 
	
 
int main() 
{ 
long long	int n;
	cin>>n;
	int a=1 << n;
  cout <<a  ; 
	return 0; 
} 



/*
3) A xor B 

Two positive integers a and b are given. Apply the bitwise exclusive or operation to them.

Input
Two positive integers a and b (a, b ≤ 109).

Output
Print the result of applying xor operation over the given numbers.

Example 1
Input example #1 content_copy
3 7
Output example #1 content_copy
4

Example 2
Input example #2 content_copy
12 11
Output example #2 content_copy
7

solution)
*/
#include <iostream> 
using namespace std; 
 
	
 
int main() 
{ 
long long	int n,l;
	cin>>n>>l;
	int a=n^l;
  cout <<a  ; 
	return 0; 
} 



/*
4)D - Ones 
At informatics lessons you have probably been taught to transform the numbers from one number system to another, and to perform other similar operations. It's time to demonstrate this knowledge. Find the number of ones in binary representation of a number.

Input
One integer n (0 ≤ n ≤ 2 ∙109).

Output
Print the number of ones in binary representation of n.

Example 1
Input example #1 content_copy
5
Output example #1 content_copy
2

Example 2
Input example #2 content_copy
7
Output example #2 content_copy
3

solution)
*/
  
#include <iostream> 
using namespace std; 
  
  
int main() 
{ 
    int n  ; 
    cin>>n;
  int  c=0; 
    while (n > 0) { 
   
      if( n % 2==1 ){
      	c++;}
      	 n = n / 2; 
       
       }
        cout<<c<<endl;
    return 0; 
} 


/*
5) E - 2^k + 2^n 
Two different integers k and n are given. Print the value 2k + 2n, using bit operations only.

Input
Two different integers k and n (0 ≤ k, n ≤ 30).

Output
Print the number 2k + 2n.

Example 1
Input example #1 
0 1
Output example #1 
3

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,res;
	cin>>m>>n;
	m = 1<<m;
	n = 1<<n;
	res = m+n;
	cout<<res;
	return 0;
}

/*
6) F - Bitset 
Give you a number on base ten, you should output it on base two.

Input

For each case there is not negative number n (n < 1000) on base ten, end of file.

Output

For each case output a number on base two.

Example 1
Input example #1 content_copy
1
2
3
Output example #1 content_copy
1
10
11

*/
#include <iostream>
using namespace std;

void binary(long n) { 
    if (n>1) 
    	binary(n>>1);
    cout<<(n&1);
} 

int main() {
	long n;	
	while(cin>>n){
		binary(n);
		cout<<endl;
	}
	return 0;
}


/*
7) G - Bit value 
Two integers а and k are given. Print the value of k-th bit of number а, that equals to 0 or 1.

Input
Two integers а and k (0 ≤ а ≤ 109) are given in one line.

Output
Print the value of k-th bit of number а.

Example 1
Input example #1 
179 0
Output example #1 
1

*/
#include <bits/stdc++.h> 
using namespace std; 

bool Bitvalue(long n, long  k) { 
	if( n & (1 << k) )
        return 1;
    else
        return 0; 
} 

int main() { 
	long n,k;
	cin>>n>>k;
	cout<<Bitvalue(n,k); 
	return 0; 
} 



/*
8) H - Set a bit
Two integers a and k are given. Print the number that is obtained from а by setting the value of k-th bit to 1.

Input
One line contains two integers a and k (0 ≤ a ≤ 109). The least significant bit of a is a bit number zero.

Output
Print the number a with a set k-th bit.

Example 1
Input example #1 content_copy
5 1
Output example #1 content_copy
7

*/
#include <iostream>
using namespace std;

long setBit(long n,long k) {
   return (n |(1<<k));
 }

int main() {
	long a,k,res;
	cin>>a>>k;
	res = setBit(a,k);
	cout<<res;
	return 0;
}


/*
9) I - Reset a bit 
Given two integers a and k. Find the number that is obtained from a by reseting the value of k-th bit to 0. The least significant bit has number 0.

Input
Two numbers a and k (0 ≤ a ≤ 109).

Output
Print the number with reset k-th bit.

Example 1
Input example #1 content_copy
5 1
Output example #1 content_copy
5

*/

#include <iostream>
using namespace std;

long resetBit(long n,long k) {
   return (n &(~(1<<k)));
 }

int main() {
	long a,k,res;
	cin>>a>>k;
	res = resetBit(a,k);
	cout<<res;
	return 0;
}


/*

10) J - Invert a bit
Two integers а and k are given. Print number that is obtained from а by inverting the k-th bit.

Input
One line contains two integers a and k (0 ≤ a ≤ 109).

Output
Print the number a with k-th bit inverted.

Example 1
Input example #1 content_copy
5 1
Output example #1 content_copy
7

*/
#include <iostream>
using namespace std;

long setBit(long n,long k) {
   return (n ^(1<<k));
 }

int main() {
	long a,k,res;
	cin>>a>>k;
	res = setBit(a,k);
	cout<<res;
	return 0;
}


/*
11) K - Reset bits
Given two integers n and k. Reset (set to zero) the last k bits in the number n, and print the result. It is recommended to find solution without loops.

prb1647.gif

Input
Two numbers n (0 ≤ n ≤ 231 - 1) and k (0 ≤ k ≤ 30).

Output
Print the result of resetting k last bits.

Example 1
Input example #1 content_copy
5 1
Output example #1 content_copy
4
*/


#include <bits/stdc++.h>
using namespace std;

int resetBits(int n, int k){
	int temp;
	temp=n>>k;
	temp=temp<<k;
	return temp;
}

int main() {
	int n,k;
	cin>>n>>k;
	cout<<resetBits(n,k);
	return 0;
}

/*
12) L - Reset the significant bits
Given integer а and positive integer k. Find the number that contains only the last k bits of а (i.e. reset all bits of а except the last k bits).

Input
One line contains two numbers a and k (0 ≤ a ≤ 109).

Output
Print the number a with reseted bits except the last k.

Example 1
Input example #1 content_copy
5 1
Output example #1 content_copy
1
*/

#include <bits/stdc++.h>
using namespace std;

int resetSignificantBits(long long n, long long k){
	if(n==0)
	return n;
	else{
		long long rem=0,arr[10000000],t=0,sum=0;
		while(n>0){
			rem = n%2;
			if(rem==0){
				arr[t]=0;
				t++;
			}
			else{
				arr[t]=1;
				t++;
			}
			n /= 2;
		}
		for(int i=0; i<k; i++){
			if(arr[i]!=0)
			sum += pow(2,i);
		}
		return sum;
	}
	return 0;
}

int main() {
	long long n,k;
	cin>>n>>k;
	cout<<resetSignificantBits(n,k);
	return 0;
}


/*
13) M - Lost card 
For the board game the deck of cards is used with numbers from 1 to n (positive integer n does not exceed 106). One card is lost. Find it.

Input
The first number is n. Then goes n - 1 numbers of left cards.

Output
Print the number of lost card.

Example 1
Input example #1 content_copy
5 1 2 3 4 
Output example #1 content_copy
5
Example 2
Input example #2 content_copy
4 3 2 4
Output example #2 content_copy
1
*/

#include <bits/stdc++.h>
using namespace std;
int getMissingNumber(int arr[], int n) {
	int x = 0;
	
	for (int i=0; i<n; i++)
		x = x ^ arr[i];

	for (int i=1; i<=n+1; i++)
		x = x ^ i;

	return x;
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n-1; i++)
	cin>>arr[i];
	
	cout<<getMissingNumber(arr,n-1);
	return 0;
}

