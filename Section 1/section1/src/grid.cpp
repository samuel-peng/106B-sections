#include <iostream>
#include "console.h"
#include "grid.h"
using namespace std;
Grid<int> mirror(Grid<int> g){
    Grid<int> temp(g.numCols(), g.numRows());
    //numCols of new grid should be numRows of the old grid. Vice versa.
    for (int r = 0 ; r < g.numRows(); r++) {
        for (int c = 0 ; c < g.numCols(); c++) {
            temp[r][c] = g[c][r];
        }
    }
    return temp;
}
int crossSum(Grid<int> g, int row, int col) {
    int sum = 0;
    for (int r = 0 ; r < g.numRows() ; r++) {
        sum += g[r][col];
    }
    for (int c = 0 ; c < g.numCols() ; c++) {
        sum += g[row][c];
    }
    sum -= g[row][col];
    return sum;
}
int grid_main() {

    return 0;
}
