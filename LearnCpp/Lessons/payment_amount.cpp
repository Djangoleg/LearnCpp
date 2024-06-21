//
// Created by ok on 28.05.24.
//
#include <cmath>

using namespace std;

/*
 Use:
    double principal = 10000.0,
           rate = 0.18,
           pay_per_year = 12.0,
           num_years = 5.0;

    double payment_amount = get_payment_amount(principal, rate, pay_per_year, num_years);
    double payment_amount_per_all_period = payment_amount * pay_per_year * num_years;


    cout << "principal: " << principal << ";\n";

    cout << "rate: " << rate * 100 << ";\n";

    cout << "payment amount per month: " << payment_amount << ";\n";

    cout << "payment amount all period: " << payment_amount_per_all_period << ";\n";

    cout << "payment amount percents: " << payment_amount_per_all_period - principal << ";\n";
 */

double get_payment_amount(double principal, double rate, double pay_per_year, double num_years)
{
    double payment_amount;
    double number, denom;
    double e, b;

    number = rate * principal / pay_per_year;
    e = -(pay_per_year * num_years);
    b = (rate / pay_per_year) + 1;

    denom = 1 - pow(b, e);

    payment_amount = number / denom;

    return payment_amount;
}