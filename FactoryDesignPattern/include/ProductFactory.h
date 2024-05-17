#pragma once
#include "Product/Iproduct.h"

class ProductFactory{
public:
    static Iproduct* createProduct(product_e product_type);
};