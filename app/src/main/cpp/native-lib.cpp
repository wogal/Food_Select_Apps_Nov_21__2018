#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_ca_wogal_food_1select_1100_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello Wogal ,, from C++";
    return env->NewStringUTF(hello.c_str());
}
