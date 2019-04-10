#include "jni.h"
#include "com_sf_test_Test.h"

JNIEXPORT void JNICALL Java_com_sf_test_Test_displayHelloWorld
  (JNIEnv *jv, jobject jo)
  {
        printf("Hello world\n");
        return ;
  }
