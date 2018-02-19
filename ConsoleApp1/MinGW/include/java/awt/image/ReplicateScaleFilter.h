// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_ReplicateScaleFilter__
#define __java_awt_image_ReplicateScaleFilter__

#pragma interface

#include <java/awt/image/ImageFilter.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class ReplicateScaleFilter;
        class ColorModel;
      }
    }
  }
}

class java::awt::image::ReplicateScaleFilter : public ::java::awt::image::ImageFilter
{
public:
  ReplicateScaleFilter (jint, jint);
  virtual void setDimensions (jint, jint);
  virtual void setProperties (::java::util::Hashtable *);
  virtual void setPixels (jint, jint, jint, jint, ::java::awt::image::ColorModel *, jbyteArray, jint, jint);
  virtual void setPixels (jint, jint, jint, jint, ::java::awt::image::ColorModel *, jintArray, jint, jint);
public:  // actually protected
  jint __attribute__((aligned(__alignof__( ::java::awt::image::ImageFilter ))))  destHeight;
  jint destWidth;
  jint srcHeight;
  jint srcWidth;
  jintArray srcrows;
  jintArray srccols;
  ::java::lang::Object *outpixbuf;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_ReplicateScaleFilter__ */
