//
//  Runner.cpp
//  FirstCPlusPlus
//
//  Created by Bevan, Tyler on 1/23/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include <stdio.h>
#include "Controller.hpp"

int main()
{
    Controller * app = new Controller();
    
    (*app).start();
    
    app -> start();
    
    return 0;
}
