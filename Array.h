//lang CwC

#pragma once
#include "object.h"
#include "string.h"
#include <stdio.h>
#include <assert.h>
#include <iostream>

/* Array is an object that represents an array of Objects.
   Array manages an array of object pointers in the array objects_*/
class Array : public Object {
    public:

        /**
         * Object constructor - creates a empty Array                    
         * @param  N/A         
         * @return N/A
         */
        Array() : Object() {}

        /**
         * Object destructor                      
         * @param  N/A         
         * @return N/A
         */
        ~Array() {}

        /**
         * grow - doubles the space available in the array objects_                       
         * @param  N/A         
         * @return N/A
         */
        void grow_() {}

        /**
         * shrink_ - shrinks the spaces available in the array objects_                   
         * @param  N/A         
         * @return N/A
         */
        void shrink_() {}

        /**
         * add - appends e at the end of this Array                 
         * @param  Object *e to be appended to this       
         * @return N/A
         */
        void add(Object* e) {}

        /**
         * add - adds the Object *e at the position i in objects_     
         *       if i in not at the end of objects_, then all elements
         *       in objects_ from i to end the of the array must be
         *       shifted 1 position to the right to make room for e            
         * @param  Object *e to be appended to this       
         * @param  size_t i is the index where e should be inserted       
         * @return N/A
         */
        void add(size_t i, Object* e) {}

        /**
         * add_all - adds all elements in c to the end of this array      
         * @param  Array *c to be appended to this       
         * @return N/A
         */
        void add_all(Array *c) {}

        /**
         * add_all - adds all elements in c at position i. If i is not at
         *           the end of objects_, then all elements in objects_ from i
         *           to the end of the array must be shifted the length of c 
         *           to the right to make room for all elements of c      
         * @param  Array *c to be appended to this       
         * @param  size_t i is the index where c should be inserted 
         * @return N/A
         */
        void add_all(size_t i, Array *c) {}

        /**
         * clear - clears all elements in this      
         * @param  N/A
         * @return N/A
         */
        void clear() {}

        /**
         * equals - compares this and o for equality     
         * @param   Object *o
         * @return  bool representing equality of this and o
         */
        virtual bool equals(Object *o) {} 

        /**
         * get - returns the Object* at index i     
         * @param   size_t index for Object* value wanted
         * @return  Object * at index
         */
        Object* get(size_t index) {}

        /**
         * hash - returns the hash value for this
         * @param   N/A
         * @return  size_t representing a hash value for this
         */
        virtual size_t hash() {}

        /**
         * index_of - returns the index of the given object * o 
         *            returns -1 if element not found
         * @param   Object *o to be searched for
         * @return  size_t index of Object *o
         */
        size_t index_of(Object *o) {}

        /**
         * remove - removes the Object at index i
         * @param   size_t i is the index to be removed
         * @return  Object* that was removed
         */
        Object* remove(size_t i) {}

        /**
         * remove - removes the Object e if it exists in this array
         * @param   Object* e that was removed
         * @return  Object* that was removed
         */
        Object* remove(Object* e) {}

        /**
         * set - sets the Object * at index i to e
         * @param   size_t i is the index to be set
         * @param   Object e is the value to be set at i
         * @return  Object* at index i
         */
        Object* set(size_t i, Object* e) {}

        /**
         * length - returns the count
         * @param   N/A
         * @return  size_t count
         */
        size_t length() {} 
};