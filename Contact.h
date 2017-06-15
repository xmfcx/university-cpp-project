//
// Created by mfc on 06.06.2017.
//

#ifndef UNIVERSITY_CONTACT_H
#define UNIVERSITY_CONTACT_H

#include <iostream>


class Contact {
private:
    std::string phoneNum;
public:
    std::string getPhoneNum() const {
        return phoneNum;
    }

    bool setPhoneNum(std::string phoneNum) {
        Contact::phoneNum = phoneNum;
        return true;
    }

};


#endif //UNIVERSITY_CONTACT_H
