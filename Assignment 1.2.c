#include <stdio.h>

struct Product {
    char name[50];
    int discount;
    float quality;
};

void selectBestProduct(struct Product products[], int n, int minDiscount, int maxDiscount) {
    printf("Selected products for Mr. Ravi:\n");
    for (int i = 0; i < n; i++) {
        if (products[i].discount >= minDiscount && products[i].discount <= maxDiscount) {
            printf("Product Name: %s, Discount: %d%%, Quality: %.2f\n", products[i].name, products[i].discount, products[i].quality);
        }
    }
}

int main() {
    struct Product products[] = {
        {"Product A", 20, 8.5},
        {"Product B", 10, 9.0},
        {"Product C", 30, 7.5},
        {"Product D", 15, 9.5}
    };

    int n = sizeof(products) / sizeof(products[0]);
    int minDiscount = 10;
    int maxDiscount = 20;

    selectBestProduct(products, n, minDiscount, maxDiscount);

    return 0;
}
