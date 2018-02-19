// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_IndexedPropertyDescriptor__
#define __java_beans_IndexedPropertyDescriptor__

#pragma interface

#include <java/beans/PropertyDescriptor.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class IndexedPropertyDescriptor;
    }
  }
}

class java::beans::IndexedPropertyDescriptor : public ::java::beans::PropertyDescriptor
{
public:
  IndexedPropertyDescriptor (::java::lang::String *, ::java::lang::Class *);
  IndexedPropertyDescriptor (::java::lang::String *, ::java::lang::Class *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  IndexedPropertyDescriptor (::java::lang::String *, ::java::lang::reflect::Method *, ::java::lang::reflect::Method *, ::java::lang::reflect::Method *, ::java::lang::reflect::Method *);
  virtual ::java::lang::Class *getIndexedPropertyType () { return indexedPropertyType; }
  virtual ::java::lang::reflect::Method *getIndexedReadMethod () { return getIndex; }
  virtual ::java::lang::reflect::Method *getIndexedWriteMethod () { return setIndex; }
private:
  void findMethods (::java::lang::Class *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  ::java::lang::Class * __attribute__((aligned(__alignof__( ::java::beans::PropertyDescriptor )))) indexedPropertyType;
  ::java::lang::reflect::Method *setIndex;
  ::java::lang::reflect::Method *getIndex;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_beans_IndexedPropertyDescriptor__ */