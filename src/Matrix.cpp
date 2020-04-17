#include "../include/Matrix.hpp"

Matrix::Matrix(const int rows, const int cols){
    this->_rows = rows;
    this->_cols = cols;

    this->setVal(0);
}

void Matrix::setVal(const double val){
    for(int i = 0; i < _rows; i++){
        vector<double> row;
        for(int j = 0; j < _cols; j++){
            row.push_back(val);
        }
        _data.push_back(row);
    }
}

void Matrix::multiply(const double val){
    for(int i = 0; i < _rows; i++){
        for(int j = 0; j < _cols; j++){
            _data[i][j] *= val;
        }
    }
}

void Matrix::add(const double val){
    for(int i = 0; i < _rows; i++){
        for(int j = 0; j < _cols; j++){
            _data[i][j] += val;
        }
    }
}

double Matrix::mean(){
    double mean = 0;
    for(int i = 0; i < rows(); i++){
        for(int j = 0; j < cols(); j++){
            mean += _data[i][j];
        }
    }
    return (mean/(rows() * cols()));
}

Matrix * Matrix::dotProduct(Matrix *mat){
    assert(cols() == mat->rows());

    Matrix * new_mat = new Matrix(rows(), mat->cols());
    for(int i = 0; i < _rows; i++){
        for(int j = 0; j < mat->cols(); j++){
            double val = 0;
            for(int k = 0; k < mat->rows()  ; k++){
                val += (_data[i][k] * mat->data()[k][j]);
            }
            new_mat->setVal(i, j, val);
        }
    }
    return new_mat;
}

Matrix * Matrix::multiply(Matrix *mat){
    assert(rows() == mat->rows() && cols() == mat->cols());

    Matrix * new_mat = new Matrix(rows(), mat->cols());
    for(int i = 0; i < rows(); i++){
        for(int j = 0; j < cols(); j++){
            double val = _data[i][j] * mat->data()[i][j];
            new_mat->setVal(i, j, val);
        }
    }
    return new_mat;
}


Matrix * Matrix::removeRow(unsigned int row){
    Matrix * new_matrix = new Matrix(rows() - 1, cols());
    bool check = false;
    for(int i = 0; i < rows(); i++){
        for(int j = 0; j < cols(); j++){
            if(i != row){
                if(!check)
                    new_matrix->setVal(i, j, _data[i][j]);
                else
                    new_matrix->setVal(i - 1, j, _data[i][j]);

            }
            else{
                check = true;
                break;
            }
        }
    }
    return new_matrix;
}

Matrix * Matrix::removeCol(unsigned int col){
    Matrix * new_matrix = new Matrix(rows(), cols() - 1);
    bool check = false;
    for(int i = 0; i < rows(); i++){
        check = false;
        for(int j = 0; j < cols(); j++){
            if(j != col){
                if(!check)
                    new_matrix->setVal(i, j, _data[i][j]);
                else
                    new_matrix->setVal(i, j - 1, _data[i][j]);
            }
            else{
                check = true;
            }
        }
    }
    return new_matrix;
}



Matrix * Matrix::subtract(Matrix *mat){
    assert(rows() == mat->rows() && cols() == mat->cols());
    Matrix * new_mat = new Matrix(rows(), cols());
    for(int i = 0; i < rows(); i++){
        for(int j = 0; j < mat->cols(); j++){
            double new_val = _data[i][j] - mat->data()[i][j];
            new_mat->setVal(i, j, new_val);
        }
     }
    return new_mat;
}




Matrix * Matrix::transpose(){
    Matrix * new_mat = new Matrix(cols(), rows());
    for(int i = 0; i < rows(); i++){
        for(int j = 0; j < cols(); j++){
            new_mat->setVal(j, i, data()[i][j]);
        }
    }
    return new_mat;
}

Matrix * Matrix::add(Matrix *mat){
    assert(rows() == mat->rows() && cols() == mat->cols());
    Matrix * new_matrix = new Matrix(rows(), cols());
    for(int i = 0; i < _rows; i++){
        for(int j = 0; j < _cols; j++){
            new_matrix->setVal(_data[i][j] += mat->data()[i][j], i , j);
        }
    }
    return new_matrix;
}


void Matrix::map(double (*f)(const double)){
    for(int i = 0; i < _rows; i++){
        for(int j = 0; j < _cols; j++){
            double val = _data[i][j];
            _data[i][j] =  f(val);
        }
    }
}

void Matrix::map(double (*f)(const double, const int), const int type){
    for(int i = 0; i < _rows; i++){
        for(int j = 0; j < _cols; j++){
            double val = _data[i][j];
            _data[i][j] =  f(val, type);
        }
    }
}


void Matrix::setVal(const unsigned int i, const unsigned int j, const double val){
    assert(i <= rows() && j <= cols() && i >= 0 && j >= 0);
    _data[i][j] = val;
}


Matrix * Matrix::toColMatrix(const vector<double> &vec){
    Matrix * new_matrix = new Matrix(vec.size(), 1);
    for(int i = 0; i < vec.size(); i++){
        new_matrix->setVal(i, 0, vec[i]);
    }
    return new_matrix;
}
Matrix * Matrix::toRowMatrix(const vector<double> &vec){
    Matrix * new_matrix = new Matrix(1, vec.size());
    for(int i = 0; i < vec.size(); i++){
        new_matrix->setVal( 0, i, vec[i]);
    }
    return new_matrix;
}

Matrix * Matrix::pow(Matrix *mat, const int p){
    Matrix * new_matrix = new Matrix(mat->rows(), mat->cols());
    for(int i = 0; i < mat->rows(); i++){
        for(int j = 0; j < mat->cols(); j++){
            if(p == 0){
                new_matrix->setVal(i, j, 1);
            }
            else{
                double sum = 1;
                for(int k = 0; k < p; k++){
                    sum *= mat->data()[i][j];
                }
                new_matrix->setVal(i, j, sum);
            }
        }
    }
    return new_matrix;
}

void Matrix::setRowVal(const int row, const double val){
    assert(row <= rows());
    for(int i = 0; i < cols(); i++){
        _data[row][i] = val;
    }
}

void Matrix::setColVal(const int col, const double val){
    assert(col <= rows());
    for(int i = 0; i < rows(); i++){
        _data[i][col] = val;
    }
}


void Matrix::addRow(const double val){
    _rows++;
    vector<double> row;
    for(int i = 0; i < cols(); i++){
        row.push_back(val);
    }
    _data.push_back(row);

}

void Matrix::addCol(const double val){
    _cols++;
    for(int i = 0; i < rows(); i++){
        _data[i].push_back(val);
    }
}


vector<double> Matrix::toVector(Matrix *&mat){
    assert(mat->rows() == 1 || mat->cols() == 1);
    vector<double> vec;
    for(int i = 0; i < mat->rows(); i++){
        for(int j = 0; j < mat->cols(); j++){
            vec.push_back(mat->data()[i][j]);
        }
    }
    return vec;
}

bool Matrix::isEqual(Matrix *& mat){
    if(mat->rows() == rows() && mat->cols() == cols()){
        for(int i = 0; i < rows(); i++){
            for(int j = 0; j < cols(); j++){
                if(mat->data()[i][j] != _data[i][j]){
                    return false;
                }
            }
        }
    }
    else{
        return false;
    }
    return true;
}

Matrix * Matrix::clone(){
    Matrix * new_matrix = new Matrix(rows(), cols());
    for(int i = 0; i < rows(); i++){
        for(int j = 0; j < cols(); j++){
            new_matrix->setVal(i, j, _data[i][j]);
        }
    }
    return new_matrix;
}

void Matrix::randomize(){
    for(int i = 0; i < _rows; i++){
        for(int j = 0; j < _cols; j++){
            _data[i][j] =   ((float)rand() / RAND_MAX) * (1 - (-1)) + (-1);
        }
    }

}

void Matrix::print(){
    for(int i = 0; i < _rows; i++){
        for(int j = 0; j < _cols; j++){
            cout << _data[i][j] << "  ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
