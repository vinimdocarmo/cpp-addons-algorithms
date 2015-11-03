#include <nan.h>

using namespace v8;

void insertionSort(Local<Array>& array) {

   Local<Value> key;
   int j, i;
   uint32_t len;

   for(j = 1, len = array->Length(); j <= len - 1; j++) {
      key = array->Get(j);
      i = j - 1;
      while(i >= 0 && array->Get(i)->NumberValue() > key->NumberValue()) {
         array->Set(i + 1, array->Get(i));
	 i--;
      }
      array->Set(i + 1, key);
   }

}

void selectionSort(Local<Array>& array) {

}

NAN_METHOD(InsertionSort) {
   
   if(args.Length() == 0) {
      NanThrowTypeError("Wrong number of arguments");
      NanReturnUndefined();
   }

   NanScope();
   Local<Array> array = args[0].As<Array>();

   insertionSort(array);
   
   NanReturnValue(array);

}

NAN_METHOD(SelectionSort) {
   
   if(args.Length() == 0) {
      NanThrowTypeError("Wrong number of arguments");
      NanReturnUndefined();
   }

   NanScope();
   Local<Array> array = args[0].As<Array>();

   selectionSort(array);

   NanReturnValue(array);
}

