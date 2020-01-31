//langCwC
#include <assert.h>
#include <iostream>
#include "helper.h"
#include "Array.h"


void FAIL() {   exit(1);    }
void OK(const char* m) { printf(m); std::cout << std::endl; }
void t_true(bool p) { if (!p) FAIL(); }
void t_false(bool p) { if (p) FAIL(); }

// grow test
void testGrow() {
  Array *arr = new Array();
  Object *o = new Object();
  arr->add(o);
  t_true(arr->size_ == 1);
  arr->grow_();
  t_true(arr->size_ == 2);
  arr->grow_();
  t_true(arr->size_ == 4);
  arr->grow_();
  t_true(arr->size_ == 8);
  OK("Passed grow test");
}

// shrink test
void testShrink() {
  Array *arr = new Array();
  Object *o = new Object();
  arr->add(o);
  t_true(arr->size_ == 1);
  arr->grow_();
  t_true(arr->size_ == 2);
  arr->grow_();
  t_true(arr->size_ == 4);
  arr->grow_();
  t_true(arr->size_ == 8);
  arr->shrink_();
  t_true(arr->size_ == 4);
  arr->shrink_();
  t_true(arr->size_ == 2);
  arr->shrink_();
  t_true(arr->size_ == 1);
  OK("Passed shrink test");
}

// // add test nullptr
// void addTestNull() {
//   Array *arr = new Array();
//   Object *o = nullptr;
//   arr->add(o);
//   // dont know how to catch an assert false
//   OK("passed add nullptr");
// }

// add test good pointer
void addTest() {
  Array *arr = new Array();
  Object *o = new Object();
  arr->add(o);
  t_true(arr->length() == 1);
  t_true(arr->index_of(o) == 0);
  OK("passed add no idx test");
}

// add with index good
void addTestIdx() {
  Array *arr = new Array();
  Object *a = new Object();
  Object *b = new Object();
  Object *c = new Object();
  arr->add(a);
  arr->add(b);
  arr->add(0,c);
  t_true(arr->length() == 3);
  t_true(arr->index_of(c) == 0);
  OK("passed add with idx test");
}

// // add with index out of bounds
// void addTestBadIdx() {
//   Array *arr = new Array();
//   Object *a = new Object();
//   Object *b = new Object();
//   arr->add(a);
//   arr->add(2,b);
//   // dont know how to catch a assert false
//   OK("passed add with idx OOB test");
// }

// // add with index and object is nullptr
// void addTestIdxNull() {
//   Array *arr = new Array();
//   Object *a = new Object();
//   Object *b = nullptr;
//   arr->add(a);
//   arr->add(0,b);
//   // dont know how to catch a assert false
//   OK("passed add idx with nullptr test");
// }

// // add all array null array
// void addAllTestNull() {
//   Array *arr = new Array();
//   Array *arr2 = nullptr;
//   Object *a = new Object();
//   arr->add(a);
//   arr->add_all(arr2);
//   // dont know how to catch a assert false
//   OK("passed addall no idx nullptr test");
// }

// add all array
void addAllTest() {
  Array *arr = new Array();
  Array *arr2 = new Array();
  Object *a = new Object();
  Object *b = new Object();
  arr->add(a);
  arr2->add(b);
  arr->add_all(arr2);
  t_true(arr->length() == 2);
  t_true(arr->index_of(b) == 1);
  OK("passed addall no idx test");
}

// add all array with index
void addAllIdxTest() {
  Array *arr = new Array();
  Array *arr2 = new Array();
  Object *a = new Object();
  Object *b = new Object();
  Object *c = new Object();
  arr->add(a);
  arr2->add(b);
  arr2->add(c);
  arr->add_all(0,arr2);
  t_true(arr->length() == 3);
  t_true(arr->index_of(b) == 0);
  t_true(arr->index_of(c) == 1);
  t_true(arr->index_of(a) == 2);
  OK("passed addall no with idx test");
}

// // add all array with index out of bounds
// void addAllBadIdxTest() {
//   Array *arr = new Array();
//   Array *arr2 = new Array();
//   Object *a = new Object();
//   Object *b = new Object();
//   Object *c = new Object();
//   arr->add(a);
//   arr2->add(b);
//   arr2->add(c);
//   arr->add_all(3,arr2);
//   // dont know how to catch a assert false
//   OK("passed addall with idx OOB test");
// }

// // add all array with good index and nullptr array
// void addAllIdxNullTest() {
//   Array *arr = new Array();
//   Array *arr2 = nullptr;
//   Object *a = new Object();
//   arr->add(a);
//   arr->add_all(0,arr2);
//   // dont know how to catch a assert false
//   OK("passed addall with idx and nullptr test");
// }

// clear has values
void clearWithValuesTest() {
  Array *arr = new Array();
  Object *a = new Object();
  Object *b = new Object();
  Object *c = new Object();
  arr->add(a);
  arr->add(b);
  arr->add(c);
  t_true(arr->length() == 3);
  arr->clear();
  t_true(arr->length() == 0);
  OK("passed clear with values test");
}

// clear is empty
void clearWithoutValuesTest()  {
  Array *arr = new Array();
  t_true(arr->length() == 0);
  arr->clear();
  t_true(arr->length() == 0);
  OK("passed clear with values test");
}

// equals
void equalsTest()  {
  Array *arr = new Array();
  Array *arr2 = new Array();
  Object *a = new Object();
  Object *b = new Object();
  Object *c = new Object();
  arr->add(a);
  arr2->add(a);
  t_true(arr->equals(arr2));
  arr->add(b);
  arr2->add(b);
  arr->add(c);
  arr2->add(c);
  t_true(arr->equals(arr2));
  OK("passed equals test");
}

// not equals
void notEqualsTest()  {
  Array *arr = new Array();
  Array *arr2 = new Array();
  Object *a = new Object();
  Object *b = new Object();
  Object *c = new Object();
  arr->add(a);
  t_false(arr->equals(arr2));
  arr->add(b);
  arr2->add(b);
  arr->add(c);
  arr2->add(c);
  t_false(arr->equals(arr2));
  t_false(arr->equals(c));
  OK("passed not equals test");
}

// equals with a null
void equalsNullTest()  {
  Array *arr = new Array();
  Object *a = nullptr;
  t_false(arr->equals(a));
  // dont know how to catch a assert false
  OK("passed equals nullptr test");
}

//------------------------------------

// get good index
void getTest()  {
  Array *arr = new Array();
  Object *a = new Object();
  Object *b = new Object();
  Object *c = new Object();
  arr->add(a);
  arr->add(b);
  arr->add(0,c);
  t_true(arr->get(0)->equals(c));
  t_true(arr->get(1)->equals(a));
  t_true(arr->get(2)->equals(b));
  OK("passed get with idx test");
}

// // get index out of bounds
// void GetOOBTest()  {
//   Array *arr = new Array();
//   Object *a = new Object();
//   Object *b = new Object();
//   arr->add(a);
//   arr->add(b);
//   arr->get(3);
//   // dont know how to catch a assert false
//   OK("passed get with idx OOB test");
// }


// hash
void hashTest()  {
  Array *arr = new Array();
  Array *arr2 = new Array();
  Object *a = new Object();
  Object *b = new Object();
  arr->add(a);
  arr->add(b);
  arr2->add(a);
  arr2->add(b);
  t_true(arr->hash() == arr2->hash());
  OK("passed hash  test");
}

// index of with object
void idxOfObjTest()  {
  Array *arr = new Array();
  Object *a = new Object();
  Object *b = new Object();
  Object *c = new Object();
  arr->add(a);
  arr->add(b);
  arr->add(0,c);
  t_true(arr->index_of(c) == 0);
  t_true(arr->index_of(a) == 1);
  t_true(arr->index_of(b) == 2);
  OK("passed index of with object test");
}

// index of with object nullptr
void idxOfObjNullptrTest()  {
  Array *arr = new Array();
  t_false(arr->index_of(nullptr) == 0);
  // dont know how to catch a assert false
  OK("passed index of with null object test");
}

// // index of with object not found
// void idxOfBadObjTest()  {
//   Array *arr = new Array();
//   Object *a = new Object();
//   Object *b = new Object();
//   Object *c = new Object();
//   Object *d = new Object();
//   arr->add(a);
//   arr->add(b);
//   arr->add(0,c);
//   t_true(arr->index_of(d) == 0);
//   // dont know how to catch a assert false
//   OK("passed index of with object test");
// }

// remove with index
void removeIdxTest()  {
  Array *arr = new Array();
  Object *a = new Object();
  Object *b = new Object();
  Object *c = new Object();
  arr->add(a);
  arr->add(b);
  arr->add(0,c);
  size_t one = 1;
  arr->remove(one);
  t_true(arr->index_of(c) == 0);
  t_false(arr->index_of(a) == 1);
  t_true(arr->index_of(b) == 1);
  OK("passed remove with index test");
}

// // remove with index OOB
// void removeIdxOOBTest()  {
//   Array *arr = new Array();
//   Object *a = new Object();
//   Object *b = new Object();
//   Object *c = new Object();
//   arr->add(a);
//   arr->add(b);
//   arr->add(0,c);
//   arr->remove(5)
//   // dont know how to catch a assert false
//   OK("passed remove with index OOB test");
// }

// remove with Obj
void removeIdxObjTest()  {
  Array *arr = new Array();
  Object *a = new Object();
  Object *b = new Object();
  Object *c = new Object();
  arr->add(a);
  arr->add(b);
  arr->add(0,c);
  arr->remove(1);
  t_true(arr->index_of(c) == 0);
  t_false(arr->index_of(a) == 1);
  t_true(arr->index_of(b) == 1);
  OK("passed remove with index test");
}

// remove with non exist Obj
void removeIdxBadObjTest()  {
  Array *arr = new Array();
  Object *a = new Object();
  Object *b = new Object();
  Object *c = new Object();
  Object *d = new Object();
  arr->add(a);
  arr->add(b);
  arr->add(0,c);
  arr->remove(d);
  OK("passed remove with non existant object test");
}

// set with idx and obj
void setGoodObjAndIdxTest()  {
  Array *arr = new Array();
  Object *a = new Object();
  Object *b = new Object();
  Object *c = new Object();
  Object *d = new Object();
  arr->add(a);
  arr->add(b);
  arr->add(0, c);
  arr->set(1, d);
  t_true(arr->index_of(c) == 0);
  t_false(arr->index_of(a) == 1);
  t_true(arr->index_of(d) == 1);
  OK("passed remove with index test");
}

// // set with idx OOB and obj
// void setObjAndIdxOOBTest()  {
//   Array *arr = new Array();
//   Object *a = new Object();
//   Object *b = new Object();
//   Object *c = new Object();
//   Object *d = new Object();
//   arr->add(a);
//   arr->add(b);
//   arr->add(0, c);
//   arr->set(6, d)
//   // dont know how to catch a assert false
//   OK("passed set with index OOB test");
// }

// // set with idx and obj nullptr
// void setObjNullptrAndIdxTest()  {
//   Array *arr = new Array();
//   Object *a = new Object();
//   Object *b = new Object();
//   Object *c = new Object();
//   arr->add(a);
//   arr->add(b);
//   arr->add(0, c);
//   arr->set(1, nullptr)
//   // dont know how to catch a assert false
//   OK("passed set with index OOB test");
// }

// length 0
void lengthTest()  {
  Array *arr = new Array();
  t_true(arr->length() == 0);
  OK("passed length with size 0");
}

// length not 0
void lengthNot0Test()  {
  Array *arr = new Array();
  Object *a = new Object();
  Object *b = new Object();
  arr->add(a);
  arr->add(b);
  t_true(arr->length() == 2);
  OK("passed length test");
}

int main() {
  testGrow();
  testShrink();
  addTest();
  addTestIdx();
  clearWithValuesTest();
  clearWithoutValuesTest();
  equalsTest();
  notEqualsTest();
   equalsNullTest();
  getTest();
  hashTest();
  idxOfObjTest();
  idxOfObjNullptrTest();
  removeIdxTest();
  removeIdxObjTest();
  removeIdxBadObjTest();
  setGoodObjAndIdxTest();
  lengthTest();
  lengthNot0Test();
  return 0;
}
