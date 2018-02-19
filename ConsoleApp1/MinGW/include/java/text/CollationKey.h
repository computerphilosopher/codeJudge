// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_text_CollationKey__
#define __java_text_CollationKey__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
      class CollationKey;
      class CollationElementIterator;
      class Collator;
    }
  }
}

class java::text::CollationKey : public ::java::lang::Object
{
public: // actually package-private
  CollationKey (::java::text::Collator *, ::java::text::CollationElementIterator *, ::java::lang::String *, jint);
public:
  jint compareTo (::java::text::CollationKey *);
  jint compareTo (::java::lang::Object *);
  jboolean equals (::java::lang::Object *);
  ::java::lang::String *getSourceString () { return originalText; }
  jint hashCode ();
  jbyteArray toByteArray ();
private:
  ::java::text::Collator * __attribute__((aligned(__alignof__( ::java::lang::Object )))) collator;
  ::java::lang::String *originalText;
  jintArray key;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_text_CollationKey__ */
