// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_text_SentenceBreakIterator__
#define __gnu_java_text_SentenceBreakIterator__

#pragma interface

#include <gnu/java/text/BaseBreakIterator.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace text
      {
        class SentenceBreakIterator;
      }
    }
  }
}

class gnu::java::text::SentenceBreakIterator : public ::gnu::java::text::BaseBreakIterator
{
public:
  virtual ::java::lang::Object *clone ();
  SentenceBreakIterator ();
private:
  SentenceBreakIterator (::gnu::java::text::SentenceBreakIterator *);
public:
  virtual jint next ();
private:
  jint previous_internal ();
public:
  virtual jint previous ();
private:
  jint __attribute__((aligned(__alignof__( ::gnu::java::text::BaseBreakIterator ))))  period;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_text_SentenceBreakIterator__ */
