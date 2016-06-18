//
//  multi-set.hpp
//  ssdb-test
//
//  Created by Roy Guo on 27/5/59 BE.
//  Copyright © 2559 BE Roy Guo. All rights reserved.
//

#ifndef multi_set_h
#define multi_set_h
#include <string>
#include "SSDB_client.h"

class Review {
public:
    std::string productId;
    std::string userId;
    std::string review;
    
    bool validOrErase();
};


void test_multi_set(ssdb::Client* const client, const char* filename);

void test_multi_get(ssdb::Client* const client, const char* filename, int mget_amount, int mget_size);

void test_delete(ssdb::Client* const client, const char* filename);

#endif /* multi_set_h */