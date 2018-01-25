//
//  Controller.cpp
//  FirstCPlusPlus
//
//  Created by Bevan, Tyler on 1/23/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    cout << "I am in the constructor" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << i << endl;
    }
}


void Controller :: start()
{
    cout << "I am in the start method" << endl;
}
