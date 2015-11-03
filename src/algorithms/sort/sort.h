#pragma once
#include <nan.h>

using namespace v8;

void insertionSort(Local<Array>& array);
void selectionSort(Local<Array>& array);

NAN_METHOD(InsertionSort);
NAN_METHOD(SelectionSort);
