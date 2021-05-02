#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,xCopy,xCopy2,sum=0,i=0,xLen=0,z,uzunluq;
	// Input X
	cin>>x;
	// Create copy of X
	xCopy=x;
	xCopy2=x;
	// Find the length of X
	do {
     xLen++; 
     xCopy /= 10;
} while (xCopy);
	// The length of X = xLen 
	uzunluq=xLen;
	
	// We need to check 2 option here | Are X odd number or even number
	 if(xLen%2 == 0){ // If X even number
		for(i;i<xLen/2;i++){
			z=pow(10, uzunluq-1);
			if((x/z)%10 == xCopy2%10){
				sum++;
			}
			uzunluq--;
			xCopy2/=10;
		}
	// We have a small requirement for odd numbers. | Input: 12321  Result: 3
	} 
	else{ // If X odd number
		for(i;i<xLen/2;i++){
			z=pow(10, uzunluq-1);
			if((x/z)%10 == xCopy2%10){
				sum++;
			}
			uzunluq--;
			xCopy2/=10;
		}
		// Same loop as even numbers, but add 1 at the end for the correct answer !
		sum++;
	}
	
	cout<<sum;
}
