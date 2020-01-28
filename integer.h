//lang CwC
#pragma once
#include <stdio.h>
#include "object.h"

/* Base Integer wrapper class. Represents the basis for all Integers.
   Only contains two basic features, equals and hash. */
class Integer : public Object {
    public:

        /**
         * Integer constructor                       
         * @param  int value         
         * @return N/A
         */
        Integer(int value) {}

        /**
         * Integer destructor                       
         * @param  N/A         
         * @return N/A
         */
        virtual ~Integer() {}

        /**
         * equals - compares this and other for equality          
         *          
         * @param Object other        
         * @return bool indicating if the this and other are equal
         */
        bool equals(Object *other) {}

        /**
         * getValue - returns this Integer as an int          
         *               
         * @return int value of this
         */
        int getValue() {}

        /**
         * hash - returns the hash value for this         
         *          
         * @param N/A      
         * @return size_t hash value
         */
        virtual size_t hash() {}
};