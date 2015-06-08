#include <nan.h>
#include <iostream>
#include "./src/algorithms/sort/sort.h"

using namespace v8;
using namespace std;

NAN_METHOD(InsertionSort) {
   
   if(args.Length() == 0) {
      NanThrowTypeError("Wrong number of arguments");
      NanReturnUndefined();
   }

   NanScope();
   Local<Array> arr = args[0].As<Array>();

   insertionSort(arr);
   
   NanReturnValue(NanNew(Array::New()));
}

void Init(Handle<Object> exports) {
   exports->Set(NanNew("insertionSort"), NanNew<FunctionTemplate>(InsertionSort)->GetFunction());
}

NODE_MODULE(algorithms, Init);
