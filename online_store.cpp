#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Product
{
    int productID;
    string name;
    string catagory;
};

struct Order
{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main()
{
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Smartphone", "Electronics"},
        {103, "Headphones", "Electronics"},
        {104, "Shirt", "Clothing"},
        {105, "Jeans", "Clothing"},
        {106, "Socks", "Clothing"},
        {107, "Shoes", "Footwear"},
        {108, "Sandals", "Footwear"},
        {109, "Slippers", "Footwear"},
    };

    deque<string> recentCustomers = {"C001", "C002", "C003", "C004", "C005"};

    recentCustomers.push_back("C006");
    recentCustomers.push_front("C007");

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});


    set<string> categories;

    for(const auto &product : products)  // here &product is a pointer to the current element in the vector
    {
        categories.insert(product.catagory);
    }

    map<int,int> productStoc = {
        {101, 10},
        {102, 20},
        {103, 30},
        {104, 20},
        {105, 40},
        {106, 30},
        {107, 15},
        {108, 100},
        {109, 90},
    };

    multimap<string, Order> customerOrders;

    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "John Doe"},
        {"C002", "Jane Smith"},
        {"C003", "Bob Johnson"},
        {"C004", "Alice Williams"},
        {"C005", "Michael Brown"},
    };

    unordered_set<int> uniqueProductIDs;

    for(const auto &product: products){
        uniqueProductIDs.insert(product.productID);
    }

    return 0;
};