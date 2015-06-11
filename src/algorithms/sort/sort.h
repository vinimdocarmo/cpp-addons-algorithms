#pragma once
#include <nan.h>

using namespace v8;

void insertionSort(Local<Array>& array);

NAN_METHOD(InsertionSort);
