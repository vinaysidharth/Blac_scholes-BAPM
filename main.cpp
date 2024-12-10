#include <iostream>
#include "bin_pricer_head.h"

int main()
{
    double R,U,D,n,i,s0,k; // local variables
    get_input(R,U,D,n,i,s0,k);// get from reference
    //check for arbitrage
    if(R>=U || R<=D)
        { // ---- D<R<U
        std::cout<<"The market has arbitrage , Please recheck the values";
        return 1;
        }
    //cox-ross assumptions check
    if(s0<=0.0 || U<=-1.0 || D<=-1.0 || U<=D || R<=-1.0) /*
        1. S0>0 , The stock price should be greater than 0
        2. U>-1 , the Up factor should be greater lie between -100% to +100%
        3. D>=-1 , same as above , the down factor should be greater than -100%
        4. R>=-1 , Rate of interest should be greater than -100%*/
        {
        std::cout<<"Invalid Entries";
        std::cout<<"Terminating program";
        return 1;
        }
        //Computing the risk neutral probabilities 'Q'
        double q=risk_neutral_probability(R,U,D);
        std::cout<<"The Risk Neutral Probability Measure : "<<q<<"\n";
        // Estimating the stock price
        double s=crr_pricer(s0 ,U,D ,n,i );
        std::cout<<"The price of the stock is :"<<s;
    double pay_off=eur_call_opt(k,s);
    std::cout<<"pay_off : "<<pay_off;
    return 0;
}
//Get the input of the variables


