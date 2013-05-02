double cl::add(double a, double b)
{
    return a+b;
}

double cl::mult(int a, double b)
{
    return a*b;
}

double cl::tax(double tax, double subtotal)
{
    tax = tax/100;
    return subtotal + (tax*subtotal);

}

