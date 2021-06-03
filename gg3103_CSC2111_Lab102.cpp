#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

    class productType
    {
    public:
        productType();
        productType(int, double, double);
        productType(string, int, double, double);
        productType(string, string, string, int, double, double);
        void set(string, string, string, int, double, double);
        void print() const;
        void setQuanitiesInStock(int x);
        void updateQuantitesInStock(int x);
        int getQuantitiesInStock();
        void setPrice() const;
        double getPrice() const;
        void setDiscount(double d);
        double getDiscount() const;

    private:
        string productName;
        string id;
        string manufacturer;
        int quantitiesInStock;
        double price;
        double discount;
    };
                     
     // a.
    productType product1; // Line 4
    productType product2("Microwave", "M3562",  "GeneralPool", 35, 175.00, 0.1); // Line 7
    productType product3("D1290", 25, 375.00, 0.05); // Line 6
    productType product4("10, 8.50, 0.2"); // Line 5

  // b.
    productType::productType()
    {
        productName == "";
        id = "";
        manufacturer = "";
        quantitiesInStock = 0;
        price = 0.0;
        discount = 0.0;
    }
    // c.
    productType::productType(int qis, double p, double d)
    {
        if (qis >= 0 && p >= 0 && d >= 0)
        {
            productName = "";
            id = "";
            manufacturer = "";
            quantitiesInStock = qis;
            price = p;
            discount = d;
        }
    }

    // d.
    productType::productType(string i, int qis, double p, double d)
    {
        if (qis >= 0 && p >= 0 && d >= 0)
        {
            productName == "";
            id = i;
            manufacturer = "";
            quantitiesInStock = qis;
            price = p;
            discount = d;
        }
    }

    // e.
    productType::productType(string pn, string i, string mf, int qis, double p, double d)
    {
        if (qis >= 0 && p >= 0 && d >= 0)
        {
            productName = pn;
            id = i;
            manufacturer = mf;
            quantitiesInStock = qis;
            price = p;
            discount = d;
        }
    }