//
//  main.cpp
//  FirstCPlusPlus
//
//  Created by Bevan, Tyler on 1/23/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include <iostream>


using namespace std;

int helloWorld()
{
    // insert code here...
    cout << "Hello, World! What is your name?" << endl;
    string word;
    getline(cin, word);
    //cin >> word;
    cout << "Hello " << word << endl;
    
    
    return 0;
}
