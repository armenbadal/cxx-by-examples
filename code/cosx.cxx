
double cos(double x)
{
  double sign = 1;          // նշանը
  double denominator = 1.0; // հայտարարը
  double factor = 1;        // գործակիցը
  double result = 0.0;      // հաշվարկի արդյունքը

  for( int i = 0; i < 10; i += 2 ) {
    factor = factor * x * x;
    denominator = denominator * i * (i + 1);
    result += sign * factor / denominator;
    sign *= -1;
  }

  return result;
}


int main()
{
  //
}
