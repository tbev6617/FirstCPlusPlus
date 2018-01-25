//
//  Controller.cpp
//  FirstCPlusPlus
//
//  Created by Bevan, Tyler on 1/23/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    string name = "Tyler Bevan";
}


void Controller :: start()
{
    cout << "My name is" << name << endl;
    for (int i = 13; i <= 31; i++)
    {
        cout << i << " ";
    }
    cout << endl << "The address of my variable is " << "TODO: INSERT ADDRESS" << endl;
    cout << "Also I, " << name << " am the master of programming and I, " << name << " understand C++" << endl;
}
