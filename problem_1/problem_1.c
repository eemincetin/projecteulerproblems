// https://projecteuler.net/problem=1

int multiplesOf3or5(int ival){
    return ((ival > 0) ? ((((ival - 1) % 3 == 0) || ((ival - 1) % 5 == 0)) ? ((ival - 1) + multiplesOf3or5(ival - 1)) : multiplesOf3or5(ival - 1)) : 0); 
}