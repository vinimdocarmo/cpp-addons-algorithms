#include <nan.h>
#include <iostream>

using namespace v8;
using namespace std;

template<class T> T concat(T a, T b); 

NAN_METHOD(Hello) {
   string hello = "Hello,";
   string world = " World!";

   cout << concat(hello, world) << endl;

   NanReturnUndefined();
}

void Init(Handle<Object> exports) {
   exports->Set(NanNew("hello"), NanNew<FunctionTemplate>(Hello)->GetFunction());
}

NODE_MODULE(algorithms, Init);

template<class T> T concat(T a, T b) {
   return a + b;
}
