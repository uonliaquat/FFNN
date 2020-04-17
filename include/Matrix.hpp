#ifndef _MATRIX_HPP_
#define _MATRIX_HPP_

#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <functional>
using namespace std;

class Matrix{

    private:
        unsigned _rows = 0, _cols = 0;
        vector<vector<double>> _data;

    public:
        Matrix(const int, const int);
        void multiply(const double);
        Matrix * multiply(Matrix *);
        Matrix * dotProduct(Matrix*);
        Matrix * subtract(Matrix*);
        void add(const double);
        Matrix * add(Matrix*);
        Matrix * transpose();
        double mean();
        Matrix * clone();
        bool isEqual(Matrix*&);
        void setVal(const double);
        void setVal(const unsigned int, const unsigned int, const double val);
        void setColVal(const int, const double);
        void setRowVal(const int, const double);
        void addRow(const double);
        void addCol(const double);
        Matrix *  removeRow(unsigned int);
        Matrix *  removeCol(unsigned int);



        void randomize();

        void map(double (*f)(const double));
        void map(double (*f)(const double, const int), const int type);

        vector<vector<double>> data(){ return this->_data; }
        unsigned int rows(){ return this->_rows; }
        unsigned int cols(){ return this->_cols; }


        //static Matrix * addRow(Matrix *, const double);
        static Matrix * toRowMatrix(const vector<double> &);
        static Matrix * toColMatrix(const vector<double> &);
        static Matrix * pow(Matrix*, const int);

        static vector<double> toVector(Matrix *&);



        void print();
};

#endif
