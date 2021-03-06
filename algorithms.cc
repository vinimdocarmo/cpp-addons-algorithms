#include <nan.h>
#include <iostream>
#include "./src/algorithms/sort/sort.h"

using namespace v8;
using namespace std;

void Init(Handle<Object> exports) {
   exports->Set(NanNew("insertionSort"), NanNew<FunctionTemplate>(InsertionSort)->GetFunction());
   exports->Set(NanNew("selectionSort"), NanNew<FunctionTemplate>(SelectionSort)->GetFunction());
}

NODE_MODULE(algorithms, Init);
