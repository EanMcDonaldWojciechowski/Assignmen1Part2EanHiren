//lang CwC
#pragma once
#include <stdio.h>

/* Base Object class. Represents the basis for all Objects.
   Only contains two basic features, equals and hash. */
class Object {
    public:

        /**
         * Object constructor                       
         * @param  N/A         
         * @return N/A
         */
        Object() {}

        /**
         * Object destructor                       
         * @param  N/A         
         * @return N/A
         */
        virtual ~Object() {}

        /**
         * equals - compares this and other for equality          
         *          
         * @param Object other        
         * @return bool indicating if the this and other are equal
         */
        bool equals(Object *other) {}

        /**
         * hash - returns the hash value for this         
         *          
         * @param N/A      
         * @return size_t hash value
         */
        virtual size_t hash() {}
};