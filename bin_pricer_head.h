//
// Created by Vinay Sidharth on 9/12/24.
//

#ifndef BIN_PRICER_HEAD_H
#define BIN_PRICER_HEAD_H
void get_input(double &R,double &U, double &D, double &n, double &i, double &s0 , double &k); //User input, output type - void
double stock_p(double s0 ,double U, double D , double n,double i );//stock price calculation , output type - double
double risk_neutral_probability(double R,double U,double D);//risk neutral measure estimation , output type - double
double eur_call_opt(double &k,double &s);//payoff estimation
#endif //BIN_PRICER_HEAD_H
