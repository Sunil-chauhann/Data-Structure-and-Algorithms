#include<iostream>
using namespace std;

int main(){
	
	cout<<"Sunil Chauhan, CGC, 2024"<<endl;
	cout<<endl;
	cout<<"printing Spiral Matrix : "<<endl;
	int n = 7;
	int matrix[101][101];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			matrix[i][j]=0;
		}	
	}
	
	int row = 0, col = 0;
	int direction = 0; 

	int counter = 1;
	while( counter <= n*n ){

		matrix[row][col] = counter;
		
		if( direction==0 ){
			if( col == n-1 || matrix[row][col+1] > 0 ){
				direction = 1;
				row++;
			}else {
				col++;
			}
		}else if ( direction==1 ) {
			if( row == n-1 || matrix[row+1][col] > 0 ){
				direction = 2;
				col--;
			}else{
				row++;
			}
		}else if ( direction==2 ) {
			if( col == 0 || matrix[row][col-1] > 0 ){
				direction = 3;
				row--;
			}else{
				col--;
			}		
		}else{
			if( matrix[row-1][col] > 0 ){
				direction = 0;
				col++;
			}else{
				row--;
			}			
		}
		counter++;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;	
	}

	return 0;
}
