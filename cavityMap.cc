#include <iostream>
#include <stdlib.h>

using namespace std;

/*
    Problem Spec: hackerrank.com/challenges/cavity-map
*/

int main() {
    int n;
    cin >> n;
    int matrix[n][n];

    // enter values into matrix
    for( int i = 0; i < n; i++ ) {
        string line
        cin >> line;
        for( int j = 0; j < n; j++ ) {
            int digit = line.at( j ) - '0';
            matrix[ i ][ j ] = digit;
        }
    }

    // check for cavities and print
    for( int i = 0; i < n ; i++ ) {
        for( int j = 0; j < n; j++ ) {
            
            // check if on border
            if( i == 0 || i == n-1 || j == 0 || j == n-1 ) {
                cout << matrix[ i ][ j ];
                continue;
            }
            
            int depth = matrix[ i ][ j ];
            if( matrix[ i-1 ][ j ] < depth && matrix[ i+1 ][ j ] < depth && matrix[ i ][ j-1 ] < depth && matrix[ i ][ j+1 ] < depth ) {
                cout << "X";
            } else {
                cout << matrix[ i ][ j ];
            }
        }
        cout << endl;
    }
}
