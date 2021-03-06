#include <iostream>
#include <numbers>

int main()
{
    using namespace std;

    cout << "Գնդի տրամագիծը (մ). ";
    double diameter = 0.0;
    cin >> diameter;

    cout << "Գնդի պատի հաստությունը (մ). ";
    double thickness = 0.0;
    cin >> thickness;

    const auto radius = diameter / 2;
    const auto inner_radius = radius - thickness;

    //const double PI = 3.1415;
    using std::numbers::pi;

    const auto inner_volume = (4 * pi * inner_radius * inner_radius * inner_radius) / 3;
    cout << "Գնդի խոռոչի ծավալը (մ³). " << inner_volume << endl;

    const auto surface_area = 4 * pi * radius * radius;
    cout << "Գնդի մակերևույթի մակերեսը (մ²). " << surface_area << endl;

    const double steel_density = 7800; // կգ/մ³
    const auto outer_volume = (4 * pi * radius * radius * radius) / 3;
    const auto weight = steel_density * (outer_volume - inner_volume);
    cout << "Գնդի զանգվածը (կգ). " << weight << endl;

    return 0;
}
