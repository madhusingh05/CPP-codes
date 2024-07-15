#include <iostream>
using namespace std;
int main()
{
    float total_amt, discount, bill_amt;
    cout<<"Enter the total amount of purchase: ";
    cin>>total_amt ;
    if (total_amt >= 10000)
     discount = 20;
    else 
    if (total_amt >= 5000 && total_amt < 10000)
    discount = 15 ;
    else if (total_amt < 5000) 
    discount = 10 ;
    bill_amt = total_amt - (discount/100 * total_amt);
    cout<<"You have to pay : Rs "<<bill_amt<<"/-";
    cout<<"\nThis is new statement";
    return 0;
}