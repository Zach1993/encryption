//
//  encryptionPractice.cpp
//  EncryptionPractice1
//
//  Created by zach lee on 8/25/16.
//  Copyright © 2016 zach lee. All rights reserved.
//

#include "encryptionPractice.hpp"

char createKey();


string encryptionPractice::encrypt(char pKey, string pStr){
    char key = pKey;
    string str = pStr;
    string encryptedStr;
    
    
    for(int i = 0; i< str.size(); i++){
        encryptedStr += str[i] ^ (int(key) + i) % 20;
    }
    return encryptedStr;
}


string encryptionPractice::decrypt(char pKey, string pEncrypted){
    char key = pKey;
    string encrypted = pEncrypted;
    string decryptedStr;
    
    for(int i = 0; i< encrypted.size(); i++){
        decryptedStr += encrypted[i] ^ (int(key) + i) % 20;
    }
    return decryptedStr;
}


char encryptionPractice::createKey(){
    default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1,127);
    int n = distribution(generator);
    char c = (char)(n);
    return c;
}
    
    
    
    
