//
//  main.cpp
//  Eric's Square Generator
//
//  Created by Eric Zhang on 2017/8/5.
//  Copyright © 2017年 Eric Zhang. All rights reserved.
//

#include <iostream>

using namespace std; //This program is programed by C++ but who care xDDDDDDDDDDDDD 
int main()
{
    cout<<"Welcome to Eric's Square Generator"<<endl;
    int a;
    cout<<"Type a number to countine..."<<endl;
    cin>>a;
    for (int i=1; i<=a; i++) {
        for (int k=1; k<=a; k++) {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
