#include "ProductFactory.h"
#include "Product/ConcreteProduct1.h"
#include "Product/ConcreteProduct2.h"
#include "Product/ConcreteProduct3.h"

Iproduct* ProductFactory::createProduct(product_e product_type){
    if(product_type == PRODUCT1){
        return new ConcreteProduct1();
    }
    else if(product_type == PRODUCT2){
        return new ConcreteProduct2();
    }
    else if( product_type == PRODUCT3){
        return new ConcreteProduct3();
    }
    cout<<"Invalid product type "<<endl;
    return nullptr;
}