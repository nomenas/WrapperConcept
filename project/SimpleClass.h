//
// Created by Naum Puroski on 24/02/2017.
//

#ifndef WRAPPERCONCEPT_CLASSIMPL_H
#define WRAPPERCONCEPT_CLASSIMPL_H

#include <string>

#include "Integer.h"

template <class T>
using owner = T;


class SimpleClass {
public:
    enum Status {
        Item1,
        Item2,
        Item3
    };

    explicit SimpleClass(int);

    void method1() const;
    int method2(int value);
    std::string method3(int value, const std::string& text);

    Integer get_object() const;
    Integer* get_owned_item() const;
    owner<Integer*> get_item_take_ownership() const;

    int call_method_with_ptr(Integer* obj, int value) const;
    int call_method_with_obj(Integer obj, int value) const;

    std::string get_const_value() const;

    Status get_status() const;
    int set_status(Status status);
private:
    int _value;
};


#endif //WRAPPERCONCEPT_CLASSIMPL_H
