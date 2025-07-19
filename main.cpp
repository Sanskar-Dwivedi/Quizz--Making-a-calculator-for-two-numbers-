#include <iostream>

double askValue(double x){
    std::cout<<"Enter a double: ";
    std::cin>>x;
    return x;
}

char askOpp(char opp){
    std::cout<<"Enter +, -, *, or /: ";
    std::cin>>opp;
    return opp;
}

double multi(double x,double y){
    return x*y;
}

double add(double x,double y){
    return x+y;
}

double minus(double x, double y){
    return x-y;
}

double div(double x, double y){
    return x/y;
}

int main(){
    double x{askValue(x)};
    double y{askValue(y)};
    
    char opp{askOpp(opp)};

    if (opp=='+')
        std::cout<<add(x,y);
    else if (opp=='-')
        std::cout<<minus(x,y);    
    else if (opp=='/')
        std::cout<<div(x,y);
    else if (opp=='*')
        std::cout<<multi(x,y);
    else
        return 0;
    

    return 0;

}