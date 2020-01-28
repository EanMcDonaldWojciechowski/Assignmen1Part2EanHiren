//lang CwC

#pragma once
#include "object.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "helper.h"

/* String Object Class. Represents a String. Owns the char *str_ that hold the
   actual array of chars and keeps track of the size of the char *str_ aswell. */
class String : public Object {
    public:

        /**
         * Object constructor                       
         * @param  N/A         
         * @return N/A
         */
        String() : Object() {
        }

        /**
         * Object constructor                       
         * @param char *str to be set as the str_ value   
         * @return N/A
         */
        String(const char *str) : Object()  {
        }

        ~String() {
        }

        /**
         * concat - concatenates the given String *s to this                   
         * @param   String *s to be concatenated 
         * @return  A new String* with the str_ value of s concatenated onto this
         */
        String* concat(String *s) {
        }

        /**
         * getStrValue - getter method for str_               
         * @param   N/A
         * @return  char* str_
         */
        char* getStrValue() {
        }

        /**
         * length - getter method for size of this String             
         * @param   N/A
         * @return  size_t size_
         */
        size_t length() {
        }

        /**
         * equals - compares this and o for equality     
         * @param   Object *o
         * @return  bool representing equality of this and o
         */
        virtual bool equals(Object *o) {
        }

        /**
         * hash_me - calculates the hash value for this
         * @param   N/A
         * @return  size_t representing a hash value for this
         */
        virtual size_t hash() {
        }

};