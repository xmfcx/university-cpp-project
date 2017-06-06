//
// Created by mfc on 06.06.2017.
//

#ifndef UNIVERSITY_CONTACT_H
#define UNIVERSITY_CONTACT_H

#include <iostream>


class Contact {
private:
    long phoneNum;
public:
    long getPhoneNum() const {
        return phoneNum;
    }

    bool setPhoneNum(long phoneNum) {
        if (phoneNum < 1000000000 || phoneNum > 9990000000) {
            std::cout << "Phone number should be in following format: 5332227788" << std::endl;
            return false;
        }
        Contact::phoneNum = phoneNum;
        return true;
    }

};


#endif //UNIVERSITY_CONTACT_H
