//
// Created by Naum Puroski on 18/04/2017.
//

#ifndef JNIWRAPPERCONCEPT_CLONE_H
#define JNIWRAPPERCONCEPT_CLONE_H

namespace jni_core {
    template <typename T>
    T* clone(const T& instance);
}  // jni_core
#endif //JNIWRAPPERCONCEPT_CLONE_H
