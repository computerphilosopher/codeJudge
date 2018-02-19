// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_text_Collator__
#define __java_text_Collator__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
      class Collator;
      class CollationKey;
    }
  }
}

class java::text::Collator : public ::java::lang::Object
{
public:  // actually protected
  Collator ();
public:
  virtual jint compare (::java::lang::String *, ::java::lang::String *) = 0;
  virtual jint compare (::java::lang::Object *, ::java::lang::Object *);
  virtual jboolean equals (::java::lang::Object *);
  virtual jboolean equals (::java::lang::String *, ::java::lang::String *);
  virtual ::java::lang::Object *clone ();
  static JArray< ::java::util::Locale *> *getAvailableLocales ();
  virtual ::java::text::CollationKey *getCollationKey (::java::lang::String *) = 0;
  virtual jint getDecomposition ();
  static ::java::text::Collator *getInstance ();
  static ::java::text::Collator *getInstance (::java::util::Locale *);
  virtual jint getStrength ();
  virtual jint hashCode () = 0;
  virtual void setDecomposition (jint);
  virtual void setStrength (jint);
public: // actually package-private
  void decomposeCharacter (jchar, ::java::lang::StringBuffer *);
public:
  static const jint PRIMARY = 0L;
  static const jint SECONDARY = 1L;
  static const jint TERTIARY = 2L;
  static const jint IDENTICAL = 3L;
  static const jint NO_DECOMPOSITION = 0L;
  static const jint CANONICAL_DECOMPOSITION = 1L;
  static const jint FULL_DECOMPOSITION = 2L;
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  decmp;
  jint strength;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_text_Collator__ */