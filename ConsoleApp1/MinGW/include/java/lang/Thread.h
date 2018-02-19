// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_Thread__
#define __java_lang_Thread__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      class RawData;
    }
  }
}

class _Jv_JNIEnv;
#define _JV_NOT_OWNER 1
#define _JV_INTERRUPTED 2

class java::lang::Thread : public ::java::lang::Object
{
public:
  static jint activeCount ();
  void checkAccess ();
  virtual jint countStackFrames ();
  static ::java::lang::Thread *currentThread ();
  virtual void destroy ();
  static void dumpStack ();
  static jint enumerate (JArray< ::java::lang::Thread *> *);
  ::java::lang::String *getName () { return name; }
  jint getPriority () { return priority; }
  ::java::lang::ThreadGroup *getThreadGroup () { return group; }
  static jboolean holdsLock (::java::lang::Object *);
  virtual void interrupt ();
  static jboolean interrupted ();
  virtual jboolean isInterrupted () { return interrupt_flag; }
  jboolean isAlive () { return alive_flag; }
  jboolean isDaemon () { return daemon_flag; }
  void join ();
  void join (jlong);
  void join (jlong, jint);
  void resume ();
private:
  void finish_ ();
  jboolean isInterrupted (jboolean);
public:
  virtual void run ();
  void setDaemon (jboolean);
  virtual ::java::lang::ClassLoader *getContextClassLoader ();
  virtual void setContextClassLoader (::java::lang::ClassLoader *);
  void setName (::java::lang::String *);
  void setPriority (jint);
  static void sleep (jlong);
  static void sleep (jlong, jint);
  virtual void start ();
  void stop ();
  void stop (::java::lang::Throwable *);
  void suspend ();
private:
  void initialize_native ();
  static ::java::lang::String *gen_name ();
public:
  Thread (::java::lang::ThreadGroup *, ::java::lang::Runnable *, ::java::lang::String *);
  Thread (::java::lang::ThreadGroup *, ::java::lang::Runnable *, ::java::lang::String *, jlong);
private:
  Thread (::java::lang::Thread *, ::java::lang::ThreadGroup *, ::java::lang::Runnable *, ::java::lang::String *);
public:
  Thread ();
  Thread (::java::lang::Runnable *);
  Thread (::java::lang::String *);
  Thread (::java::lang::ThreadGroup *, ::java::lang::Runnable *);
  Thread (::java::lang::ThreadGroup *, ::java::lang::String *);
  Thread (::java::lang::Runnable *, ::java::lang::String *);
  virtual ::java::lang::String *toString ();
  static void yield ();
  static const jint MAX_PRIORITY = 10L;
  static const jint MIN_PRIORITY = 1L;
  static const jint NORM_PRIORITY = 5L;
public: // actually package-private
  ::java::lang::ThreadGroup * __attribute__((aligned(__alignof__( ::java::lang::Object )))) group;
  ::java::lang::String *name;
private:
  ::java::lang::Runnable *runnable;
  jint priority;
  jboolean daemon_flag;
public: // actually package-private
  jboolean interrupt_flag;
private:
  jboolean alive_flag;
  jboolean startable_flag;
  ::java::lang::ClassLoader *context_class_loader;
public: // actually package-private
  ::gnu::gcj::RawData *interp_frame;
private:
  ::java::lang::Object *data;
  friend _Jv_JNIEnv * _Jv_GetCurrentJNIEnv ();
  friend void _Jv_SetCurrentJNIEnv (_Jv_JNIEnv *env);
  friend void _Jv_ThreadRun (java::lang::Thread* thread);
  friend jint _Jv_AttachCurrentThread(java::lang::Thread* thread);
  friend java::lang::Thread* _Jv_AttachCurrentThread(jstring name, java::lang::ThreadGroup* group);
  friend java::lang::Thread* _Jv_AttachCurrentThreadAsDaemon(jstring name, java::lang::ThreadGroup* group);
  friend jint _Jv_DetachCurrentThread ();
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_Thread__ */