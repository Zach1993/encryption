//
//  main.cpp
//  EncryptionPractice1
//
//  Created by zach lee on 8/25/16.
//  Copyright © 2016 zach lee. All rights reserved.
//

#include "encryptionPractice.hpp"

int main(int argc, const char * argv[]) {

    encryptionPractice obj;
    char key = obj.createKey();
    string enStr,dStr,name;
    cin >> name;
    
    string str = "Hello, my name is: " + name + " !!!";
    
    enStr = obj.encrypt(key, str);
    cout << enStr << endl;
    
    dStr = obj.decrypt(key, enStr);
    cout << dStr << endl;
    cout << key << endl;
    
    
    return 0;
}
