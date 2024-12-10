#include<iostream>
#include<cmath>
#include "bin_pricer_head.h"
void get_input(double &R,double &U ,double &D,double &n, double &i,double &s0,double &k)
{
    std::cout<<"Enter s0 (Initial Stock price) : "; std::cin>>s0;//get initial stock price
    std::cout<<"Enter U (Probability of moving up)  : "; std::cin>>U;//get the Up factor
    std::cout<<"Enter D (Probability of moving down) : "; std::cin>>D;//get the Down Factor
    std::cout<<"Enter R (Rate of Interest) : "; std::cin>>R;//Enter rate of Interest
    std::cout<<"Enter n (the number of steps) ";std::cin>>n;// get the number of discrete steps , eg n=1,2,3.....
    std::cout<<"Enter i (location of the node)"; std::cin>>i;// 0 is the lowest node and increments by 1) eg i=0,1,2.....
    std::cout<<"Enter K (Strike Price)"; std::cin>>k;
}
//Calculate the risk neutral probability of the inputs
double risk_neutral_probability(double R,double U,double D)
{
    double q=(R-D)/(U-D);
    return q;
}
//Estimate the stock price based on the cox ross rubinstein formula
double crr_pricer(double s0 ,double U, double D , double n,double i ) {
    double s=s0*pow(1+U,i)*pow(1+D,n-i);
    return s;
}

double eur_call_opt(double &k,double &s) {
    //calculate the payoff at that particular node
    double a = s-k;
    return a;
}