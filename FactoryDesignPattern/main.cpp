#include "Product/Iproduct.h"
#include "Product/ConcreteProduct1.h"
#include "Product/ConcreteProduct2.h"
#include "Product/ConcreteProduct3.h"
#include "ProductFactory.h"

int main(){
    auto product1 = ProductFactory::createProduct(PRODUCT1);
    auto product2 = ProductFactory::createProduct(PRODUCT2);
    auto product3 = ProductFactory::createProduct(PRODUCT3);

    product1->operation();
    product2->operation();
    product3->operation();

    delete product1;
    delete product2;
    delete product3;
}