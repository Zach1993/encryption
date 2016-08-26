//
//  encryptionPractice.hpp
//  EncryptionPractice1
//
//  Created by zach lee on 8/25/16.
//  Copyright © 2016 zach lee. All rights reserved.
//

#ifndef encryptionPractice_hpp
#define encryptionPractice_hpp

#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>

using namespace std;

class encryptionPractice{
public:
    string encrypt(char pKey, string pStr);
    string decrypt(char pKey, string pEncrypted);
    char createKey();
    
private:
    char key;
    
    
    
    
    
};



#endif /* encryptionPractice_hpp */
