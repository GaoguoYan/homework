#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

Sales_data::Sales_data(std::istream &is) 
{
	read(is, *this);
}

Sales_data& Sales_data::combine(const Sales_data &sales)
{
    units_sold+=sales.units_sold;
    revenue += sales.revenue;
    return *this;
}

double Sales_data::avg_price() const
{
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;    
} 

Sales_data add(const Sales_data &sales1, const Sales_data &sales2)
{
    Sales_data sum = sales1;
    sum.combine(sales2);
    return sum;
}

istream& read(istream &is, Sales_data &item)
{
    double price = 0 ;
    is  >> item.bookNo >>item.units_sold >>price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream& print(ostream &os,  const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold<< " "
        << item.revenue << " " << item.avg_price();
    return os;
}
