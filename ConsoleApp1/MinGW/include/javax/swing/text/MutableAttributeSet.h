// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_MutableAttributeSet__
#define __javax_swing_text_MutableAttributeSet__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class MutableAttributeSet;
        class AttributeSet;
      }
    }
  }
}

class javax::swing::text::MutableAttributeSet : public ::java::lang::Object
{
public:
  virtual void addAttribute (::java::lang::Object *, ::java::lang::Object *) = 0;
  virtual void addAttributes (::javax::swing::text::AttributeSet *) = 0;
  virtual void removeAttribute (::java::lang::Object *) = 0;
  virtual void removeAttributes (::java::util::Enumeration *) = 0;
  virtual void removeAttributes (::javax::swing::text::AttributeSet *) = 0;
  virtual void setResolveParent (::javax::swing::text::AttributeSet *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_text_MutableAttributeSet__ */
