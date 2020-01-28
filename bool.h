//lang CwC
#pragma once
#include <stdio.h>
#include "object.h"

/* Base Bool wrapper class. Represents the basis for all Bools.
   Only contains two basic features, equals and hash. */
class Bool : public Object {
    public:

        /**
         * Bool constructor                       
         * @param  bool value of this       
         * @return N/A
         */
        Bool(bool value) {}

        /**
         * Bool destructor                       
         * @param  N/A         
         * @return N/A
         */
        virtual ~Bool() {}

        /**
         * equals - compares this and other for equality          
         *          
         * @param Object other        
         * @return bool indicating if the this and other are equal
         */
        bool equals(Object *other) {}

        /**
         * getValue - returns this Bool as an bool          
         *               
         * @return bool value of this
         */
        bool getValue() {}

        /**
         * hash - returns the hash value for this         
         *          
         * @param N/A      
         * @return size_t hash value
         */
        virtual size_t hash() {}
};