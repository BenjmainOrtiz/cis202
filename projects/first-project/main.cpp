#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>


struct PizzaOrder {
    std::string name;
    int size;
};

struct PizzaOrderWithPrice {
    std::string name;
    int size;
    double price;
};

void printBasicOrders(const std::vector<PizzaOrder>& orders) {
    for (const auto& order : orders)
    std::cout << order.name << " " << order.size << " inches\n";
}

void printOrderWithPrice(const std::vector<PizzaOrderWithPrice>& orders) {
    for (size_t i = 0; i < orders.size(); ++i) {
        const auto& order = orders[i];
        std::cout << order.name << " " << order.size << " inches $" << std::fixed << std::setprecision(2) << order.price;
        if (i != orders.size() - 1) {
            std::cout << "\n";
        }
    }
}

int main () {
    std::cout << "\n";

    std::vector<PizzaOrder> basicOrders = {
        {"Alice", 12},
        {"Bob", 16},
        {"Charlie", 10},
        {"Diana", 14}
    };

    std::cout << "Original Pizza Orders:\n";
    printBasicOrders(basicOrders);
    std::cout << "\n";

    std::vector<PizzaOrder> bySize = basicOrders;
    std::sort(bySize.begin(), bySize.end(), [](const PizzaOrder& a, const PizzaOrder& b) {
        return a.size < b.size;
    });

    std::cout << "Sorted by Size (Ascending):\n";
    printBasicOrders(bySize);
    std::cout << "\n";

    std::vector<PizzaOrder> byName = basicOrders;
    std::sort(byName.begin(), byName.end(), [](const PizzaOrder& a, const PizzaOrder& b) {
        return a.name < b.name;
    });

    std::cout << "Sorted by Name (Alphabetical):\n";
    printBasicOrders(byName);
    std::cout << "\n";

    std::vector<PizzaOrderWithPrice> ordersWithPrice = {
        {"Alice", 12, 11.99},
        {"Bob", 16, 15.49},
        {"Charlie", 10, 9.99},
        {"Diana", 14, 13.75}
    };

    std::sort(ordersWithPrice.begin(), ordersWithPrice.end(), [](const PizzaOrderWithPrice& a, const PizzaOrderWithPrice& b) {
        return a.price < b.price;
    });

    std::cout << "Sorted by Price (Ascending):\n";
    printOrderWithPrice(ordersWithPrice);

    return 0;
}
