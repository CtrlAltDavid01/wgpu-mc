/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class dev_birb_wgpu_rust_Wgpu */

#ifndef _Included_dev_birb_wgpu_rust_Wgpu
#define _Included_dev_birb_wgpu_rust_Wgpu
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     dev_birb_wgpu_rust_Wgpu
 * Method:    initialize
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_dev_birb_wgpu_rust_Wgpu_initialize
  (JNIEnv *, jclass, jstring);

/*
 * Class:     dev_birb_wgpu_rust_Wgpu
 * Method:    updateWindowTitle
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_dev_birb_wgpu_rust_Wgpu_updateWindowTitle
  (JNIEnv *, jclass, jstring);

/*
 * Class:     dev_birb_wgpu_rust_Wgpu
 * Method:    registerEntry
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_dev_birb_wgpu_rust_Wgpu_registerEntry
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     dev_birb_wgpu_rust_Wgpu
 * Method:    doEventLoop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_dev_birb_wgpu_rust_Wgpu_doEventLoop
  (JNIEnv *, jclass);

/*
 * Class:     dev_birb_wgpu_rust_Wgpu
 * Method:    uploadChunk
 * Signature: ([Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_dev_birb_wgpu_rust_Wgpu_uploadChunk
  (JNIEnv *, jclass, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif
