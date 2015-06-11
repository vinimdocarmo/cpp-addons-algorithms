#include <nan.h>

using namespace v8;

void insertionSort(Local<Array>& array) {

   Local<Value> key;
   int j, i;

   for(j = 1; j <= (int)array->Length() - 1; j++) {
      key = array->Get(j);
      i = j - 1;
      while(i >= 0 && array->Get(i)->NumberValue() > key->NumberValue()) {
         array->Set(i + 1, array->Get(i));
	 i--;
      }
      array->Set(i + 1, key);
   }

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

