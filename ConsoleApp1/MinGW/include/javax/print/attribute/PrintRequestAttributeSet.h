// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_PrintRequestAttributeSet__
#define __javax_print_attribute_PrintRequestAttributeSet__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        class PrintRequestAttributeSet;
        class AttributeSet;
        class Attribute;
      }
    }
  }
}

class javax::print::attribute::PrintRequestAttributeSet : public ::java::lang::Object
{
public:
  virtual jboolean add (::javax::print::attribute::Attribute *) = 0;
  virtual jboolean addAll (::javax::print::attribute::AttributeSet *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_print_attribute_PrintRequestAttributeSet__ */
