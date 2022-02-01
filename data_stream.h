//
// Created by egl on 14.01.2022.
//

#ifndef MATCHING_ENGINE_TEST_UTILS_DATA_STREAM_H
#define MATCHING_ENGINE_TEST_UTILS_DATA_STREAM_H


#include <random>
#include <chrono>
#include <matching_engine.h>

using namespace std;
using namespace std::chrono;

void prepareOrderVector(size_t count, int order_type, int cud, double price, double quantity_dist_min, double quantity_dist_max,
                        std::vector<order>& v_orders);

void prepareOrderVector(size_t count, int order_type, int cud, double price_dist_min, double price_dist_max,
                        double quantity_dist_min, double quantity_dist_max,
                        std::vector<order>& v_orders);
void prepareOrderSet (std::vector<order>& v_orders,
                      TOrders& orders);

#endif //MATCHING_ENGINE_TEST_UTILS_DATA_STREAM_H
