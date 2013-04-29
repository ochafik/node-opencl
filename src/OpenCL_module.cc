#include "v8.h"

#include "node.h"

#include "node_buffer.h"

#import <OpenGL/OpenGL.h>

#import <OpenCL/OpenCL.h>

void _dummy_node_buffer_free_callback_(char* data, void* hint) {}
v8::Handle<v8::Value > OpenCL_clGetPlatformIDs(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("clGetPlatformIDs() requires 3 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 0: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[0]->ToNumber();
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_platform_idPtr1' at index 1: expected a Buffer")));
	char* cl_platform_idPtr1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uintPtr1' at index 2: expected a Buffer")));
	char* cl_uintPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetPlatformIDs((cl_uint)(*cl_uint1)->Value(), (cl_platform_id*)cl_platform_idPtr1, (cl_uint*)cl_uintPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetPlatformInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetPlatformInfo() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_platform_id1' at index 0: expected a Buffer")));
	char* cl_platform_id1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_platform_info1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_platform_info1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetPlatformInfo((cl_platform_id)cl_platform_id1, (cl_platform_info)(*cl_platform_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetDeviceIDs(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetDeviceIDs() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_platform_id1' at index 0: expected a Buffer")));
	char* cl_platform_id1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_type1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_device_type1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_idPtr1' at index 3: expected a Buffer")));
	char* cl_device_idPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uintPtr1' at index 4: expected a Buffer")));
	char* cl_uintPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetDeviceIDs((cl_platform_id)cl_platform_id1, (cl_device_type)(*cl_device_type1)->Value(), (cl_uint)(*cl_uint1)->Value(), (cl_device_id*)cl_device_idPtr1, (cl_uint*)cl_uintPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetDeviceInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetDeviceInfo() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_id1' at index 0: expected a Buffer")));
	char* cl_device_id1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_info1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_device_info1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetDeviceInfo((cl_device_id)cl_device_id1, (cl_device_info)(*cl_device_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateSubDevices(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clCreateSubDevices() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_id1' at index 0: expected a Buffer")));
	char* cl_device_id1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_partition_propertyPtr1' at index 1: expected a Buffer")));
	char* cl_device_partition_propertyPtr1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_idPtr1' at index 3: expected a Buffer")));
	char* cl_device_idPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uintPtr1' at index 4: expected a Buffer")));
	char* cl_uintPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clCreateSubDevices((cl_device_id)cl_device_id1, (const cl_device_partition_property*)cl_device_partition_propertyPtr1, (cl_uint)(*cl_uint1)->Value(), (cl_device_id*)cl_device_idPtr1, (cl_uint*)cl_uintPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clRetainDevice(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clRetainDevice() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_id1' at index 0: expected a Buffer")));
	char* cl_device_id1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clRetainDevice((cl_device_id)cl_device_id1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clReleaseDevice(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clReleaseDevice() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_id1' at index 0: expected a Buffer")));
	char* cl_device_id1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clReleaseDevice((cl_device_id)cl_device_id1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateContext(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clCreateContext() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context_propertiesPtr1' at index 0: expected a Buffer")));
	char* cl_context_propertiesPtr1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_idPtr1' at index 2: expected a Buffer")));
	char* cl_device_idPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'arg1' at index 3: expected a Buffer")));
	char* arg1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 4: expected a Buffer")));
	char* voidPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 5: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_context _return_ = clCreateContext((const cl_context_properties*)cl_context_propertiesPtr1, (cl_uint)(*cl_uint1)->Value(), (const cl_device_id*)cl_device_idPtr1, (void (*)(const char* charPtr1, const void* voidPtr1, size_t size_t1, void* voidPtr2))arg1, (void*)voidPtr1, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clCreateContextFromType(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clCreateContextFromType() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context_propertiesPtr1' at index 0: expected a Buffer")));
	char* cl_context_propertiesPtr1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_type1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_device_type1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'arg1' at index 2: expected a Buffer")));
	char* arg1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 4: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_context _return_ = clCreateContextFromType((const cl_context_properties*)cl_context_propertiesPtr1, (cl_device_type)(*cl_device_type1)->Value(), (void (*)(const char* charPtr1, const void* voidPtr1, size_t size_t1, void* voidPtr2))arg1, (void*)voidPtr1, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clRetainContext(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clRetainContext() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clRetainContext((cl_context)cl_context1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clReleaseContext(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clReleaseContext() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clReleaseContext((cl_context)cl_context1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetContextInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetContextInfo() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context_info1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_context_info1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetContextInfo((cl_context)cl_context1, (cl_context_info)(*cl_context_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateCommandQueue(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("clCreateCommandQueue() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_id1' at index 1: expected a Buffer")));
	char* cl_device_id1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue_properties1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_command_queue_properties1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 3: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_command_queue _return_ = clCreateCommandQueue((cl_context)cl_context1, (cl_device_id)cl_device_id1, (cl_command_queue_properties)(*cl_command_queue_properties1)->Value(), (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clRetainCommandQueue(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clRetainCommandQueue() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clRetainCommandQueue((cl_command_queue)cl_command_queue1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clReleaseCommandQueue(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clReleaseCommandQueue() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clReleaseCommandQueue((cl_command_queue)cl_command_queue1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetCommandQueueInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetCommandQueueInfo() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue_info1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_command_queue_info1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetCommandQueueInfo((cl_command_queue)cl_command_queue1, (cl_command_queue_info)(*cl_command_queue_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clCreateBuffer() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_flags1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_mem_flags1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 4: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_mem _return_ = clCreateBuffer((cl_context)cl_context1, (cl_mem_flags)(*cl_mem_flags1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clCreateSubBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clCreateSubBuffer() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 0: expected a Buffer")));
	char* cl_mem1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_flags1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_mem_flags1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_buffer_create_type1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_buffer_create_type1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 4: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_mem _return_ = clCreateSubBuffer((cl_mem)cl_mem1, (cl_mem_flags)(*cl_mem_flags1)->Value(), (cl_buffer_create_type)(*cl_buffer_create_type1)->Value(), (const void*)voidPtr1, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clCreateImage(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clCreateImage() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_flags1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_mem_flags1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_image_formatPtr1' at index 2: expected a Buffer")));
	char* cl_image_formatPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_image_descPtr1' at index 3: expected a Buffer")));
	char* cl_image_descPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 4: expected a Buffer")));
	char* voidPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 5: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_mem _return_ = clCreateImage((cl_context)cl_context1, (cl_mem_flags)(*cl_mem_flags1)->Value(), (const cl_image_format*)cl_image_formatPtr1, (const cl_image_desc*)cl_image_descPtr1, (void*)voidPtr1, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clRetainMemObject(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clRetainMemObject() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 0: expected a Buffer")));
	char* cl_mem1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clRetainMemObject((cl_mem)cl_mem1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clReleaseMemObject(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clReleaseMemObject() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 0: expected a Buffer")));
	char* cl_mem1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clReleaseMemObject((cl_mem)cl_mem1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetSupportedImageFormats(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clGetSupportedImageFormats() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_flags1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_mem_flags1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_object_type1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_mem_object_type1 = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 3: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[3]->ToNumber();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_image_formatPtr1' at index 4: expected a Buffer")));
	char* cl_image_formatPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uintPtr1' at index 5: expected a Buffer")));
	char* cl_uintPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetSupportedImageFormats((cl_context)cl_context1, (cl_mem_flags)(*cl_mem_flags1)->Value(), (cl_mem_object_type)(*cl_mem_object_type1)->Value(), (cl_uint)(*cl_uint1)->Value(), (cl_image_format*)cl_image_formatPtr1, (cl_uint*)cl_uintPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetMemObjectInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetMemObjectInfo() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 0: expected a Buffer")));
	char* cl_mem1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_info1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_mem_info1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetMemObjectInfo((cl_mem)cl_mem1, (cl_mem_info)(*cl_mem_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetImageInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetImageInfo() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 0: expected a Buffer")));
	char* cl_mem1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_image_info1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_image_info1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetImageInfo((cl_mem)cl_mem1, (cl_image_info)(*cl_image_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clSetMemObjectDestructorCallback(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("clSetMemObjectDestructorCallback() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 0: expected a Buffer")));
	char* cl_mem1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'arg1' at index 1: expected a Buffer")));
	char* arg1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 2: expected a Buffer")));
	char* voidPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clSetMemObjectDestructorCallback((cl_mem)cl_mem1, (void (*)(cl_mem cl_mem1, void* voidPtr1))arg1, (void*)voidPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateSampler(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clCreateSampler() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_bool1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_bool1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_addressing_mode1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_addressing_mode1 = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_filter_mode1' at index 3: expected a Number")));
	v8::Handle<v8::Number > cl_filter_mode1 = _arguments_[3]->ToNumber();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 4: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_sampler _return_ = clCreateSampler((cl_context)cl_context1, (cl_bool)(*cl_bool1)->Value(), (cl_addressing_mode)(*cl_addressing_mode1)->Value(), (cl_filter_mode)(*cl_filter_mode1)->Value(), (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clRetainSampler(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clRetainSampler() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_sampler1' at index 0: expected a Buffer")));
	char* cl_sampler1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clRetainSampler((cl_sampler)cl_sampler1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clReleaseSampler(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clReleaseSampler() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_sampler1' at index 0: expected a Buffer")));
	char* cl_sampler1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clReleaseSampler((cl_sampler)cl_sampler1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetSamplerInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetSamplerInfo() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_sampler1' at index 0: expected a Buffer")));
	char* cl_sampler1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_sampler_info1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_sampler_info1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetSamplerInfo((cl_sampler)cl_sampler1, (cl_sampler_info)(*cl_sampler_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateProgramWithSource(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clCreateProgramWithSource() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtrPtr1' at index 2: expected a Buffer")));
	char* charPtrPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 3: expected a Buffer")));
	char* size_tPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 4: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_program _return_ = clCreateProgramWithSource((cl_context)cl_context1, (cl_uint)(*cl_uint1)->Value(), (const char**)charPtrPtr1, (const size_t*)size_tPtr1, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clCreateProgramWithBinary(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 7)) 
		return v8::ThrowException(v8::String::New("clCreateProgramWithBinary() requires 7 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_idPtr1' at index 2: expected a Buffer")));
	char* cl_device_idPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 3: expected a Buffer")));
	char* size_tPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtrPtr1' at index 4: expected a Buffer")));
	char* charPtrPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 5: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!(_arguments_[6]->IsNull() || node::Buffer::HasInstance(_arguments_[6])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr2' at index 6: expected a Buffer")));
	char* cl_intPtr2 = _arguments_[6]->IsNull() ? NULL : node::Buffer::Data(_arguments_[6].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_program _return_ = clCreateProgramWithBinary((cl_context)cl_context1, (cl_uint)(*cl_uint1)->Value(), (const cl_device_id*)cl_device_idPtr1, (const size_t*)size_tPtr1, (const unsigned char**)charPtrPtr1, (cl_int*)cl_intPtr1, (cl_int*)cl_intPtr2);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clCreateProgramWithBuiltInKernels(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clCreateProgramWithBuiltInKernels() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_idPtr1' at index 2: expected a Buffer")));
	char* cl_device_idPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsString())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtr1' at index 3: expected a String")));
	v8::Handle<v8::String > charPtr1 = _arguments_[3]->ToString();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 4: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_program _return_ = clCreateProgramWithBuiltInKernels((cl_context)cl_context1, (cl_uint)(*cl_uint1)->Value(), (const cl_device_id*)cl_device_idPtr1, (const char*)(*v8::String::AsciiValue(charPtr1)), (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clRetainProgram(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clRetainProgram() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_program1' at index 0: expected a Buffer")));
	char* cl_program1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clRetainProgram((cl_program)cl_program1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clReleaseProgram(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clReleaseProgram() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_program1' at index 0: expected a Buffer")));
	char* cl_program1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clReleaseProgram((cl_program)cl_program1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clBuildProgram(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clBuildProgram() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_program1' at index 0: expected a Buffer")));
	char* cl_program1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_idPtr1' at index 2: expected a Buffer")));
	char* cl_device_idPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsString())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtr1' at index 3: expected a String")));
	v8::Handle<v8::String > charPtr1 = _arguments_[3]->ToString();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'arg1' at index 4: expected a Buffer")));
	char* arg1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 5: expected a Buffer")));
	char* voidPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clBuildProgram((cl_program)cl_program1, (cl_uint)(*cl_uint1)->Value(), (const cl_device_id*)cl_device_idPtr1, (const char*)(*v8::String::AsciiValue(charPtr1)), (void (*)(cl_program cl_program1, void* voidPtr1))arg1, (void*)voidPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCompileProgram(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 9)) 
		return v8::ThrowException(v8::String::New("clCompileProgram() requires 9 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_program1' at index 0: expected a Buffer")));
	char* cl_program1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_idPtr1' at index 2: expected a Buffer")));
	char* cl_device_idPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsString())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtr1' at index 3: expected a String")));
	v8::Handle<v8::String > charPtr1 = _arguments_[3]->ToString();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint2' at index 4: expected a Number")));
	v8::Handle<v8::Number > cl_uint2 = _arguments_[4]->ToNumber();
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_programPtr1' at index 5: expected a Buffer")));
	char* cl_programPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!(_arguments_[6]->IsNull() || node::Buffer::HasInstance(_arguments_[6])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtrPtr1' at index 6: expected a Buffer")));
	char* charPtrPtr1 = _arguments_[6]->IsNull() ? NULL : node::Buffer::Data(_arguments_[6].As<v8::Object >());
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'arg1' at index 7: expected a Buffer")));
	char* arg1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 8: expected a Buffer")));
	char* voidPtr1 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clCompileProgram((cl_program)cl_program1, (cl_uint)(*cl_uint1)->Value(), (const cl_device_id*)cl_device_idPtr1, (const char*)(*v8::String::AsciiValue(charPtr1)), (cl_uint)(*cl_uint2)->Value(), (const cl_program*)cl_programPtr1, (const char**)charPtrPtr1, (void (*)(cl_program cl_program1, void* voidPtr1))arg1, (void*)voidPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clLinkProgram(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 9)) 
		return v8::ThrowException(v8::String::New("clLinkProgram() requires 9 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_idPtr1' at index 2: expected a Buffer")));
	char* cl_device_idPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsString())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtr1' at index 3: expected a String")));
	v8::Handle<v8::String > charPtr1 = _arguments_[3]->ToString();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint2' at index 4: expected a Number")));
	v8::Handle<v8::Number > cl_uint2 = _arguments_[4]->ToNumber();
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_programPtr1' at index 5: expected a Buffer")));
	char* cl_programPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!(_arguments_[6]->IsNull() || node::Buffer::HasInstance(_arguments_[6])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'arg1' at index 6: expected a Buffer")));
	char* arg1 = _arguments_[6]->IsNull() ? NULL : node::Buffer::Data(_arguments_[6].As<v8::Object >());
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 7: expected a Buffer")));
	char* voidPtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 8: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_program _return_ = clLinkProgram((cl_context)cl_context1, (cl_uint)(*cl_uint1)->Value(), (const cl_device_id*)cl_device_idPtr1, (const char*)(*v8::String::AsciiValue(charPtr1)), (cl_uint)(*cl_uint2)->Value(), (const cl_program*)cl_programPtr1, (void (*)(cl_program cl_program1, void* voidPtr1))arg1, (void*)voidPtr1, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clUnloadPlatformCompiler(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clUnloadPlatformCompiler() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_platform_id1' at index 0: expected a Buffer")));
	char* cl_platform_id1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clUnloadPlatformCompiler((cl_platform_id)cl_platform_id1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetProgramInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetProgramInfo() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_program1' at index 0: expected a Buffer")));
	char* cl_program1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_program_info1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_program_info1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetProgramInfo((cl_program)cl_program1, (cl_program_info)(*cl_program_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetProgramBuildInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clGetProgramBuildInfo() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_program1' at index 0: expected a Buffer")));
	char* cl_program1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_id1' at index 1: expected a Buffer")));
	char* cl_device_id1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_program_build_info1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_program_build_info1 = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 3: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[3]->ToNumber();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 4: expected a Buffer")));
	char* voidPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 5: expected a Buffer")));
	char* size_tPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetProgramBuildInfo((cl_program)cl_program1, (cl_device_id)cl_device_id1, (cl_program_build_info)(*cl_program_build_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateKernel(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("clCreateKernel() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_program1' at index 0: expected a Buffer")));
	char* cl_program1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsString())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtr1' at index 1: expected a String")));
	v8::Handle<v8::String > charPtr1 = _arguments_[1]->ToString();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 2: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_kernel _return_ = clCreateKernel((cl_program)cl_program1, (const char*)(*v8::String::AsciiValue(charPtr1)), (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clCreateKernelsInProgram(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("clCreateKernelsInProgram() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_program1' at index 0: expected a Buffer")));
	char* cl_program1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernelPtr1' at index 2: expected a Buffer")));
	char* cl_kernelPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uintPtr1' at index 3: expected a Buffer")));
	char* cl_uintPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clCreateKernelsInProgram((cl_program)cl_program1, (cl_uint)(*cl_uint1)->Value(), (cl_kernel*)cl_kernelPtr1, (cl_uint*)cl_uintPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clRetainKernel(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clRetainKernel() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernel1' at index 0: expected a Buffer")));
	char* cl_kernel1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clRetainKernel((cl_kernel)cl_kernel1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clReleaseKernel(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clReleaseKernel() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernel1' at index 0: expected a Buffer")));
	char* cl_kernel1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clReleaseKernel((cl_kernel)cl_kernel1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clSetKernelArg(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("clSetKernelArg() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernel1' at index 0: expected a Buffer")));
	char* cl_kernel1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clSetKernelArg((cl_kernel)cl_kernel1, (cl_uint)(*cl_uint1)->Value(), (size_t)(*size_t1)->Value(), (const void*)voidPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetKernelInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetKernelInfo() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernel1' at index 0: expected a Buffer")));
	char* cl_kernel1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernel_info1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_kernel_info1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetKernelInfo((cl_kernel)cl_kernel1, (cl_kernel_info)(*cl_kernel_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetKernelArgInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clGetKernelArgInfo() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernel1' at index 0: expected a Buffer")));
	char* cl_kernel1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernel_arg_info1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_kernel_arg_info1 = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 3: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[3]->ToNumber();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 4: expected a Buffer")));
	char* voidPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 5: expected a Buffer")));
	char* size_tPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetKernelArgInfo((cl_kernel)cl_kernel1, (cl_uint)(*cl_uint1)->Value(), (cl_kernel_arg_info)(*cl_kernel_arg_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetKernelWorkGroupInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clGetKernelWorkGroupInfo() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernel1' at index 0: expected a Buffer")));
	char* cl_kernel1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_id1' at index 1: expected a Buffer")));
	char* cl_device_id1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernel_work_group_info1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_kernel_work_group_info1 = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 3: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[3]->ToNumber();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 4: expected a Buffer")));
	char* voidPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 5: expected a Buffer")));
	char* size_tPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetKernelWorkGroupInfo((cl_kernel)cl_kernel1, (cl_device_id)cl_device_id1, (cl_kernel_work_group_info)(*cl_kernel_work_group_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clWaitForEvents(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("clWaitForEvents() requires 2 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 0: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[0]->ToNumber();
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 1: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clWaitForEvents((cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetEventInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetEventInfo() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_event1' at index 0: expected a Buffer")));
	char* cl_event1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_event_info1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_event_info1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetEventInfo((cl_event)cl_event1, (cl_event_info)(*cl_event_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateUserEvent(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("clCreateUserEvent() requires 2 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 1: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_event _return_ = clCreateUserEvent((cl_context)cl_context1, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clRetainEvent(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clRetainEvent() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_event1' at index 0: expected a Buffer")));
	char* cl_event1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clRetainEvent((cl_event)cl_event1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clReleaseEvent(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clReleaseEvent() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_event1' at index 0: expected a Buffer")));
	char* cl_event1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clReleaseEvent((cl_event)cl_event1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clSetUserEventStatus(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("clSetUserEventStatus() requires 2 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_event1' at index 0: expected a Buffer")));
	char* cl_event1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_int1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_int1 = _arguments_[1]->ToNumber();
	v8::HandleScope _scope_;
	cl_int _return_ = clSetUserEventStatus((cl_event)cl_event1, (cl_int)(*cl_int1)->Value());
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clSetEventCallback(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("clSetEventCallback() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_event1' at index 0: expected a Buffer")));
	char* cl_event1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_int1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_int1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'arg1' at index 2: expected a Buffer")));
	char* arg1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clSetEventCallback((cl_event)cl_event1, (cl_int)(*cl_int1)->Value(), (void (*)(cl_event cl_event1, cl_int cl_int1, void* voidPtr1))arg1, (void*)voidPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetEventProfilingInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetEventProfilingInfo() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_event1' at index 0: expected a Buffer")));
	char* cl_event1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_profiling_info1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_profiling_info1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetEventProfilingInfo((cl_event)cl_event1, (cl_profiling_info)(*cl_profiling_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clFlush(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clFlush() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clFlush((cl_command_queue)cl_command_queue1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clFinish(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clFinish() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clFinish((cl_command_queue)cl_command_queue1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueReadBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 9)) 
		return v8::ThrowException(v8::String::New("clEnqueueReadBuffer() requires 9 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_bool1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_bool1 = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 3: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t2' at index 4: expected a Number")));
	v8::Handle<v8::Number > size_t2 = _arguments_[4]->ToNumber();
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 5: expected a Buffer")));
	char* voidPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 6: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[6]->ToNumber();
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 7: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 8: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueReadBuffer((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (cl_bool)(*cl_bool1)->Value(), (size_t)(*size_t1)->Value(), (size_t)(*size_t2)->Value(), (void*)voidPtr1, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueReadBufferRect(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 14)) 
		return v8::ThrowException(v8::String::New("clEnqueueReadBufferRect() requires 14 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_bool1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_bool1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 3: expected a Buffer")));
	char* size_tPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr2' at index 4: expected a Buffer")));
	char* size_tPtr2 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr3' at index 5: expected a Buffer")));
	char* size_tPtr3 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 6: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[6]->ToNumber();
	if ((!_arguments_[7]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t2' at index 7: expected a Number")));
	v8::Handle<v8::Number > size_t2 = _arguments_[7]->ToNumber();
	if ((!_arguments_[8]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t3' at index 8: expected a Number")));
	v8::Handle<v8::Number > size_t3 = _arguments_[8]->ToNumber();
	if ((!_arguments_[9]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t4' at index 9: expected a Number")));
	v8::Handle<v8::Number > size_t4 = _arguments_[9]->ToNumber();
	if ((!(_arguments_[10]->IsNull() || node::Buffer::HasInstance(_arguments_[10])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 10: expected a Buffer")));
	char* voidPtr1 = _arguments_[10]->IsNull() ? NULL : node::Buffer::Data(_arguments_[10].As<v8::Object >());
	if ((!_arguments_[11]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 11: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[11]->ToNumber();
	if ((!(_arguments_[12]->IsNull() || node::Buffer::HasInstance(_arguments_[12])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 12: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[12]->IsNull() ? NULL : node::Buffer::Data(_arguments_[12].As<v8::Object >());
	if ((!(_arguments_[13]->IsNull() || node::Buffer::HasInstance(_arguments_[13])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 13: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[13]->IsNull() ? NULL : node::Buffer::Data(_arguments_[13].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueReadBufferRect((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (cl_bool)(*cl_bool1)->Value(), (const size_t*)size_tPtr1, (const size_t*)size_tPtr2, (const size_t*)size_tPtr3, (size_t)(*size_t1)->Value(), (size_t)(*size_t2)->Value(), (size_t)(*size_t3)->Value(), (size_t)(*size_t4)->Value(), (void*)voidPtr1, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueWriteBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 9)) 
		return v8::ThrowException(v8::String::New("clEnqueueWriteBuffer() requires 9 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_bool1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_bool1 = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 3: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t2' at index 4: expected a Number")));
	v8::Handle<v8::Number > size_t2 = _arguments_[4]->ToNumber();
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 5: expected a Buffer")));
	char* voidPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 6: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[6]->ToNumber();
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 7: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 8: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueWriteBuffer((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (cl_bool)(*cl_bool1)->Value(), (size_t)(*size_t1)->Value(), (size_t)(*size_t2)->Value(), (const void*)voidPtr1, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueWriteBufferRect(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 14)) 
		return v8::ThrowException(v8::String::New("clEnqueueWriteBufferRect() requires 14 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_bool1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_bool1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 3: expected a Buffer")));
	char* size_tPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr2' at index 4: expected a Buffer")));
	char* size_tPtr2 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr3' at index 5: expected a Buffer")));
	char* size_tPtr3 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 6: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[6]->ToNumber();
	if ((!_arguments_[7]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t2' at index 7: expected a Number")));
	v8::Handle<v8::Number > size_t2 = _arguments_[7]->ToNumber();
	if ((!_arguments_[8]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t3' at index 8: expected a Number")));
	v8::Handle<v8::Number > size_t3 = _arguments_[8]->ToNumber();
	if ((!_arguments_[9]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t4' at index 9: expected a Number")));
	v8::Handle<v8::Number > size_t4 = _arguments_[9]->ToNumber();
	if ((!(_arguments_[10]->IsNull() || node::Buffer::HasInstance(_arguments_[10])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 10: expected a Buffer")));
	char* voidPtr1 = _arguments_[10]->IsNull() ? NULL : node::Buffer::Data(_arguments_[10].As<v8::Object >());
	if ((!_arguments_[11]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 11: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[11]->ToNumber();
	if ((!(_arguments_[12]->IsNull() || node::Buffer::HasInstance(_arguments_[12])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 12: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[12]->IsNull() ? NULL : node::Buffer::Data(_arguments_[12].As<v8::Object >());
	if ((!(_arguments_[13]->IsNull() || node::Buffer::HasInstance(_arguments_[13])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 13: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[13]->IsNull() ? NULL : node::Buffer::Data(_arguments_[13].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueWriteBufferRect((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (cl_bool)(*cl_bool1)->Value(), (const size_t*)size_tPtr1, (const size_t*)size_tPtr2, (const size_t*)size_tPtr3, (size_t)(*size_t1)->Value(), (size_t)(*size_t2)->Value(), (size_t)(*size_t3)->Value(), (size_t)(*size_t4)->Value(), (const void*)voidPtr1, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueFillBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 9)) 
		return v8::ThrowException(v8::String::New("clEnqueueFillBuffer() requires 9 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 2: expected a Buffer")));
	char* voidPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 3: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t2' at index 4: expected a Number")));
	v8::Handle<v8::Number > size_t2 = _arguments_[4]->ToNumber();
	if ((!_arguments_[5]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t3' at index 5: expected a Number")));
	v8::Handle<v8::Number > size_t3 = _arguments_[5]->ToNumber();
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 6: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[6]->ToNumber();
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 7: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 8: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueFillBuffer((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (const void*)voidPtr1, (size_t)(*size_t1)->Value(), (size_t)(*size_t2)->Value(), (size_t)(*size_t3)->Value(), (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueCopyBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 9)) 
		return v8::ThrowException(v8::String::New("clEnqueueCopyBuffer() requires 9 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem2' at index 2: expected a Buffer")));
	char* cl_mem2 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 3: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t2' at index 4: expected a Number")));
	v8::Handle<v8::Number > size_t2 = _arguments_[4]->ToNumber();
	if ((!_arguments_[5]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t3' at index 5: expected a Number")));
	v8::Handle<v8::Number > size_t3 = _arguments_[5]->ToNumber();
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 6: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[6]->ToNumber();
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 7: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 8: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueCopyBuffer((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (cl_mem)cl_mem2, (size_t)(*size_t1)->Value(), (size_t)(*size_t2)->Value(), (size_t)(*size_t3)->Value(), (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueCopyBufferRect(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 13)) 
		return v8::ThrowException(v8::String::New("clEnqueueCopyBufferRect() requires 13 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem2' at index 2: expected a Buffer")));
	char* cl_mem2 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 3: expected a Buffer")));
	char* size_tPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr2' at index 4: expected a Buffer")));
	char* size_tPtr2 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr3' at index 5: expected a Buffer")));
	char* size_tPtr3 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 6: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[6]->ToNumber();
	if ((!_arguments_[7]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t2' at index 7: expected a Number")));
	v8::Handle<v8::Number > size_t2 = _arguments_[7]->ToNumber();
	if ((!_arguments_[8]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t3' at index 8: expected a Number")));
	v8::Handle<v8::Number > size_t3 = _arguments_[8]->ToNumber();
	if ((!_arguments_[9]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t4' at index 9: expected a Number")));
	v8::Handle<v8::Number > size_t4 = _arguments_[9]->ToNumber();
	if ((!_arguments_[10]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 10: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[10]->ToNumber();
	if ((!(_arguments_[11]->IsNull() || node::Buffer::HasInstance(_arguments_[11])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 11: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[11]->IsNull() ? NULL : node::Buffer::Data(_arguments_[11].As<v8::Object >());
	if ((!(_arguments_[12]->IsNull() || node::Buffer::HasInstance(_arguments_[12])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 12: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[12]->IsNull() ? NULL : node::Buffer::Data(_arguments_[12].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueCopyBufferRect((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (cl_mem)cl_mem2, (const size_t*)size_tPtr1, (const size_t*)size_tPtr2, (const size_t*)size_tPtr3, (size_t)(*size_t1)->Value(), (size_t)(*size_t2)->Value(), (size_t)(*size_t3)->Value(), (size_t)(*size_t4)->Value(), (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueReadImage(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 11)) 
		return v8::ThrowException(v8::String::New("clEnqueueReadImage() requires 11 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_bool1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_bool1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 3: expected a Buffer")));
	char* size_tPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr2' at index 4: expected a Buffer")));
	char* size_tPtr2 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!_arguments_[5]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 5: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[5]->ToNumber();
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t2' at index 6: expected a Number")));
	v8::Handle<v8::Number > size_t2 = _arguments_[6]->ToNumber();
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 7: expected a Buffer")));
	char* voidPtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!_arguments_[8]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 8: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[8]->ToNumber();
	if ((!(_arguments_[9]->IsNull() || node::Buffer::HasInstance(_arguments_[9])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 9: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[9]->IsNull() ? NULL : node::Buffer::Data(_arguments_[9].As<v8::Object >());
	if ((!(_arguments_[10]->IsNull() || node::Buffer::HasInstance(_arguments_[10])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 10: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[10]->IsNull() ? NULL : node::Buffer::Data(_arguments_[10].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueReadImage((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (cl_bool)(*cl_bool1)->Value(), (const size_t*)size_tPtr1, (const size_t*)size_tPtr2, (size_t)(*size_t1)->Value(), (size_t)(*size_t2)->Value(), (void*)voidPtr1, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueWriteImage(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 11)) 
		return v8::ThrowException(v8::String::New("clEnqueueWriteImage() requires 11 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_bool1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_bool1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 3: expected a Buffer")));
	char* size_tPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr2' at index 4: expected a Buffer")));
	char* size_tPtr2 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!_arguments_[5]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 5: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[5]->ToNumber();
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t2' at index 6: expected a Number")));
	v8::Handle<v8::Number > size_t2 = _arguments_[6]->ToNumber();
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 7: expected a Buffer")));
	char* voidPtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!_arguments_[8]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 8: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[8]->ToNumber();
	if ((!(_arguments_[9]->IsNull() || node::Buffer::HasInstance(_arguments_[9])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 9: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[9]->IsNull() ? NULL : node::Buffer::Data(_arguments_[9].As<v8::Object >());
	if ((!(_arguments_[10]->IsNull() || node::Buffer::HasInstance(_arguments_[10])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 10: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[10]->IsNull() ? NULL : node::Buffer::Data(_arguments_[10].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueWriteImage((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (cl_bool)(*cl_bool1)->Value(), (const size_t*)size_tPtr1, (const size_t*)size_tPtr2, (size_t)(*size_t1)->Value(), (size_t)(*size_t2)->Value(), (const void*)voidPtr1, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueFillImage(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 8)) 
		return v8::ThrowException(v8::String::New("clEnqueueFillImage() requires 8 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 2: expected a Buffer")));
	char* voidPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 3: expected a Buffer")));
	char* size_tPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr2' at index 4: expected a Buffer")));
	char* size_tPtr2 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!_arguments_[5]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 5: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[5]->ToNumber();
	if ((!(_arguments_[6]->IsNull() || node::Buffer::HasInstance(_arguments_[6])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 6: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[6]->IsNull() ? NULL : node::Buffer::Data(_arguments_[6].As<v8::Object >());
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 7: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueFillImage((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (const void*)voidPtr1, (const size_t*)size_tPtr1, (const size_t*)size_tPtr2, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueCopyImage(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 9)) 
		return v8::ThrowException(v8::String::New("clEnqueueCopyImage() requires 9 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem2' at index 2: expected a Buffer")));
	char* cl_mem2 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 3: expected a Buffer")));
	char* size_tPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr2' at index 4: expected a Buffer")));
	char* size_tPtr2 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr3' at index 5: expected a Buffer")));
	char* size_tPtr3 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 6: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[6]->ToNumber();
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 7: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 8: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueCopyImage((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (cl_mem)cl_mem2, (const size_t*)size_tPtr1, (const size_t*)size_tPtr2, (const size_t*)size_tPtr3, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueCopyImageToBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 9)) 
		return v8::ThrowException(v8::String::New("clEnqueueCopyImageToBuffer() requires 9 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem2' at index 2: expected a Buffer")));
	char* cl_mem2 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 3: expected a Buffer")));
	char* size_tPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr2' at index 4: expected a Buffer")));
	char* size_tPtr2 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!_arguments_[5]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 5: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[5]->ToNumber();
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 6: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[6]->ToNumber();
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 7: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 8: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueCopyImageToBuffer((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (cl_mem)cl_mem2, (const size_t*)size_tPtr1, (const size_t*)size_tPtr2, (size_t)(*size_t1)->Value(), (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueCopyBufferToImage(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 9)) 
		return v8::ThrowException(v8::String::New("clEnqueueCopyBufferToImage() requires 9 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem2' at index 2: expected a Buffer")));
	char* cl_mem2 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 3: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[3]->ToNumber();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr2' at index 5: expected a Buffer")));
	char* size_tPtr2 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 6: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[6]->ToNumber();
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 7: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 8: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueCopyBufferToImage((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (cl_mem)cl_mem2, (size_t)(*size_t1)->Value(), (const size_t*)size_tPtr1, (const size_t*)size_tPtr2, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueMapBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 10)) 
		return v8::ThrowException(v8::String::New("clEnqueueMapBuffer() requires 10 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_bool1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_bool1 = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_map_flags1' at index 3: expected a Number")));
	v8::Handle<v8::Number > cl_map_flags1 = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 4: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[4]->ToNumber();
	if ((!_arguments_[5]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t2' at index 5: expected a Number")));
	v8::Handle<v8::Number > size_t2 = _arguments_[5]->ToNumber();
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 6: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[6]->ToNumber();
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 7: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 8: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	if ((!(_arguments_[9]->IsNull() || node::Buffer::HasInstance(_arguments_[9])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 9: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[9]->IsNull() ? NULL : node::Buffer::Data(_arguments_[9].As<v8::Object >());
	v8::HandleScope _scope_;
	void* _return_ = clEnqueueMapBuffer((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (cl_bool)(*cl_bool1)->Value(), (cl_map_flags)(*cl_map_flags1)->Value(), (size_t)(*size_t1)->Value(), (size_t)(*size_t2)->Value(), (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clEnqueueMapImage(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 12)) 
		return v8::ThrowException(v8::String::New("clEnqueueMapImage() requires 12 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_bool1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_bool1 = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_map_flags1' at index 3: expected a Number")));
	v8::Handle<v8::Number > cl_map_flags1 = _arguments_[3]->ToNumber();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr2' at index 5: expected a Buffer")));
	char* size_tPtr2 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!(_arguments_[6]->IsNull() || node::Buffer::HasInstance(_arguments_[6])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr3' at index 6: expected a Buffer")));
	char* size_tPtr3 = _arguments_[6]->IsNull() ? NULL : node::Buffer::Data(_arguments_[6].As<v8::Object >());
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr4' at index 7: expected a Buffer")));
	char* size_tPtr4 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!_arguments_[8]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 8: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[8]->ToNumber();
	if ((!(_arguments_[9]->IsNull() || node::Buffer::HasInstance(_arguments_[9])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 9: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[9]->IsNull() ? NULL : node::Buffer::Data(_arguments_[9].As<v8::Object >());
	if ((!(_arguments_[10]->IsNull() || node::Buffer::HasInstance(_arguments_[10])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 10: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[10]->IsNull() ? NULL : node::Buffer::Data(_arguments_[10].As<v8::Object >());
	if ((!(_arguments_[11]->IsNull() || node::Buffer::HasInstance(_arguments_[11])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 11: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[11]->IsNull() ? NULL : node::Buffer::Data(_arguments_[11].As<v8::Object >());
	v8::HandleScope _scope_;
	void* _return_ = clEnqueueMapImage((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (cl_bool)(*cl_bool1)->Value(), (cl_map_flags)(*cl_map_flags1)->Value(), (const size_t*)size_tPtr1, (const size_t*)size_tPtr2, (size_t*)size_tPtr3, (size_t*)size_tPtr4, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clEnqueueUnmapMemObject(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clEnqueueUnmapMemObject() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 1: expected a Buffer")));
	char* cl_mem1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 2: expected a Buffer")));
	char* voidPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 3: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[3]->ToNumber();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 4: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 5: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueUnmapMemObject((cl_command_queue)cl_command_queue1, (cl_mem)cl_mem1, (void*)voidPtr1, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueMigrateMemObjects(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 7)) 
		return v8::ThrowException(v8::String::New("clEnqueueMigrateMemObjects() requires 7 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_memPtr1' at index 2: expected a Buffer")));
	char* cl_memPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_migration_flags1' at index 3: expected a Number")));
	v8::Handle<v8::Number > cl_mem_migration_flags1 = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint2' at index 4: expected a Number")));
	v8::Handle<v8::Number > cl_uint2 = _arguments_[4]->ToNumber();
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 5: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!(_arguments_[6]->IsNull() || node::Buffer::HasInstance(_arguments_[6])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 6: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[6]->IsNull() ? NULL : node::Buffer::Data(_arguments_[6].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueMigrateMemObjects((cl_command_queue)cl_command_queue1, (cl_uint)(*cl_uint1)->Value(), (const cl_mem*)cl_memPtr1, (cl_mem_migration_flags)(*cl_mem_migration_flags1)->Value(), (cl_uint)(*cl_uint2)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueNDRangeKernel(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 9)) 
		return v8::ThrowException(v8::String::New("clEnqueueNDRangeKernel() requires 9 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernel1' at index 1: expected a Buffer")));
	char* cl_kernel1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 3: expected a Buffer")));
	char* size_tPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr2' at index 4: expected a Buffer")));
	char* size_tPtr2 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr3' at index 5: expected a Buffer")));
	char* size_tPtr3 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint2' at index 6: expected a Number")));
	v8::Handle<v8::Number > cl_uint2 = _arguments_[6]->ToNumber();
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 7: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 8: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueNDRangeKernel((cl_command_queue)cl_command_queue1, (cl_kernel)cl_kernel1, (cl_uint)(*cl_uint1)->Value(), (const size_t*)size_tPtr1, (const size_t*)size_tPtr2, (const size_t*)size_tPtr3, (cl_uint)(*cl_uint2)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueTask(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clEnqueueTask() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernel1' at index 1: expected a Buffer")));
	char* cl_kernel1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 3: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 4: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueTask((cl_command_queue)cl_command_queue1, (cl_kernel)cl_kernel1, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueNativeKernel(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 10)) 
		return v8::ThrowException(v8::String::New("clEnqueueNativeKernel() requires 10 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'arg1' at index 1: expected a Buffer")));
	char* arg1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 2: expected a Buffer")));
	char* voidPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 3: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 4: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[4]->ToNumber();
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_memPtr1' at index 5: expected a Buffer")));
	char* cl_memPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!(_arguments_[6]->IsNull() || node::Buffer::HasInstance(_arguments_[6])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtrPtr1' at index 6: expected a Buffer")));
	char* voidPtrPtr1 = _arguments_[6]->IsNull() ? NULL : node::Buffer::Data(_arguments_[6].As<v8::Object >());
	if ((!_arguments_[7]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint2' at index 7: expected a Number")));
	v8::Handle<v8::Number > cl_uint2 = _arguments_[7]->ToNumber();
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 8: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	if ((!(_arguments_[9]->IsNull() || node::Buffer::HasInstance(_arguments_[9])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 9: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[9]->IsNull() ? NULL : node::Buffer::Data(_arguments_[9].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueNativeKernel((cl_command_queue)cl_command_queue1, (void (*)(void* voidPtr1))arg1, (void*)voidPtr1, (size_t)(*size_t1)->Value(), (cl_uint)(*cl_uint1)->Value(), (const cl_mem*)cl_memPtr1, (const void**)voidPtrPtr1, (cl_uint)(*cl_uint2)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueMarkerWithWaitList(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("clEnqueueMarkerWithWaitList() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 2: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 3: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueMarkerWithWaitList((cl_command_queue)cl_command_queue1, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueBarrierWithWaitList(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("clEnqueueBarrierWithWaitList() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 2: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 3: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueBarrierWithWaitList((cl_command_queue)cl_command_queue1, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clSetPrintfCallback(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("clSetPrintfCallback() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'arg1' at index 1: expected a Buffer")));
	char* arg1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 2: expected a Buffer")));
	char* voidPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clSetPrintfCallback((cl_context)cl_context1, (void (*)(cl_context cl_context1, cl_uint cl_uint1, char* charPtr1, void* voidPtr1))arg1, (void*)voidPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetExtensionFunctionAddressForPlatform(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("clGetExtensionFunctionAddressForPlatform() requires 2 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_platform_id1' at index 0: expected a Buffer")));
	char* cl_platform_id1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsString())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtr1' at index 1: expected a String")));
	v8::Handle<v8::String > charPtr1 = _arguments_[1]->ToString();
	v8::HandleScope _scope_;
	void* _return_ = clGetExtensionFunctionAddressForPlatform((cl_platform_id)cl_platform_id1, (const char*)(*v8::String::AsciiValue(charPtr1)));
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clSetCommandQueueProperty(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("clSetCommandQueueProperty() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue_properties1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_command_queue_properties1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_bool1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_bool1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue_propertiesPtr1' at index 3: expected a Buffer")));
	char* cl_command_queue_propertiesPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clSetCommandQueueProperty((cl_command_queue)cl_command_queue1, (cl_command_queue_properties)(*cl_command_queue_properties1)->Value(), (cl_bool)(*cl_bool1)->Value(), (cl_command_queue_properties*)cl_command_queue_propertiesPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateImage2D(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 8)) 
		return v8::ThrowException(v8::String::New("clCreateImage2D() requires 8 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_flags1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_mem_flags1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_image_formatPtr1' at index 2: expected a Buffer")));
	char* cl_image_formatPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 3: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t2' at index 4: expected a Number")));
	v8::Handle<v8::Number > size_t2 = _arguments_[4]->ToNumber();
	if ((!_arguments_[5]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t3' at index 5: expected a Number")));
	v8::Handle<v8::Number > size_t3 = _arguments_[5]->ToNumber();
	if ((!(_arguments_[6]->IsNull() || node::Buffer::HasInstance(_arguments_[6])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 6: expected a Buffer")));
	char* voidPtr1 = _arguments_[6]->IsNull() ? NULL : node::Buffer::Data(_arguments_[6].As<v8::Object >());
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 7: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_mem _return_ = clCreateImage2D((cl_context)cl_context1, (cl_mem_flags)(*cl_mem_flags1)->Value(), (const cl_image_format*)cl_image_formatPtr1, (size_t)(*size_t1)->Value(), (size_t)(*size_t2)->Value(), (size_t)(*size_t3)->Value(), (void*)voidPtr1, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clCreateImage3D(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 10)) 
		return v8::ThrowException(v8::String::New("clCreateImage3D() requires 10 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_flags1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_mem_flags1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_image_formatPtr1' at index 2: expected a Buffer")));
	char* cl_image_formatPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 3: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t2' at index 4: expected a Number")));
	v8::Handle<v8::Number > size_t2 = _arguments_[4]->ToNumber();
	if ((!_arguments_[5]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t3' at index 5: expected a Number")));
	v8::Handle<v8::Number > size_t3 = _arguments_[5]->ToNumber();
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t4' at index 6: expected a Number")));
	v8::Handle<v8::Number > size_t4 = _arguments_[6]->ToNumber();
	if ((!_arguments_[7]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t5' at index 7: expected a Number")));
	v8::Handle<v8::Number > size_t5 = _arguments_[7]->ToNumber();
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 8: expected a Buffer")));
	char* voidPtr1 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	if ((!(_arguments_[9]->IsNull() || node::Buffer::HasInstance(_arguments_[9])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 9: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[9]->IsNull() ? NULL : node::Buffer::Data(_arguments_[9].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_mem _return_ = clCreateImage3D((cl_context)cl_context1, (cl_mem_flags)(*cl_mem_flags1)->Value(), (const cl_image_format*)cl_image_formatPtr1, (size_t)(*size_t1)->Value(), (size_t)(*size_t2)->Value(), (size_t)(*size_t3)->Value(), (size_t)(*size_t4)->Value(), (size_t)(*size_t5)->Value(), (void*)voidPtr1, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clEnqueueMarker(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("clEnqueueMarker() requires 2 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 1: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueMarker((cl_command_queue)cl_command_queue1, (cl_event*)cl_eventPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueWaitForEvents(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("clEnqueueWaitForEvents() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 2: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueWaitForEvents((cl_command_queue)cl_command_queue1, (cl_uint)(*cl_uint1)->Value(), (const cl_event*)cl_eventPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueBarrier(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clEnqueueBarrier() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueBarrier((cl_command_queue)cl_command_queue1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clUnloadCompiler(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 0)) 
		return v8::ThrowException(v8::String::New("clUnloadCompiler() requires 0 arguments!"));
	v8::HandleScope _scope_;
	cl_int _return_ = clUnloadCompiler();
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetExtensionFunctionAddress(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clGetExtensionFunctionAddress() requires 1 arguments!"));
	if ((!_arguments_[0]->IsString())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtr1' at index 0: expected a String")));
	v8::Handle<v8::String > charPtr1 = _arguments_[0]->ToString();
	v8::HandleScope _scope_;
	void* _return_ = clGetExtensionFunctionAddress((const char*)(*v8::String::AsciiValue(charPtr1)));
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clCreateFromGLBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("clCreateFromGLBuffer() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_flags1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_mem_flags1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_GLuint1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_GLuint1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'intPtr1' at index 3: expected a Buffer")));
	char* intPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_mem _return_ = clCreateFromGLBuffer((cl_context)cl_context1, (cl_mem_flags)(*cl_mem_flags1)->Value(), (cl_GLuint)(*cl_GLuint1)->Value(), (int*)intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clCreateFromGLTexture(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clCreateFromGLTexture() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_flags1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_mem_flags1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_GLenum1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_GLenum1 = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_GLint1' at index 3: expected a Number")));
	v8::Handle<v8::Number > cl_GLint1 = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_GLuint1' at index 4: expected a Number")));
	v8::Handle<v8::Number > cl_GLuint1 = _arguments_[4]->ToNumber();
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 5: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_mem _return_ = clCreateFromGLTexture((cl_context)cl_context1, (cl_mem_flags)(*cl_mem_flags1)->Value(), (cl_GLenum)(*cl_GLenum1)->Value(), (cl_GLint)(*cl_GLint1)->Value(), (cl_GLuint)(*cl_GLuint1)->Value(), (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clCreateFromGLRenderbuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("clCreateFromGLRenderbuffer() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_flags1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_mem_flags1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_GLuint1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_GLuint1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 3: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_mem _return_ = clCreateFromGLRenderbuffer((cl_context)cl_context1, (cl_mem_flags)(*cl_mem_flags1)->Value(), (cl_GLuint)(*cl_GLuint1)->Value(), (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clGetGLObjectInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("clGetGLObjectInfo() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 0: expected a Buffer")));
	char* cl_mem1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_gl_object_typePtr1' at index 1: expected a Buffer")));
	char* cl_gl_object_typePtr1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_GLuintPtr1' at index 2: expected a Buffer")));
	char* cl_GLuintPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetGLObjectInfo((cl_mem)cl_mem1, (cl_gl_object_type*)cl_gl_object_typePtr1, (cl_GLuint*)cl_GLuintPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clGetGLTextureInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetGLTextureInfo() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 0: expected a Buffer")));
	char* cl_mem1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_gl_texture_info1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_gl_texture_info1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 4: expected a Buffer")));
	char* size_tPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetGLTextureInfo((cl_mem)cl_mem1, (cl_gl_texture_info)(*cl_gl_texture_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr1, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueAcquireGLObjects(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clEnqueueAcquireGLObjects() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_memPtr1' at index 2: expected a Buffer")));
	char* cl_memPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint2' at index 3: expected a Number")));
	v8::Handle<v8::Number > cl_uint2 = _arguments_[3]->ToNumber();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 4: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 5: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueAcquireGLObjects((cl_command_queue)cl_command_queue1, (cl_uint)(*cl_uint1)->Value(), (const cl_mem*)cl_memPtr1, (cl_uint)(*cl_uint2)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clEnqueueReleaseGLObjects(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clEnqueueReleaseGLObjects() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue1' at index 0: expected a Buffer")));
	char* cl_command_queue1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_memPtr1' at index 2: expected a Buffer")));
	char* cl_memPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint2' at index 3: expected a Number")));
	v8::Handle<v8::Number > cl_uint2 = _arguments_[3]->ToNumber();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr1' at index 4: expected a Buffer")));
	char* cl_eventPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_eventPtr2' at index 5: expected a Buffer")));
	char* cl_eventPtr2 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clEnqueueReleaseGLObjects((cl_command_queue)cl_command_queue1, (cl_uint)(*cl_uint1)->Value(), (const cl_mem*)cl_memPtr1, (cl_uint)(*cl_uint2)->Value(), (const cl_event*)cl_eventPtr1, (cl_event*)cl_eventPtr2);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateFromGLTexture2D(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clCreateFromGLTexture2D() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_flags1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_mem_flags1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_GLenum1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_GLenum1 = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_GLint1' at index 3: expected a Number")));
	v8::Handle<v8::Number > cl_GLint1 = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_GLuint1' at index 4: expected a Number")));
	v8::Handle<v8::Number > cl_GLuint1 = _arguments_[4]->ToNumber();
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 5: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_mem _return_ = clCreateFromGLTexture2D((cl_context)cl_context1, (cl_mem_flags)(*cl_mem_flags1)->Value(), (cl_GLenum)(*cl_GLenum1)->Value(), (cl_GLint)(*cl_GLint1)->Value(), (cl_GLuint)(*cl_GLuint1)->Value(), (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clCreateFromGLTexture3D(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clCreateFromGLTexture3D() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_flags1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_mem_flags1 = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_GLenum1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_GLenum1 = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_GLint1' at index 3: expected a Number")));
	v8::Handle<v8::Number > cl_GLint1 = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_GLuint1' at index 4: expected a Number")));
	v8::Handle<v8::Number > cl_GLuint1 = _arguments_[4]->ToNumber();
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 5: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_mem _return_ = clCreateFromGLTexture3D((cl_context)cl_context1, (cl_mem_flags)(*cl_mem_flags1)->Value(), (cl_GLenum)(*cl_GLenum1)->Value(), (cl_GLint)(*cl_GLint1)->Value(), (cl_GLuint)(*cl_GLuint1)->Value(), (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clGetGLContextInfoAPPLE(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("clGetGLContextInfoAPPLE() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 1: expected a Buffer")));
	char* voidPtr1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_gl_platform_info1' at index 2: expected a Number")));
	v8::Handle<v8::Number > cl_gl_platform_info1 = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 3: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[3]->ToNumber();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr2' at index 4: expected a Buffer")));
	char* voidPtr2 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 5: expected a Buffer")));
	char* size_tPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clGetGLContextInfoAPPLE((cl_context)cl_context1, (void*)voidPtr1, (cl_gl_platform_info)(*cl_gl_platform_info1)->Value(), (size_t)(*size_t1)->Value(), (void*)voidPtr2, (size_t*)size_tPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateEventFromGLsyncKHR(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("clCreateEventFromGLsyncKHR() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_GLsync1' at index 1: expected a Buffer")));
	char* cl_GLsync1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 2: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_event _return_ = clCreateEventFromGLsyncKHR((cl_context)cl_context1, (cl_GLsync)cl_GLsync1, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clCreateImageFromIOSurface2DAPPLE(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 7)) 
		return v8::ThrowException(v8::String::New("clCreateImageFromIOSurface2DAPPLE() requires 7 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem_flags1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_mem_flags1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_image_formatPtr1' at index 2: expected a Buffer")));
	char* cl_image_formatPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 3: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t2' at index 4: expected a Number")));
	v8::Handle<v8::Number > size_t2 = _arguments_[4]->ToNumber();
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'IOSurfaceRef1' at index 5: expected a Buffer")));
	char* IOSurfaceRef1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!(_arguments_[6]->IsNull() || node::Buffer::HasInstance(_arguments_[6])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_intPtr1' at index 6: expected a Buffer")));
	char* cl_intPtr1 = _arguments_[6]->IsNull() ? NULL : node::Buffer::Data(_arguments_[6].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_mem _return_ = clCreateImageFromIOSurface2DAPPLE((cl_context)cl_context1, (cl_mem_flags)(*cl_mem_flags1)->Value(), (const cl_image_format*)cl_image_formatPtr1, (size_t)(*size_t1)->Value(), (size_t)(*size_t2)->Value(), (IOSurfaceRef)IOSurfaceRef1, (cl_int*)cl_intPtr1);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clSetMemObjectDestructorAPPLE(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("clSetMemObjectDestructorAPPLE() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_mem1' at index 0: expected a Buffer")));
	char* cl_mem1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'arg1' at index 1: expected a Buffer")));
	char* arg1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 2: expected a Buffer")));
	char* voidPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clSetMemObjectDestructorAPPLE((cl_mem)cl_mem1, (void (*)(cl_mem cl_mem1, void* voidPtr1))arg1, (void*)voidPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clLogMessagesToSystemLogAPPLE(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("clLogMessagesToSystemLogAPPLE() requires 4 arguments!"));
	if ((!_arguments_[0]->IsString())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtr1' at index 0: expected a String")));
	v8::Handle<v8::String > charPtr1 = _arguments_[0]->ToString();
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 1: expected a Buffer")));
	char* voidPtr1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr2' at index 3: expected a Buffer")));
	char* voidPtr2 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	clLogMessagesToSystemLogAPPLE((const char*)(*v8::String::AsciiValue(charPtr1)), (const void*)voidPtr1, (size_t)(*size_t1)->Value(), (void*)voidPtr2);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_clLogMessagesToStdoutAPPLE(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("clLogMessagesToStdoutAPPLE() requires 4 arguments!"));
	if ((!_arguments_[0]->IsString())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtr1' at index 0: expected a String")));
	v8::Handle<v8::String > charPtr1 = _arguments_[0]->ToString();
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 1: expected a Buffer")));
	char* voidPtr1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr2' at index 3: expected a Buffer")));
	char* voidPtr2 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	clLogMessagesToStdoutAPPLE((const char*)(*v8::String::AsciiValue(charPtr1)), (const void*)voidPtr1, (size_t)(*size_t1)->Value(), (void*)voidPtr2);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_clLogMessagesToStderrAPPLE(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("clLogMessagesToStderrAPPLE() requires 4 arguments!"));
	if ((!_arguments_[0]->IsString())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtr1' at index 0: expected a String")));
	v8::Handle<v8::String > charPtr1 = _arguments_[0]->ToString();
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 1: expected a Buffer")));
	char* voidPtr1 = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr2' at index 3: expected a Buffer")));
	char* voidPtr2 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	clLogMessagesToStderrAPPLE((const char*)(*v8::String::AsciiValue(charPtr1)), (const void*)voidPtr1, (size_t)(*size_t1)->Value(), (void*)voidPtr2);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_clCreateContextAndCommandQueueAPPLE(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 8)) 
		return v8::ThrowException(v8::String::New("clCreateContextAndCommandQueueAPPLE() requires 8 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context_propertiesPtr1' at index 0: expected a Buffer")));
	char* cl_context_propertiesPtr1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_idPtr1' at index 2: expected a Buffer")));
	char* cl_device_idPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'arg1' at index 3: expected a Buffer")));
	char* arg1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 4: expected a Buffer")));
	char* voidPtr1 = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!_arguments_[5]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queue_properties1' at index 5: expected a Number")));
	v8::Handle<v8::Number > cl_command_queue_properties1 = _arguments_[5]->ToNumber();
	if ((!(_arguments_[6]->IsNull() || node::Buffer::HasInstance(_arguments_[6])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_contextPtr1' at index 6: expected a Buffer")));
	char* cl_contextPtr1 = _arguments_[6]->IsNull() ? NULL : node::Buffer::Data(_arguments_[6].As<v8::Object >());
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_command_queuePtr1' at index 7: expected a Buffer")));
	char* cl_command_queuePtr1 = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clCreateContextAndCommandQueueAPPLE((const cl_context_properties*)cl_context_propertiesPtr1, (cl_uint)(*cl_uint1)->Value(), (const cl_device_id*)cl_device_idPtr1, (void (*)(const char* charPtr1, const void* voidPtr1, size_t size_t1, void* voidPtr2))arg1, (void*)voidPtr1, (cl_command_queue_properties)(*cl_command_queue_properties1)->Value(), (cl_context*)cl_contextPtr1, (cl_command_queue*)cl_command_queuePtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateProgramAndKernelsWithSourceAPPLE(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 11)) 
		return v8::ThrowException(v8::String::New("clCreateProgramAndKernelsWithSourceAPPLE() requires 11 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_context1' at index 0: expected a Buffer")));
	char* cl_context1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint1' at index 1: expected a Number")));
	v8::Handle<v8::Number > cl_uint1 = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtrPtr1' at index 2: expected a Buffer")));
	char* charPtrPtr1 = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_tPtr1' at index 3: expected a Buffer")));
	char* size_tPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint2' at index 4: expected a Number")));
	v8::Handle<v8::Number > cl_uint2 = _arguments_[4]->ToNumber();
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_device_idPtr1' at index 5: expected a Buffer")));
	char* cl_device_idPtr1 = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	if ((!_arguments_[6]->IsString())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtr1' at index 6: expected a String")));
	v8::Handle<v8::String > charPtr1 = _arguments_[6]->ToString();
	if ((!_arguments_[7]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_uint3' at index 7: expected a Number")));
	v8::Handle<v8::Number > cl_uint3 = _arguments_[7]->ToNumber();
	if ((!(_arguments_[8]->IsNull() || node::Buffer::HasInstance(_arguments_[8])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtrPtr2' at index 8: expected a Buffer")));
	char* charPtrPtr2 = _arguments_[8]->IsNull() ? NULL : node::Buffer::Data(_arguments_[8].As<v8::Object >());
	if ((!(_arguments_[9]->IsNull() || node::Buffer::HasInstance(_arguments_[9])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_programPtr1' at index 9: expected a Buffer")));
	char* cl_programPtr1 = _arguments_[9]->IsNull() ? NULL : node::Buffer::Data(_arguments_[9].As<v8::Object >());
	if ((!(_arguments_[10]->IsNull() || node::Buffer::HasInstance(_arguments_[10])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernelPtr1' at index 10: expected a Buffer")));
	char* cl_kernelPtr1 = _arguments_[10]->IsNull() ? NULL : node::Buffer::Data(_arguments_[10].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clCreateProgramAndKernelsWithSourceAPPLE((cl_context)cl_context1, (cl_uint)(*cl_uint1)->Value(), (const char**)charPtrPtr1, (const size_t*)size_tPtr1, (cl_uint)(*cl_uint2)->Value(), (const cl_device_id*)cl_device_idPtr1, (const char*)(*v8::String::AsciiValue(charPtr1)), (cl_uint)(*cl_uint3)->Value(), (const char**)charPtrPtr2, (cl_program*)cl_programPtr1, (cl_kernel*)cl_kernelPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clSetKernelArgByNameAPPLE(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("clSetKernelArgByNameAPPLE() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_kernel1' at index 0: expected a Buffer")));
	char* cl_kernel1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsString())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'charPtr1' at index 1: expected a String")));
	v8::Handle<v8::String > charPtr1 = _arguments_[1]->ToString();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size_t1' at index 2: expected a Number")));
	v8::Handle<v8::Number > size_t1 = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 3: expected a Buffer")));
	char* voidPtr1 = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_int _return_ = clSetKernelArgByNameAPPLE((cl_kernel)cl_kernel1, (const char*)(*v8::String::AsciiValue(charPtr1)), (size_t)(*size_t1)->Value(), (const void*)voidPtr1);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateDAGAPPLE(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clCreateDAGAPPLE() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'c' at index 0: expected a Buffer")));
	char* c = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_dag _return_ = clCreateDAGAPPLE((cl_context)c);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_clReleaseDAGAPPLE(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("clReleaseDAGAPPLE() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'dag' at index 0: expected a Buffer")));
	char* dag = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	clReleaseDAGAPPLE((cl_dag)dag);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_clGetDAGNodeAPPLE(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("clGetDAGNodeAPPLE() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'd' at index 0: expected a Buffer")));
	char* d = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'f' at index 1: expected a Buffer")));
	char* f = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'args' at index 2: expected a Buffer")));
	char* args = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'arg_indices' at index 3: expected a Buffer")));
	char* arg_indices = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'nargs' at index 4: expected a Number")));
	v8::Handle<v8::Number > nargs = _arguments_[4]->ToNumber();
	v8::HandleScope _scope_;
	cl_dag_node _return_ = clGetDAGNodeAPPLE((cl_dag)d, (cl_kernel)f, (cl_dag_node*)args, (unsigned*)arg_indices, (unsigned)(*nargs)->Value());
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_clCreateKernelFromDAGAPPLE(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("clCreateKernelFromDAGAPPLE() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'd' at index 0: expected a Buffer")));
	char* d = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'n' at index 1: expected a Number")));
	v8::Handle<v8::Number > n = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'list' at index 2: expected a Buffer")));
	char* list = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_kernel _return_ = clCreateKernelFromDAGAPPLE((cl_dag)d, (cl_uint)(*n)->Value(), (const cl_device_id*)list);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_gcl_create_dispatch_queue(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("gcl_create_dispatch_queue() requires 2 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'flags' at index 0: expected a Number")));
	v8::Handle<v8::Number > flags = _arguments_[0]->ToNumber();
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'device_id' at index 1: expected a Buffer")));
	char* device_id = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	v8::HandleScope _scope_;
	dispatch_queue_t _return_ = gcl_create_dispatch_queue((cl_queue_flags)(*flags)->Value(), (cl_device_id)device_id);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_gcl_malloc(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("gcl_malloc() requires 3 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'bytes' at index 0: expected a Number")));
	v8::Handle<v8::Number > bytes = _arguments_[0]->ToNumber();
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'host_ptr' at index 1: expected a Buffer")));
	char* host_ptr = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'flags' at index 2: expected a Number")));
	v8::Handle<v8::Number > flags = _arguments_[2]->ToNumber();
	v8::HandleScope _scope_;
	void* _return_ = gcl_malloc((size_t)(*bytes)->Value(), (void*)host_ptr, (cl_malloc_flags)(*flags)->Value());
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_gcl_free(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("gcl_free() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ptr' at index 0: expected a Buffer")));
	char* ptr = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	gcl_free((void*)ptr);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_gcl_create_image(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("gcl_create_image() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'image_format' at index 0: expected a Buffer")));
	char* image_format = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'image_width' at index 1: expected a Number")));
	v8::Handle<v8::Number > image_width = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'image_height' at index 2: expected a Number")));
	v8::Handle<v8::Number > image_height = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'image_depth' at index 3: expected a Number")));
	v8::Handle<v8::Number > image_depth = _arguments_[3]->ToNumber();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'io_surface' at index 4: expected a Buffer")));
	char* io_surface = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_image _return_ = gcl_create_image((const cl_image_format*)image_format, (size_t)(*image_width)->Value(), (size_t)(*image_height)->Value(), (size_t)(*image_depth)->Value(), (IOSurfaceRef)io_surface);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_gcl_retain_image(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("gcl_retain_image() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'image' at index 0: expected a Buffer")));
	char* image = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	gcl_retain_image((cl_image)image);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_gcl_release_image(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("gcl_release_image() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'image' at index 0: expected a Buffer")));
	char* image = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	gcl_release_image((cl_image)image);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_gcl_get_supported_image_formats(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("gcl_get_supported_image_formats() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'device_id' at index 0: expected a Buffer")));
	char* device_id = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'image_type' at index 1: expected a Number")));
	v8::Handle<v8::Number > image_type = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'num_entries' at index 2: expected a Number")));
	v8::Handle<v8::Number > num_entries = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'image_formats' at index 3: expected a Buffer")));
	char* image_formats = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'num_image_formats' at index 4: expected a Buffer")));
	char* num_image_formats = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	gcl_get_supported_image_formats((cl_device_id)device_id, (cl_image_type)(*image_type)->Value(), (unsigned int)(*num_entries)->Value(), (cl_image_format*)image_formats, (unsigned int*)num_image_formats);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_gcl_memcpy(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("gcl_memcpy() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'dst' at index 0: expected a Buffer")));
	char* dst = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'src' at index 1: expected a Buffer")));
	char* src = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'size' at index 2: expected a Number")));
	v8::Handle<v8::Number > size = _arguments_[2]->ToNumber();
	v8::HandleScope _scope_;
	gcl_memcpy((void*)dst, (const void*)src, (size_t)(*size)->Value());
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_gcl_memcpy_rect(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 9)) 
		return v8::ThrowException(v8::String::New("gcl_memcpy_rect() requires 9 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'dst' at index 0: expected a Buffer")));
	char* dst = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'src' at index 1: expected a Buffer")));
	char* src = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'dst_origin' at index 2: expected a Buffer")));
	char* dst_origin = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'src_origin' at index 3: expected a Buffer")));
	char* src_origin = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'region' at index 4: expected a Buffer")));
	char* region = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!_arguments_[5]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'dst_row_pitch' at index 5: expected a Number")));
	v8::Handle<v8::Number > dst_row_pitch = _arguments_[5]->ToNumber();
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'dst_slice_pitch' at index 6: expected a Number")));
	v8::Handle<v8::Number > dst_slice_pitch = _arguments_[6]->ToNumber();
	if ((!_arguments_[7]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'src_row_pitch' at index 7: expected a Number")));
	v8::Handle<v8::Number > src_row_pitch = _arguments_[7]->ToNumber();
	if ((!_arguments_[8]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'src_slice_pitch' at index 8: expected a Number")));
	v8::Handle<v8::Number > src_slice_pitch = _arguments_[8]->ToNumber();
	v8::HandleScope _scope_;
	gcl_memcpy_rect((void*)dst, (const void*)src, (const size_t*)dst_origin, (const size_t*)src_origin, (const size_t*)region, (size_t)(*dst_row_pitch)->Value(), (size_t)(*dst_slice_pitch)->Value(), (size_t)(*src_row_pitch)->Value(), (size_t)(*src_slice_pitch)->Value());
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_gcl_copy_image(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("gcl_copy_image() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'dst_image' at index 0: expected a Buffer")));
	char* dst_image = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'src_image' at index 1: expected a Buffer")));
	char* src_image = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'dst_origin' at index 2: expected a Buffer")));
	char* dst_origin = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'src_origin' at index 3: expected a Buffer")));
	char* src_origin = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'region' at index 4: expected a Buffer")));
	char* region = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	gcl_copy_image((cl_image)dst_image, (cl_image)src_image, (const size_t*)dst_origin, (const size_t*)src_origin, (const size_t*)region);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_gcl_copy_ptr_to_image(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("gcl_copy_ptr_to_image() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'dst_image' at index 0: expected a Buffer")));
	char* dst_image = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'src_ptr' at index 1: expected a Buffer")));
	char* src_ptr = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'dst_origin' at index 2: expected a Buffer")));
	char* dst_origin = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'region' at index 3: expected a Buffer")));
	char* region = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	gcl_copy_ptr_to_image((cl_mem)dst_image, (void*)src_ptr, (const size_t*)dst_origin, (const size_t*)region);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_gcl_copy_image_to_ptr(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("gcl_copy_image_to_ptr() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'dst_ptr' at index 0: expected a Buffer")));
	char* dst_ptr = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'src_image' at index 1: expected a Buffer")));
	char* src_image = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'src_origin' at index 2: expected a Buffer")));
	char* src_origin = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'region' at index 3: expected a Buffer")));
	char* region = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	gcl_copy_image_to_ptr((void*)dst_ptr, (cl_image)src_image, (const size_t*)src_origin, (const size_t*)region);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_gcl_map_ptr(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("gcl_map_ptr() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ptr' at index 0: expected a Buffer")));
	char* ptr = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'map_flags' at index 1: expected a Number")));
	v8::Handle<v8::Number > map_flags = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cb' at index 2: expected a Number")));
	v8::Handle<v8::Number > cb = _arguments_[2]->ToNumber();
	v8::HandleScope _scope_;
	void* _return_ = gcl_map_ptr((void*)ptr, (cl_map_flags)(*map_flags)->Value(), (size_t)(*cb)->Value());
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_gcl_map_image(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("gcl_map_image() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'image' at index 0: expected a Buffer")));
	char* image = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'map_flags' at index 1: expected a Number")));
	v8::Handle<v8::Number > map_flags = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'origin' at index 2: expected a Buffer")));
	char* origin = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'region' at index 3: expected a Buffer")));
	char* region = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	void* _return_ = gcl_map_image((cl_image)image, (cl_map_flags)(*map_flags)->Value(), (const size_t*)origin, (const size_t*)region);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_gcl_unmap(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("gcl_unmap() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'voidPtr1' at index 0: expected a Buffer")));
	char* voidPtr1 = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	gcl_unmap((void*)voidPtr1);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_gcl_create_kernel_from_block(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("gcl_create_kernel_from_block() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'kernel_block_ptr' at index 0: expected a Buffer")));
	char* kernel_block_ptr = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_kernel _return_ = gcl_create_kernel_from_block((void*)kernel_block_ptr);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_gcl_get_kernel_block_workgroup_info(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("gcl_get_kernel_block_workgroup_info() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'kernel_block_ptr' at index 0: expected a Buffer")));
	char* kernel_block_ptr = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'param_name' at index 1: expected a Number")));
	v8::Handle<v8::Number > param_name = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'param_value_size' at index 2: expected a Number")));
	v8::Handle<v8::Number > param_value_size = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'param_value' at index 3: expected a Buffer")));
	char* param_value = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'param_value_size_ret' at index 4: expected a Buffer")));
	char* param_value_size_ret = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	gcl_get_kernel_block_workgroup_info((void*)kernel_block_ptr, (cl_kernel_work_group_info)(*param_name)->Value(), (size_t)(*param_value_size)->Value(), (void*)param_value, (size_t*)param_value_size_ret);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_gcl_get_device_id_with_dispatch_queue(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("gcl_get_device_id_with_dispatch_queue() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'queue' at index 0: expected a Buffer")));
	char* queue = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_device_id _return_ = gcl_get_device_id_with_dispatch_queue((dispatch_queue_t)queue);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_gcl_set_finalizer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("gcl_set_finalizer() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'object' at index 0: expected a Buffer")));
	char* object = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'cl_pfn_finalizer' at index 1: expected a Buffer")));
	char* cl_pfn_finalizer = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'user_data' at index 2: expected a Buffer")));
	char* user_data = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	gcl_set_finalizer((void*)object, (void (*)(void* object, void* user_data))cl_pfn_finalizer, (void*)user_data);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_gcl_start_timer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 0)) 
		return v8::ThrowException(v8::String::New("gcl_start_timer() requires 0 arguments!"));
	v8::HandleScope _scope_;
	cl_timer _return_ = gcl_start_timer();
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_gcl_stop_timer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("gcl_stop_timer() requires 1 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 't' at index 0: expected a Number")));
	v8::Handle<v8::Number > t = _arguments_[0]->ToNumber();
	v8::HandleScope _scope_;
	double _return_ = gcl_stop_timer((cl_timer)(*t)->Value());
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenCL_gcl_create_buffer_from_ptr(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("gcl_create_buffer_from_ptr() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ptr' at index 0: expected a Buffer")));
	char* ptr = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	cl_mem _return_ = gcl_create_buffer_from_ptr((void*)ptr);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_gcl_gl_create_ptr_from_buffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("gcl_gl_create_ptr_from_buffer() requires 1 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'bufobj' at index 0: expected a Number")));
	v8::Handle<v8::Number > bufobj = _arguments_[0]->ToNumber();
	v8::HandleScope _scope_;
	void* _return_ = gcl_gl_create_ptr_from_buffer((GLuint)(*bufobj)->Value());
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_gcl_gl_create_image_from_texture(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("gcl_gl_create_image_from_texture() requires 3 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'texture_target' at index 0: expected a Number")));
	v8::Handle<v8::Number > texture_target = _arguments_[0]->ToNumber();
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'mip_level' at index 1: expected a Number")));
	v8::Handle<v8::Number > mip_level = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'texture' at index 2: expected a Number")));
	v8::Handle<v8::Number > texture = _arguments_[2]->ToNumber();
	v8::HandleScope _scope_;
	cl_image _return_ = gcl_gl_create_image_from_texture((GLenum)(*texture_target)->Value(), (GLint)(*mip_level)->Value(), (GLuint)(*texture)->Value());
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_gcl_gl_create_image_from_renderbuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("gcl_gl_create_image_from_renderbuffer() requires 1 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'render_buffer' at index 0: expected a Number")));
	v8::Handle<v8::Number > render_buffer = _arguments_[0]->ToNumber();
	v8::HandleScope _scope_;
	cl_image _return_ = gcl_gl_create_image_from_renderbuffer((GLuint)(*render_buffer)->Value());
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenCL_gcl_gl_set_sharegroup(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("gcl_gl_set_sharegroup() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'share' at index 0: expected a Buffer")));
	char* share = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	gcl_gl_set_sharegroup((void*)share);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenCL_gcl_get_context(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 0)) 
		return v8::ThrowException(v8::String::New("gcl_get_context() requires 0 arguments!"));
	v8::HandleScope _scope_;
	cl_context _return_ = gcl_get_context();
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
void OpenCL_init(v8::Handle<v8::Object > _target_) {
	_target_->Set(v8::String::NewSymbol("CL_SCHAR_MAX"), v8::Integer::New(127));
	_target_->Set(v8::String::NewSymbol("CL_GLOBAL"), v8::Integer::New(0x2));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_GLOBAL_MEM_SIZE"), v8::Integer::New(0x101F));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_LOCAL_MEM_SIZE"), v8::Integer::New(0x11B2));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_NUM_MIP_LEVELS"), v8::Integer::New(0x1119));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_VENDOR_ID"), v8::Integer::New(0x1001));
	_target_->Set(v8::String::NewSymbol("CL_1RGB_APPLE"), v8::Integer::New(0x10000006));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_NATIVE_VECTOR_WIDTH_CHAR"), v8::Integer::New(0x1036));
	_target_->Set(v8::String::NewSymbol("CL_PLATFORM_EXTENSIONS"), v8::Integer::New(0x0904));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_FORMAT_MISMATCH"), v8::Integer::New(-9));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_IMAGE_SIZE"), v8::Integer::New(-40));
	_target_->Set(v8::String::NewSymbol("CL_OUT_OF_RESOURCES"), v8::Integer::New(-5));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_EVENT_WAIT_LIST"), v8::Integer::New(-57));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_NDRANGE_KERNEL"), v8::Integer::New(0x11F0));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_FILL_IMAGE"), v8::Integer::New(0x1208));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MAX_CONSTANT_ARGS"), v8::Integer::New(0x1021));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_TYPE_ALL"), v8::Integer::New(0xFFFFFFFF));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_MIP_LEVEL"), v8::Integer::New(-62));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_WORK_GROUP_SIZE"), v8::Integer::New(-54));
	_target_->Set(v8::String::NewSymbol("CL_MEM_MAP_COUNT"), v8::Integer::New(0x1104));
	_target_->Set(v8::String::NewSymbol("CL_M_SQRT2"), v8::Number::New(1.414213562373095145475));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_ACQUIRE_GL_OBJECTS"), v8::Integer::New(0x11FF));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_INFO_NOT_AVAILABLE"), v8::Integer::New(-19));
	_target_->Set(v8::String::NewSymbol("CL_M_2_SQRTPI"), v8::Number::New(1.128379167095512558561));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_COPY_IMAGE_TO_BUFFER"), v8::Integer::New(0x11F9));
	_target_->Set(v8::String::NewSymbol("CL_MEM_ASSOCIATED_MEMOBJECT"), v8::Integer::New(0x1107));
	_target_->Set(v8::String::NewSymbol("CL_QUEUE_CONTEXT"), v8::Integer::New(0x1090));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_NAME"), v8::Integer::New(0x119A));
	_target_->Set(v8::String::NewSymbol("CL_SUCCESS"), v8::Integer::New(0));
	_target_->Set(v8::String::NewSymbol("CL_BUFFER_CREATE_TYPE_REGION"), v8::Integer::New(0x1220));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_SOURCE"), v8::Integer::New(0x1164));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_COMPILER_AVAILABLE"), v8::Integer::New(0x1028));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_READ_BUFFER"), v8::Integer::New(0x11F3));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_WORK_GROUP_SIZE"), v8::Integer::New(0x11B0));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_UNMAP_MEM_OBJECT"), v8::Integer::New(0x11FD));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_COMMAND_QUEUE"), v8::Integer::New(-36));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_ADDRESS_LOCAL"), v8::Integer::New(0x119C));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_WRITE_IMAGE"), v8::Integer::New(0x11F7));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_USER"), v8::Integer::New(0x1204));
	_target_->Set(v8::String::NewSymbol("CL_M_2_PI"), v8::Number::New(0.636619772367581382433));
	_target_->Set(v8::String::NewSymbol("CL_ADDRESS_REPEAT"), v8::Integer::New(0x1133));
	_target_->Set(v8::String::NewSymbol("CL_MEM_SIZE"), v8::Integer::New(0x1102));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_BINARIES"), v8::Integer::New(0x1166));
	_target_->Set(v8::String::NewSymbol("CL_SFIXED14_APPLE"), v8::Integer::New(0x10000008));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MAX_WORK_GROUP_SIZE"), v8::Integer::New(0x1004));
	_target_->Set(v8::String::NewSymbol("CL_SAMPLER_NORMALIZED_COORDS"), v8::Integer::New(0x1152));
	_target_->Set(v8::String::NewSymbol("CL_MEM_OBJECT_ALLOCATION_FAILURE"), v8::Integer::New(-4));
	_target_->Set(v8::String::NewSymbol("CL_M_LN2"), v8::Number::New(0.693147180559945286227));
	_target_->Set(v8::String::NewSymbol("CL_COMPLETE"), v8::Integer::New(0x0));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_NATIVE_VECTOR_WIDTH_HALF"), v8::Integer::New(0x103C));
	_target_->Set(v8::String::NewSymbol("CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST"), v8::Integer::New(-14));
	_target_->Set(v8::String::NewSymbol("CL_SAMPLER_ADDRESSING_MODE"), v8::Integer::New(0x1153));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_IMAGE3D_MAX_HEIGHT"), v8::Integer::New(0x1014));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MAX_READ_IMAGE_ARGS"), v8::Integer::New(0x100E));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_NOT_FOUND"), v8::Integer::New(-1));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MAX_PARAMETER_SIZE"), v8::Integer::New(0x1017));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_IMAGE3D_MAX_DEPTH"), v8::Integer::New(0x1015));
	_target_->Set(v8::String::NewSymbol("CL_SIGNED_INT8"), v8::Integer::New(0x10D7));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_ADDRESS_BITS"), v8::Integer::New(0x100D));
	_target_->Set(v8::String::NewSymbol("CL_GL_OBJECT_BUFFER"), v8::Integer::New(0x2000));
	_target_->Set(v8::String::NewSymbol("CL_PLATFORM_VERSION"), v8::Integer::New(0x0901));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_LOCAL_MEM_TYPE"), v8::Integer::New(0x1022));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_ACCESS_NONE"), v8::Integer::New(0x11A3));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_NATIVE_VECTOR_WIDTH_FLOAT"), v8::Integer::New(0x103A));
	_target_->Set(v8::String::NewSymbol("CL_M_PI_4_F"), v8::Number::New(0.78539818525314f));
	_target_->Set(v8::String::NewSymbol("CL_CONTEXT_NUM_DEVICES"), v8::Integer::New(0x1083));
	_target_->Set(v8::String::NewSymbol("CL_EVENT_CONTEXT"), v8::Integer::New(0x11D4));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_BUILD_STATUS"), v8::Integer::New(0x1181));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_GLOBAL_MEM_CACHE_TYPE"), v8::Integer::New(0x101C));
	_target_->Set(v8::String::NewSymbol("CL_SUBMITTED"), v8::Integer::New(0x2));
	_target_->Set(v8::String::NewSymbol("CL_COMPILER_NOT_AVAILABLE"), v8::Integer::New(-3));
	_target_->Set(v8::String::NewSymbol("CL_SNORM_INT8"), v8::Integer::New(0x10D0));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_ELEMENT_SIZE"), v8::Integer::New(0x1111));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_HOST_UNIFIED_MEMORY"), v8::Integer::New(0x1035));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_IMAGE_DESCRIPTOR"), v8::Integer::New(-65));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_ADDRESS_CONSTANT"), v8::Integer::New(0x119D));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_PRIVATE_MEM_SIZE"), v8::Integer::New(0x11B4));
	_target_->Set(v8::String::NewSymbol("CL_MISALIGNED_SUB_BUFFER_OFFSET"), v8::Integer::New(-13));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PREFERRED_VECTOR_WIDTH_DOUBLE"), v8::Integer::New(0x100B));
	_target_->Set(v8::String::NewSymbol("CL_YCbYCr_APPLE"), v8::Integer::New(0x10000010));
	_target_->Set(v8::String::NewSymbol("CL_SHRT_MAX"), v8::Integer::New(32767));
	_target_->Set(v8::String::NewSymbol("CL_UNORM_INT8"), v8::Integer::New(0x10D2));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PARTITION_AFFINITY_DOMAIN"), v8::Integer::New(0x1045));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PREFERRED_VECTOR_WIDTH_SHORT"), v8::Integer::New(0x1007));
	_target_->Set(v8::String::NewSymbol("CL_M_SQRT1_2"), v8::Number::New(0.707106781186547572737));
	_target_->Set(v8::String::NewSymbol("CL_FILTER_NEAREST"), v8::Integer::New(0x1140));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_FUNCTION_NAME"), v8::Integer::New(0x1190));
	_target_->Set(v8::String::NewSymbol("CL_MEM_OBJECT_IMAGE1D_ARRAY"), v8::Integer::New(0x10F5));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_2D"), v8::Integer::New(0x10F1));
	_target_->Set(v8::String::NewSymbol("CL_RGB"), v8::Integer::New(0x10B4));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_IMAGE_MAX_BUFFER_SIZE"), v8::Integer::New(0x1040));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_3D"), v8::Integer::New(0x10F2));
	_target_->Set(v8::String::NewSymbol("CL_MEM_OBJECT_BUFFER"), v8::Integer::New(0x10F0));
	_target_->Set(v8::String::NewSymbol("CL_FLT_DIG"), v8::Integer::New(6));
	_target_->Set(v8::String::NewSymbol("CL_M_PI"), v8::Number::New(3.141592653589793115998));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_FORMAT"), v8::Integer::New(0x1110));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_FILL_BUFFER"), v8::Integer::New(0x1207));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_DEPTH"), v8::Integer::New(0x1116));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_PROGRAM"), v8::Integer::New(0x1194));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_BINARY_TYPE_EXECUTABLE"), v8::Integer::New(0x4));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_AVAILABLE"), v8::Integer::New(0x1027));
	_target_->Set(v8::String::NewSymbol("CL_UCHAR_MAX"), v8::Integer::New(255));
	_target_->Set(v8::String::NewSymbol("CL_BIASED_HALF_APPLE"), v8::Integer::New(0x10000009));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_NUM_DEVICES"), v8::Integer::New(0x1162));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_IMAGE_FORMAT_DESCRIPTOR"), v8::Integer::New(-39));
	_target_->Set(v8::String::NewSymbol("CL_MEM_OBJECT_IMAGE2D_ARRAY"), v8::Integer::New(0x10F3));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_NATIVE_VECTOR_WIDTH_INT"), v8::Integer::New(0x1038));
	_target_->Set(v8::String::NewSymbol("CL_SAMPLER_FILTER_MODE"), v8::Integer::New(0x1154));
	_target_->Set(v8::String::NewSymbol("CL_INT_MAX"), v8::Integer::New(2147483647));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_PREFERRED_WORK_GROUP_SIZE_MULTIPLE"), v8::Integer::New(0x11B3));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PARTITION_PROPERTIES"), v8::Integer::New(0x1044));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_TASK"), v8::Integer::New(0x11F1));
	_target_->Set(v8::String::NewSymbol("CL_DEPTH"), v8::Integer::New(0x10BD));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_IMAGE3D_MAX_WIDTH"), v8::Integer::New(0x1013));
	_target_->Set(v8::String::NewSymbol("CL_M_E"), v8::Number::New(2.718281828459045090796));
	_target_->Set(v8::String::NewSymbol("CL_GL_OBJECT_TEXTURE2D_ARRAY"), v8::Integer::New(0x200E));
	_target_->Set(v8::String::NewSymbol("CL_FLT_MIN_EXP"), v8::Integer::New(-125));
	_target_->Set(v8::String::NewSymbol("CL_NONE"), v8::Integer::New(0x0));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_BINARY_TYPE_COMPILED_OBJECT"), v8::Integer::New(0x1));
	_target_->Set(v8::String::NewSymbol("CL_BGRA"), v8::Integer::New(0x10B6));
	_target_->Set(v8::String::NewSymbol("CL_COMPILE_PROGRAM_FAILURE"), v8::Integer::New(-15));
	_target_->Set(v8::String::NewSymbol("CL_UNSIGNED_INT32"), v8::Integer::New(0x10DC));
	_target_->Set(v8::String::NewSymbol("CL_LINKER_NOT_AVAILABLE"), v8::Integer::New(-16));
	_target_->Set(v8::String::NewSymbol("CL_UNSIGNED_INT16"), v8::Integer::New(0x10DB));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PREFERRED_VECTOR_WIDTH_FLOAT"), v8::Integer::New(0x100A));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_BINARY_TYPE_NONE"), v8::Integer::New(0x0));
	_target_->Set(v8::String::NewSymbol("CL_M_LN10"), v8::Number::New(2.302585092994045901094));
	_target_->Set(v8::String::NewSymbol("CL_CONTEXT_DEVICES"), v8::Integer::New(0x1081));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PARTITION_MAX_SUB_DEVICES"), v8::Integer::New(0x1043));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_LOCAL_MEM_SIZE"), v8::Integer::New(0x1023));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_RELEASE_GL_OBJECTS"), v8::Integer::New(0x1200));
	_target_->Set(v8::String::NewSymbol("CL_CONTEXT_PLATFORM"), v8::Integer::New(0x1084));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_GL_CONTEXT_APPLE"), v8::Integer::New(-1000));
	_target_->Set(v8::String::NewSymbol("CL_HAS_HI_LO_VECTOR_FIELDS"), v8::Integer::New(1));
	_target_->Set(v8::String::NewSymbol("CL_M_SQRT1_2_F"), v8::Number::New(0.70710676908493f));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PREFERRED_VECTOR_WIDTH_LONG"), v8::Integer::New(0x1009));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_DEVICE_TYPE"), v8::Integer::New(-31));
	_target_->Set(v8::String::NewSymbol("CL_GL_TEXTURE_TARGET"), v8::Integer::New(0x2004));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_SINGLE_FP_CONFIG"), v8::Integer::New(0x101B));
	_target_->Set(v8::String::NewSymbol("CL_SNORM_INT16"), v8::Integer::New(0x10D1));
	_target_->Set(v8::String::NewSymbol("CL_ARGB"), v8::Integer::New(0x10B7));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_BUFFER_SIZE"), v8::Integer::New(-61));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_ARG_SIZE"), v8::Integer::New(-51));
	_target_->Set(v8::String::NewSymbol("CL_FLT_MAX_EXP"), v8::Integer::New(+128));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_BARRIER"), v8::Integer::New(0x1205));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_PROPERTY"), v8::Integer::New(-64));
	_target_->Set(v8::String::NewSymbol("CL_UNORM_INT24"), v8::Integer::New(0x10DF));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PREFERRED_VECTOR_WIDTH_CHAR"), v8::Integer::New(0x1006));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_GLOBAL_MEM_CACHELINE_SIZE"), v8::Integer::New(0x101D));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_ROW_PITCH"), v8::Integer::New(0x1112));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_ARG_INDEX"), v8::Integer::New(-49));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_ENDIAN_LITTLE"), v8::Integer::New(0x1026));
	_target_->Set(v8::String::NewSymbol("CL_UNORM_INT_101010"), v8::Integer::New(0x10D6));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_EVENT"), v8::Integer::New(-58));
	_target_->Set(v8::String::NewSymbol("CL_RG"), v8::Integer::New(0x10B2));
	_target_->Set(v8::String::NewSymbol("CL_RA"), v8::Integer::New(0x10B3));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_BUILD_OPTIONS"), v8::Integer::New(0x1182));
	_target_->Set(v8::String::NewSymbol("CL_UNORM_INT16"), v8::Integer::New(0x10D3));
	_target_->Set(v8::String::NewSymbol("CL_Rx"), v8::Integer::New(0x10BA));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_IMAGE2D_MAX_HEIGHT"), v8::Integer::New(0x1012));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_BUILD_OPTIONS"), v8::Integer::New(-43));
	_target_->Set(v8::String::NewSymbol("CL_MEM_HOST_PTR"), v8::Integer::New(0x1103));
	_target_->Set(v8::String::NewSymbol("CL_M_1_PI_F"), v8::Number::New(0.31830987334251f));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_LINKER_OPTIONS"), v8::Integer::New(-67));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_PROGRAM_EXECUTABLE"), v8::Integer::New(-45));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_CONTEXT"), v8::Integer::New(0x1161));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_COMPILER_OPTIONS"), v8::Integer::New(-66));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_OPENCL_C_VERSION"), v8::Integer::New(0x103D));
	_target_->Set(v8::String::NewSymbol("CL_M_2_SQRTPI_F"), v8::Number::New(1.12837922573090f));
	_target_->Set(v8::String::NewSymbol("CL_CONTEXT_PROPERTY_USE_CGL_SHAREGROUP_APPLE"), v8::Integer::New(0x10000000));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PROFILE"), v8::Integer::New(0x102E));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_OPERATION"), v8::Integer::New(-59));
	_target_->Set(v8::String::NewSymbol("CL_HAS_NAMED_VECTOR_FIELDS"), v8::Integer::New(1));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PROFILING_TIMER_RESOLUTION"), v8::Integer::New(0x1025));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_COPY_BUFFER_RECT"), v8::Integer::New(0x1203));
	_target_->Set(v8::String::NewSymbol("CL_PROFILING_COMMAND_START"), v8::Integer::New(0x1282));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_COPY_IMAGE"), v8::Integer::New(0x11F8));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MAX_WORK_ITEM_SIZES"), v8::Integer::New(0x1005));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_CONTEXT"), v8::Integer::New(-34));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_GL_FENCE_SYNC_OBJECT_KHR"), v8::Integer::New(0x200D));
	_target_->Set(v8::String::NewSymbol("CL_GL_OBJECT_TEXTURE_BUFFER"), v8::Integer::New(0x2011));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_EXTENSIONS"), v8::Integer::New(0x1030));
	_target_->Set(v8::String::NewSymbol("CL_EVENT_COMMAND_EXECUTION_STATUS"), v8::Integer::New(0x11D3));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MAX_WRITE_IMAGE_ARGS"), v8::Integer::New(0x100F));
	_target_->Set(v8::String::NewSymbol("CL_M_SQRT2_F"), v8::Number::New(1.41421353816986f));
	_target_->Set(v8::String::NewSymbol("CL_M_LOG2E"), v8::Number::New(1.442695040888963387005));
	_target_->Set(v8::String::NewSymbol("CL_BUILD_SUCCESS"), v8::Integer::New(0));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_TYPE_NAME"), v8::Integer::New(0x1198));
	_target_->Set(v8::String::NewSymbol("CL_M_LOG10E_F"), v8::Number::New(0.43429449200630f));
	_target_->Set(v8::String::NewSymbol("CL_GL_MIPMAP_LEVEL"), v8::Integer::New(0x2005));
	_target_->Set(v8::String::NewSymbol("CL_CGL_DEVICE_FOR_CURRENT_VIRTUAL_SCREEN_APPLE"), v8::Integer::New(0x10000002));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_GLOBAL_MEM_CACHE_SIZE"), v8::Integer::New(0x101E));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_WRITE_BUFFER"), v8::Integer::New(0x11F4));
	_target_->Set(v8::String::NewSymbol("CL_MEM_OBJECT_IMAGE1D"), v8::Integer::New(0x10F4));
	_target_->Set(v8::String::NewSymbol("CL_BUILD_IN_PROGRESS"), v8::Integer::New(-3));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_LINKER_AVAILABLE"), v8::Integer::New(0x103E));
	_target_->Set(v8::String::NewSymbol("CL_CONTEXT_PROPERTIES"), v8::Integer::New(0x1082));
	_target_->Set(v8::String::NewSymbol("CL_MEM_OBJECT_IMAGE2D"), v8::Integer::New(0x10F1));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_NUM_KERNELS_APPLE"), v8::Integer::New(0x10000004));
	_target_->Set(v8::String::NewSymbol("CL_FILTER_LINEAR"), v8::Integer::New(0x1141));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_ADDRESS_QUALIFIER"), v8::Integer::New(0x1196));
	_target_->Set(v8::String::NewSymbol("CL_MEM_OBJECT_IMAGE3D"), v8::Integer::New(0x10F2));
	_target_->Set(v8::String::NewSymbol("CL_GL_OBJECT_TEXTURE1D_ARRAY"), v8::Integer::New(0x2010));
	_target_->Set(v8::String::NewSymbol("CL_QUEUE_REFERENCE_COUNT"), v8::Integer::New(0x1092));
	_target_->Set(v8::String::NewSymbol("CL_DBL_MIN_10_EXP"), v8::Integer::New(-307));
	_target_->Set(v8::String::NewSymbol("CL_CHAR_MAX"), v8::Integer::New(127));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_READ_IMAGE"), v8::Integer::New(0x11F6));
	_target_->Set(v8::String::NewSymbol("CL_UNSIGNED_INT8"), v8::Integer::New(0x10DA));
	_target_->Set(v8::String::NewSymbol("CL_DBL_DIG"), v8::Integer::New(15));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_DEVICES"), v8::Integer::New(0x1163));
	_target_->Set(v8::String::NewSymbol("CL_MEM_REFERENCE_COUNT"), v8::Integer::New(0x1105));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MAX_CONSTANT_BUFFER_SIZE"), v8::Integer::New(0x1020));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_GLOBAL_WORK_SIZE"), v8::Integer::New(-63));
	_target_->Set(v8::String::NewSymbol("CL_MEM_OBJECT_IMAGE1D_BUFFER"), v8::Integer::New(0x10F6));
	_target_->Set(v8::String::NewSymbol("CL_M_PI_2"), v8::Number::New(1.570796326794896557999));
	_target_->Set(v8::String::NewSymbol("CL_M_LOG2E_F"), v8::Number::New(1.44269502162933f));
	_target_->Set(v8::String::NewSymbol("CL_M_PI_4"), v8::Number::New(0.785398163397448278999));
	_target_->Set(v8::String::NewSymbol("CL_M_PI_F"), v8::Number::New(3.14159274101257f));
	_target_->Set(v8::String::NewSymbol("CL_CHAR_BIT"), v8::Integer::New(8));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_ACCESS_READ_ONLY"), v8::Integer::New(0x11A0));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_WORK_ITEM_SIZE"), v8::Integer::New(-55));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_ERROR_CORRECTION_SUPPORT"), v8::Integer::New(0x1024));
	_target_->Set(v8::String::NewSymbol("CL_DBL_RADIX"), v8::Integer::New(2));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PARTITION_BY_COUNTS"), v8::Integer::New(0x1087));
	_target_->Set(v8::String::NewSymbol("CL_NON_BLOCKING"), v8::Integer::New(0));
	_target_->Set(v8::String::NewSymbol("CL_DBL_MIN_EXP"), v8::Integer::New(-1021));
	_target_->Set(v8::String::NewSymbol("CL_UINT_MAX"), v8::Integer::New(0xffffffffU));
	_target_->Set(v8::String::NewSymbol("CL_CONTEXT_REFERENCE_COUNT"), v8::Integer::New(0x1080));
	_target_->Set(v8::String::NewSymbol("CL_EVENT_COMMAND_QUEUE"), v8::Integer::New(0x11D0));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_REFERENCE_COUNT"), v8::Integer::New(0x1192));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_COPY_BUFFER"), v8::Integer::New(0x11F5));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_NUM_ARGS"), v8::Integer::New(0x1191));
	_target_->Set(v8::String::NewSymbol("CL_UNORM_SHORT_555"), v8::Integer::New(0x10D5));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_NUM_SAMPLES"), v8::Integer::New(0x111A));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_BINARY_TYPE"), v8::Integer::New(0x1184));
	_target_->Set(v8::String::NewSymbol("CL_LINK_PROGRAM_FAILURE"), v8::Integer::New(-17));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PREFERRED_VECTOR_WIDTH_INT"), v8::Integer::New(0x1008));
	_target_->Set(v8::String::NewSymbol("CL_HALF_FLOAT"), v8::Integer::New(0x10DD));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_BINARY"), v8::Integer::New(-42));
	_target_->Set(v8::String::NewSymbol("CL_ADDRESS_CLAMP"), v8::Integer::New(0x1132));
	_target_->Set(v8::String::NewSymbol("CL_UNORM_SHORT_565"), v8::Integer::New(0x10D4));
	_target_->Set(v8::String::NewSymbol("CL_BGR1_APPLE"), v8::Integer::New(0x10000007));
	_target_->Set(v8::String::NewSymbol("CL_FALSE"), v8::Integer::New(0));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_GLOBAL_OFFSET"), v8::Integer::New(-56));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PREFERRED_INTEROP_USER_SYNC"), v8::Integer::New(0x1048));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_PROGRAM"), v8::Integer::New(-44));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_KERNEL"), v8::Integer::New(-48));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_VALUE"), v8::Integer::New(-30));
	_target_->Set(v8::String::NewSymbol("CL_EVENT_REFERENCE_COUNT"), v8::Integer::New(0x11D2));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_MEM_OBJECT"), v8::Integer::New(-38));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_ARRAY_SIZE"), v8::Integer::New(0x1117));
	_target_->Set(v8::String::NewSymbol("CL_INTENSITY"), v8::Integer::New(0x10B8));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_ACCESS_WRITE_ONLY"), v8::Integer::New(0x11A1));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_TYPE_NONE"), v8::Integer::New(0));
	_target_->Set(v8::String::NewSymbol("CL_MEM_CONTEXT"), v8::Integer::New(0x1106));
	_target_->Set(v8::String::NewSymbol("CL_CGL_DEVICES_FOR_SUPPORTED_VIRTUAL_SCREENS_APPLE"), v8::Integer::New(0x10000003));
	_target_->Set(v8::String::NewSymbol("CL_SAMPLER_CONTEXT"), v8::Integer::New(0x1151));
	_target_->Set(v8::String::NewSymbol("CL_SIGNED_INT32"), v8::Integer::New(0x10D9));
	_target_->Set(v8::String::NewSymbol("CL_READ_WRITE_CACHE"), v8::Integer::New(0x2));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_GLOBAL_WORK_SIZE"), v8::Integer::New(0x11B5));
	_target_->Set(v8::String::NewSymbol("CL_PLATFORM_PROFILE"), v8::Integer::New(0x0900));
	_target_->Set(v8::String::NewSymbol("CL_PROFILING_COMMAND_END"), v8::Integer::New(0x1283));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_DEVICE_PARTITION_COUNT"), v8::Integer::New(-68));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MAX_CLOCK_FREQUENCY"), v8::Integer::New(0x100C));
	_target_->Set(v8::String::NewSymbol("CL_BLOCKING"), v8::Integer::New(1));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PARENT_DEVICE"), v8::Integer::New(0x1042));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_MARKER"), v8::Integer::New(0x11FE));
	_target_->Set(v8::String::NewSymbol("CL_USHRT_MAX"), v8::Integer::New(65535));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PARTITION_BY_COUNTS_LIST_END"), v8::Integer::New(0x0));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_MAP_IMAGE"), v8::Integer::New(0x11FC));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_ARG_NAME_APPLE"), v8::Integer::New(-1060));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_GL_OBJECT"), v8::Integer::New(-60));
	_target_->Set(v8::String::NewSymbol("CL_QUEUE_DEVICE"), v8::Integer::New(0x1091));
	_target_->Set(v8::String::NewSymbol("CL_FLT_MAX_10_EXP"), v8::Integer::New(+38));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_HOST_PTR"), v8::Integer::New(-37));
	_target_->Set(v8::String::NewSymbol("CL_VERSION_1_1"), v8::Integer::New(1));
	_target_->Set(v8::String::NewSymbol("CL_VERSION_1_2"), v8::Integer::New(1));
	_target_->Set(v8::String::NewSymbol("CL_VERSION_1_0"), v8::Integer::New(1));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_QUEUE_PROPERTIES"), v8::Integer::New(0x102A));
	_target_->Set(v8::String::NewSymbol("CL_SIGNED_INT16"), v8::Integer::New(0x10D8));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_BUILT_IN_KERNELS"), v8::Integer::New(0x103F));
	_target_->Set(v8::String::NewSymbol("CL_M_LN10_F"), v8::Number::New(2.30258512496948f));
	_target_->Set(v8::String::NewSymbol("CL_OUT_OF_HOST_MEMORY"), v8::Integer::New(-6));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MAX_WORK_ITEM_DIMENSIONS"), v8::Integer::New(0x1003));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_ACCESS_QUALIFIER"), v8::Integer::New(0x1197));
	_target_->Set(v8::String::NewSymbol("CL_A"), v8::Integer::New(0x10B1));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_DEVICE"), v8::Integer::New(-33));
	_target_->Set(v8::String::NewSymbol("CL_R"), v8::Integer::New(0x10B0));
	_target_->Set(v8::String::NewSymbol("CL_TRUE"), v8::Integer::New(1));
	_target_->Set(v8::String::NewSymbol("CL_M_PI_2_F"), v8::Number::New(1.57079637050629f));
	_target_->Set(v8::String::NewSymbol("CL_PLATFORM_VENDOR"), v8::Integer::New(0x0903));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_IMAGE_MAX_ARRAY_SIZE"), v8::Integer::New(0x1041));
	_target_->Set(v8::String::NewSymbol("CL_M_LN2_F"), v8::Number::New(0.69314718246460f));
	_target_->Set(v8::String::NewSymbol("CL_PROFILING_COMMAND_QUEUED"), v8::Integer::New(0x1280));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_IMAGE_SUPPORT"), v8::Integer::New(0x1016));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_BUILD_LOG"), v8::Integer::New(0x1183));
	_target_->Set(v8::String::NewSymbol("CL_M_1_PI"), v8::Number::New(0.318309886183790691216));
	_target_->Set(v8::String::NewSymbol("CL_FLT_MANT_DIG"), v8::Integer::New(24));
	_target_->Set(v8::String::NewSymbol("CL_M_E_F"), v8::Number::New(2.71828174591064f));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_FORMAT_NOT_SUPPORTED"), v8::Integer::New(-10));
	_target_->Set(v8::String::NewSymbol("CL_DBL_MAX_EXP"), v8::Integer::New(+1024));
	_target_->Set(v8::String::NewSymbol("CL_DBL_MANT_DIG"), v8::Integer::New(53));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_COPY_BUFFER_TO_IMAGE"), v8::Integer::New(0x11FA));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_EXECUTION_CAPABILITIES"), v8::Integer::New(0x1029));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_NAME"), v8::Integer::New(0x102B));
	_target_->Set(v8::String::NewSymbol("CL_MAP_FAILURE"), v8::Integer::New(-12));
	_target_->Set(v8::String::NewSymbol("CL_LUMINANCE"), v8::Integer::New(0x10B9));
	_target_->Set(v8::String::NewSymbol("CL_ADDRESS_CLAMP_TO_EDGE"), v8::Integer::New(0x1131));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_QUEUE_PROPERTIES"), v8::Integer::New(-35));
	_target_->Set(v8::String::NewSymbol("CL_FLT_MIN_10_EXP"), v8::Integer::New(-37));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PARTITION_BY_AFFINITY_DOMAIN"), v8::Integer::New(0x1088));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_DOUBLE_FP_CONFIG"), v8::Integer::New(0x1032));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_HALF_FP_CONFIG"), v8::Integer::New(0x1033));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_BINARY_TYPE_LIBRARY"), v8::Integer::New(0x2));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_REFERENCE_COUNT"), v8::Integer::New(0x1160));
	_target_->Set(v8::String::NewSymbol("CL_FLOAT"), v8::Integer::New(0x10DE));
	_target_->Set(v8::String::NewSymbol("CL_CbYCrY_APPLE"), v8::Integer::New(0x10000011));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MAX_COMPUTE_UNITS"), v8::Integer::New(0x1002));
	_target_->Set(v8::String::NewSymbol("CL_RGBx"), v8::Integer::New(0x10BC));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_NUM_KERNELS"), v8::Integer::New(0x1167));
	_target_->Set(v8::String::NewSymbol("CL_READ_ONLY_CACHE"), v8::Integer::New(0x1));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PARTITION_FAILED"), v8::Integer::New(-18));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_BUFFER"), v8::Integer::New(0x1118));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PRINTF_BUFFER_SIZE"), v8::Integer::New(0x1049));
	_target_->Set(v8::String::NewSymbol("CL_QUEUED"), v8::Integer::New(0x3));
	_target_->Set(v8::String::NewSymbol("CL_ADDRESS_NONE"), v8::Integer::New(0x1130));
	_target_->Set(v8::String::NewSymbol("CL_RGBA"), v8::Integer::New(0x10B5));
	_target_->Set(v8::String::NewSymbol("CL_DEPTH_STENCIL"), v8::Integer::New(0x10BE));
	_target_->Set(v8::String::NewSymbol("CL_ADDRESS_MIRRORED_REPEAT"), v8::Integer::New(0x1134));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_KERNEL_ARGS"), v8::Integer::New(-52));
	_target_->Set(v8::String::NewSymbol("CL_PROFILING_COMMAND_SUBMIT"), v8::Integer::New(0x1281));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_NATIVE_KERNEL"), v8::Integer::New(0x11F2));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_WIDTH"), v8::Integer::New(0x1114));
	_target_->Set(v8::String::NewSymbol("CL_QUEUE_PROPERTIES"), v8::Integer::New(0x1093));
	_target_->Set(v8::String::NewSymbol("CL_M_2_PI_F"), v8::Number::New(0.63661974668503f));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_WRITE_BUFFER_RECT"), v8::Integer::New(0x1202));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_ARG_VALUE"), v8::Integer::New(-50));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_TYPE"), v8::Integer::New(0x1000));
	_target_->Set(v8::String::NewSymbol("CL_PROFILING_INFO_NOT_AVAILABLE"), v8::Integer::New(-7));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_IMAGE2D_MAX_WIDTH"), v8::Integer::New(0x1011));
	_target_->Set(v8::String::NewSymbol("CL_BUILD_PROGRAM_FAILURE"), v8::Integer::New(-11));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_PLATFORM"), v8::Integer::New(-32));
	_target_->Set(v8::String::NewSymbol("CL_FLT_RADIX"), v8::Integer::New(2));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_KERNEL_NAMES"), v8::Integer::New(0x1168));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_KERNEL_DEFINITION"), v8::Integer::New(-47));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_NOT_AVAILABLE"), v8::Integer::New(-2));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MEM_BASE_ADDR_ALIGN"), v8::Integer::New(0x1019));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_TYPE_QUALIFIER"), v8::Integer::New(0x1199));
	_target_->Set(v8::String::NewSymbol("CL_GL_OBJECT_TEXTURE1D"), v8::Integer::New(0x200F));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_ADDRESS_PRIVATE"), v8::Integer::New(0x119E));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PREFERRED_VECTOR_WIDTH_HALF"), v8::Integer::New(0x1034));
	_target_->Set(v8::String::NewSymbol("CL_RGx"), v8::Integer::New(0x10BB));
	_target_->Set(v8::String::NewSymbol("CL_GL_OBJECT_TEXTURE2D"), v8::Integer::New(0x2001));
	_target_->Set(v8::String::NewSymbol("CL_GL_OBJECT_TEXTURE3D"), v8::Integer::New(0x2002));
	_target_->Set(v8::String::NewSymbol("CL_DRIVER_VERSION"), v8::Integer::New(0x102D));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MIN_DATA_TYPE_ALIGN_SIZE"), v8::Integer::New(0x101A));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_VERSION"), v8::Integer::New(0x102F));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_NATIVE_VECTOR_WIDTH_SHORT"), v8::Integer::New(0x1037));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_COMPILE_WORK_GROUP_SIZE"), v8::Integer::New(0x11B1));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_REFERENCE_COUNT"), v8::Integer::New(0x1047));
	_target_->Set(v8::String::NewSymbol("CL_MEM_TYPE"), v8::Integer::New(0x1100));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_CONTEXT"), v8::Integer::New(0x1193));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PARTITION_TYPE"), v8::Integer::New(0x1046));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_ADDRESS_GLOBAL"), v8::Integer::New(0x119B));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_STRING_DEBUG_INFO"), v8::String::New("#line "));
	_target_->Set(v8::String::NewSymbol("CL_PLATFORM_NAME"), v8::Integer::New(0x0902));
	_target_->Set(v8::String::NewSymbol("CL_CONTEXT_INTEROP_USER_SYNC"), v8::Integer::New(0x1085));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_HEIGHT"), v8::Integer::New(0x1115));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ATTRIBUTES"), v8::Integer::New(0x1195));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_MIGRATE_MEM_OBJECTS"), v8::Integer::New(0x1206));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_READ_BUFFER_RECT"), v8::Integer::New(0x1201));
	_target_->Set(v8::String::NewSymbol("CL_DBL_MAX_10_EXP"), v8::Integer::New(+308));
	_target_->Set(v8::String::NewSymbol("CL_KERNEL_ARG_ACCESS_READ_WRITE"), v8::Integer::New(0x11A2));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_KERNEL_NAMES_APPLE"), v8::Integer::New(0x10000005));
	_target_->Set(v8::String::NewSymbol("CL_COMMAND_MAP_BUFFER"), v8::Integer::New(0x11FB));
	_target_->Set(v8::String::NewSymbol("CL_BUILD_ERROR"), v8::Integer::New(-2));
	_target_->Set(v8::String::NewSymbol("CL_EVENT_COMMAND_TYPE"), v8::Integer::New(0x11D1));
	_target_->Set(v8::String::NewSymbol("CL_MEM_OFFSET"), v8::Integer::New(0x1108));
	_target_->Set(v8::String::NewSymbol("CL_PROGRAM_BINARY_SIZES"), v8::Integer::New(0x1165));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_VENDOR"), v8::Integer::New(0x102C));
	_target_->Set(v8::String::NewSymbol("CL_BUILD_NONE"), v8::Integer::New(-1));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MAX_MEM_ALLOC_SIZE"), v8::Integer::New(0x1010));
	_target_->Set(v8::String::NewSymbol("CL_LOCAL"), v8::Integer::New(0x1));
	_target_->Set(v8::String::NewSymbol("CL_M_LOG10E"), v8::Number::New(0.434294481903251816668));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_MAX_SAMPLERS"), v8::Integer::New(0x1018));
	_target_->Set(v8::String::NewSymbol("CL_MEM_COPY_OVERLAP"), v8::Integer::New(-8));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_NATIVE_VECTOR_WIDTH_DOUBLE"), v8::Integer::New(0x103B));
	_target_->Set(v8::String::NewSymbol("CL_SAMPLER_REFERENCE_COUNT"), v8::Integer::New(0x1150));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_KERNEL_NAME"), v8::Integer::New(-46));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PARTITION_EQUALLY"), v8::Integer::New(0x1086));
	_target_->Set(v8::String::NewSymbol("CL_GL_NUM_SAMPLES"), v8::Integer::New(0x2006));
	_target_->Set(v8::String::NewSymbol("CL_IMAGE_SLICE_PITCH"), v8::Integer::New(0x1113));
	_target_->Set(v8::String::NewSymbol("CL_GL_OBJECT_RENDERBUFFER"), v8::Integer::New(0x2003));
	_target_->Set(v8::String::NewSymbol("CL_MEM_FLAGS"), v8::Integer::New(0x1101));
	_target_->Set(v8::String::NewSymbol("CL_RUNNING"), v8::Integer::New(0x1));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_PLATFORM"), v8::Integer::New(0x1031));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_WORK_DIMENSION"), v8::Integer::New(-53));
	_target_->Set(v8::String::NewSymbol("CL_DEVICE_NATIVE_VECTOR_WIDTH_LONG"), v8::Integer::New(0x1039));
	_target_->Set(v8::String::NewSymbol("CL_INVALID_SAMPLER"), v8::Integer::New(-41));
	NODE_SET_METHOD(_target_, "clGetPlatformIDs", OpenCL_clGetPlatformIDs);
	NODE_SET_METHOD(_target_, "clGetPlatformInfo", OpenCL_clGetPlatformInfo);
	NODE_SET_METHOD(_target_, "clGetDeviceIDs", OpenCL_clGetDeviceIDs);
	NODE_SET_METHOD(_target_, "clGetDeviceInfo", OpenCL_clGetDeviceInfo);
	NODE_SET_METHOD(_target_, "clCreateSubDevices", OpenCL_clCreateSubDevices);
	NODE_SET_METHOD(_target_, "clRetainDevice", OpenCL_clRetainDevice);
	NODE_SET_METHOD(_target_, "clReleaseDevice", OpenCL_clReleaseDevice);
	NODE_SET_METHOD(_target_, "clCreateContext", OpenCL_clCreateContext);
	NODE_SET_METHOD(_target_, "clCreateContextFromType", OpenCL_clCreateContextFromType);
	NODE_SET_METHOD(_target_, "clRetainContext", OpenCL_clRetainContext);
	NODE_SET_METHOD(_target_, "clReleaseContext", OpenCL_clReleaseContext);
	NODE_SET_METHOD(_target_, "clGetContextInfo", OpenCL_clGetContextInfo);
	NODE_SET_METHOD(_target_, "clCreateCommandQueue", OpenCL_clCreateCommandQueue);
	NODE_SET_METHOD(_target_, "clRetainCommandQueue", OpenCL_clRetainCommandQueue);
	NODE_SET_METHOD(_target_, "clReleaseCommandQueue", OpenCL_clReleaseCommandQueue);
	NODE_SET_METHOD(_target_, "clGetCommandQueueInfo", OpenCL_clGetCommandQueueInfo);
	NODE_SET_METHOD(_target_, "clCreateBuffer", OpenCL_clCreateBuffer);
	NODE_SET_METHOD(_target_, "clCreateSubBuffer", OpenCL_clCreateSubBuffer);
	NODE_SET_METHOD(_target_, "clCreateImage", OpenCL_clCreateImage);
	NODE_SET_METHOD(_target_, "clRetainMemObject", OpenCL_clRetainMemObject);
	NODE_SET_METHOD(_target_, "clReleaseMemObject", OpenCL_clReleaseMemObject);
	NODE_SET_METHOD(_target_, "clGetSupportedImageFormats", OpenCL_clGetSupportedImageFormats);
	NODE_SET_METHOD(_target_, "clGetMemObjectInfo", OpenCL_clGetMemObjectInfo);
	NODE_SET_METHOD(_target_, "clGetImageInfo", OpenCL_clGetImageInfo);
	NODE_SET_METHOD(_target_, "clSetMemObjectDestructorCallback", OpenCL_clSetMemObjectDestructorCallback);
	NODE_SET_METHOD(_target_, "clCreateSampler", OpenCL_clCreateSampler);
	NODE_SET_METHOD(_target_, "clRetainSampler", OpenCL_clRetainSampler);
	NODE_SET_METHOD(_target_, "clReleaseSampler", OpenCL_clReleaseSampler);
	NODE_SET_METHOD(_target_, "clGetSamplerInfo", OpenCL_clGetSamplerInfo);
	NODE_SET_METHOD(_target_, "clCreateProgramWithSource", OpenCL_clCreateProgramWithSource);
	NODE_SET_METHOD(_target_, "clCreateProgramWithBinary", OpenCL_clCreateProgramWithBinary);
	NODE_SET_METHOD(_target_, "clCreateProgramWithBuiltInKernels", OpenCL_clCreateProgramWithBuiltInKernels);
	NODE_SET_METHOD(_target_, "clRetainProgram", OpenCL_clRetainProgram);
	NODE_SET_METHOD(_target_, "clReleaseProgram", OpenCL_clReleaseProgram);
	NODE_SET_METHOD(_target_, "clBuildProgram", OpenCL_clBuildProgram);
	NODE_SET_METHOD(_target_, "clCompileProgram", OpenCL_clCompileProgram);
	NODE_SET_METHOD(_target_, "clLinkProgram", OpenCL_clLinkProgram);
	NODE_SET_METHOD(_target_, "clUnloadPlatformCompiler", OpenCL_clUnloadPlatformCompiler);
	NODE_SET_METHOD(_target_, "clGetProgramInfo", OpenCL_clGetProgramInfo);
	NODE_SET_METHOD(_target_, "clGetProgramBuildInfo", OpenCL_clGetProgramBuildInfo);
	NODE_SET_METHOD(_target_, "clCreateKernel", OpenCL_clCreateKernel);
	NODE_SET_METHOD(_target_, "clCreateKernelsInProgram", OpenCL_clCreateKernelsInProgram);
	NODE_SET_METHOD(_target_, "clRetainKernel", OpenCL_clRetainKernel);
	NODE_SET_METHOD(_target_, "clReleaseKernel", OpenCL_clReleaseKernel);
	NODE_SET_METHOD(_target_, "clSetKernelArg", OpenCL_clSetKernelArg);
	NODE_SET_METHOD(_target_, "clGetKernelInfo", OpenCL_clGetKernelInfo);
	NODE_SET_METHOD(_target_, "clGetKernelArgInfo", OpenCL_clGetKernelArgInfo);
	NODE_SET_METHOD(_target_, "clGetKernelWorkGroupInfo", OpenCL_clGetKernelWorkGroupInfo);
	NODE_SET_METHOD(_target_, "clWaitForEvents", OpenCL_clWaitForEvents);
	NODE_SET_METHOD(_target_, "clGetEventInfo", OpenCL_clGetEventInfo);
	NODE_SET_METHOD(_target_, "clCreateUserEvent", OpenCL_clCreateUserEvent);
	NODE_SET_METHOD(_target_, "clRetainEvent", OpenCL_clRetainEvent);
	NODE_SET_METHOD(_target_, "clReleaseEvent", OpenCL_clReleaseEvent);
	NODE_SET_METHOD(_target_, "clSetUserEventStatus", OpenCL_clSetUserEventStatus);
	NODE_SET_METHOD(_target_, "clSetEventCallback", OpenCL_clSetEventCallback);
	NODE_SET_METHOD(_target_, "clGetEventProfilingInfo", OpenCL_clGetEventProfilingInfo);
	NODE_SET_METHOD(_target_, "clFlush", OpenCL_clFlush);
	NODE_SET_METHOD(_target_, "clFinish", OpenCL_clFinish);
	NODE_SET_METHOD(_target_, "clEnqueueReadBuffer", OpenCL_clEnqueueReadBuffer);
	NODE_SET_METHOD(_target_, "clEnqueueReadBufferRect", OpenCL_clEnqueueReadBufferRect);
	NODE_SET_METHOD(_target_, "clEnqueueWriteBuffer", OpenCL_clEnqueueWriteBuffer);
	NODE_SET_METHOD(_target_, "clEnqueueWriteBufferRect", OpenCL_clEnqueueWriteBufferRect);
	NODE_SET_METHOD(_target_, "clEnqueueFillBuffer", OpenCL_clEnqueueFillBuffer);
	NODE_SET_METHOD(_target_, "clEnqueueCopyBuffer", OpenCL_clEnqueueCopyBuffer);
	NODE_SET_METHOD(_target_, "clEnqueueCopyBufferRect", OpenCL_clEnqueueCopyBufferRect);
	NODE_SET_METHOD(_target_, "clEnqueueReadImage", OpenCL_clEnqueueReadImage);
	NODE_SET_METHOD(_target_, "clEnqueueWriteImage", OpenCL_clEnqueueWriteImage);
	NODE_SET_METHOD(_target_, "clEnqueueFillImage", OpenCL_clEnqueueFillImage);
	NODE_SET_METHOD(_target_, "clEnqueueCopyImage", OpenCL_clEnqueueCopyImage);
	NODE_SET_METHOD(_target_, "clEnqueueCopyImageToBuffer", OpenCL_clEnqueueCopyImageToBuffer);
	NODE_SET_METHOD(_target_, "clEnqueueCopyBufferToImage", OpenCL_clEnqueueCopyBufferToImage);
	NODE_SET_METHOD(_target_, "clEnqueueMapBuffer", OpenCL_clEnqueueMapBuffer);
	NODE_SET_METHOD(_target_, "clEnqueueMapImage", OpenCL_clEnqueueMapImage);
	NODE_SET_METHOD(_target_, "clEnqueueUnmapMemObject", OpenCL_clEnqueueUnmapMemObject);
	NODE_SET_METHOD(_target_, "clEnqueueMigrateMemObjects", OpenCL_clEnqueueMigrateMemObjects);
	NODE_SET_METHOD(_target_, "clEnqueueNDRangeKernel", OpenCL_clEnqueueNDRangeKernel);
	NODE_SET_METHOD(_target_, "clEnqueueTask", OpenCL_clEnqueueTask);
	NODE_SET_METHOD(_target_, "clEnqueueNativeKernel", OpenCL_clEnqueueNativeKernel);
	NODE_SET_METHOD(_target_, "clEnqueueMarkerWithWaitList", OpenCL_clEnqueueMarkerWithWaitList);
	NODE_SET_METHOD(_target_, "clEnqueueBarrierWithWaitList", OpenCL_clEnqueueBarrierWithWaitList);
	NODE_SET_METHOD(_target_, "clSetPrintfCallback", OpenCL_clSetPrintfCallback);
	NODE_SET_METHOD(_target_, "clGetExtensionFunctionAddressForPlatform", OpenCL_clGetExtensionFunctionAddressForPlatform);
	NODE_SET_METHOD(_target_, "clSetCommandQueueProperty", OpenCL_clSetCommandQueueProperty);
	NODE_SET_METHOD(_target_, "clCreateImage2D", OpenCL_clCreateImage2D);
	NODE_SET_METHOD(_target_, "clCreateImage3D", OpenCL_clCreateImage3D);
	NODE_SET_METHOD(_target_, "clEnqueueMarker", OpenCL_clEnqueueMarker);
	NODE_SET_METHOD(_target_, "clEnqueueWaitForEvents", OpenCL_clEnqueueWaitForEvents);
	NODE_SET_METHOD(_target_, "clEnqueueBarrier", OpenCL_clEnqueueBarrier);
	NODE_SET_METHOD(_target_, "clUnloadCompiler", OpenCL_clUnloadCompiler);
	NODE_SET_METHOD(_target_, "clGetExtensionFunctionAddress", OpenCL_clGetExtensionFunctionAddress);
	NODE_SET_METHOD(_target_, "clCreateFromGLBuffer", OpenCL_clCreateFromGLBuffer);
	NODE_SET_METHOD(_target_, "clCreateFromGLTexture", OpenCL_clCreateFromGLTexture);
	NODE_SET_METHOD(_target_, "clCreateFromGLRenderbuffer", OpenCL_clCreateFromGLRenderbuffer);
	NODE_SET_METHOD(_target_, "clGetGLObjectInfo", OpenCL_clGetGLObjectInfo);
	NODE_SET_METHOD(_target_, "clGetGLTextureInfo", OpenCL_clGetGLTextureInfo);
	NODE_SET_METHOD(_target_, "clEnqueueAcquireGLObjects", OpenCL_clEnqueueAcquireGLObjects);
	NODE_SET_METHOD(_target_, "clEnqueueReleaseGLObjects", OpenCL_clEnqueueReleaseGLObjects);
	NODE_SET_METHOD(_target_, "clCreateFromGLTexture2D", OpenCL_clCreateFromGLTexture2D);
	NODE_SET_METHOD(_target_, "clCreateFromGLTexture3D", OpenCL_clCreateFromGLTexture3D);
	NODE_SET_METHOD(_target_, "clGetGLContextInfoAPPLE", OpenCL_clGetGLContextInfoAPPLE);
	NODE_SET_METHOD(_target_, "clCreateEventFromGLsyncKHR", OpenCL_clCreateEventFromGLsyncKHR);
	NODE_SET_METHOD(_target_, "clCreateImageFromIOSurface2DAPPLE", OpenCL_clCreateImageFromIOSurface2DAPPLE);
	NODE_SET_METHOD(_target_, "clSetMemObjectDestructorAPPLE", OpenCL_clSetMemObjectDestructorAPPLE);
	NODE_SET_METHOD(_target_, "clLogMessagesToSystemLogAPPLE", OpenCL_clLogMessagesToSystemLogAPPLE);
	NODE_SET_METHOD(_target_, "clLogMessagesToStdoutAPPLE", OpenCL_clLogMessagesToStdoutAPPLE);
	NODE_SET_METHOD(_target_, "clLogMessagesToStderrAPPLE", OpenCL_clLogMessagesToStderrAPPLE);
	NODE_SET_METHOD(_target_, "clCreateContextAndCommandQueueAPPLE", OpenCL_clCreateContextAndCommandQueueAPPLE);
	NODE_SET_METHOD(_target_, "clCreateProgramAndKernelsWithSourceAPPLE", OpenCL_clCreateProgramAndKernelsWithSourceAPPLE);
	NODE_SET_METHOD(_target_, "clSetKernelArgByNameAPPLE", OpenCL_clSetKernelArgByNameAPPLE);
	NODE_SET_METHOD(_target_, "clCreateDAGAPPLE", OpenCL_clCreateDAGAPPLE);
	NODE_SET_METHOD(_target_, "clReleaseDAGAPPLE", OpenCL_clReleaseDAGAPPLE);
	NODE_SET_METHOD(_target_, "clGetDAGNodeAPPLE", OpenCL_clGetDAGNodeAPPLE);
	NODE_SET_METHOD(_target_, "clCreateKernelFromDAGAPPLE", OpenCL_clCreateKernelFromDAGAPPLE);
	NODE_SET_METHOD(_target_, "gcl_create_dispatch_queue", OpenCL_gcl_create_dispatch_queue);
	NODE_SET_METHOD(_target_, "gcl_malloc", OpenCL_gcl_malloc);
	NODE_SET_METHOD(_target_, "gcl_free", OpenCL_gcl_free);
	NODE_SET_METHOD(_target_, "gcl_create_image", OpenCL_gcl_create_image);
	NODE_SET_METHOD(_target_, "gcl_retain_image", OpenCL_gcl_retain_image);
	NODE_SET_METHOD(_target_, "gcl_release_image", OpenCL_gcl_release_image);
	NODE_SET_METHOD(_target_, "gcl_get_supported_image_formats", OpenCL_gcl_get_supported_image_formats);
	NODE_SET_METHOD(_target_, "gcl_memcpy", OpenCL_gcl_memcpy);
	NODE_SET_METHOD(_target_, "gcl_memcpy_rect", OpenCL_gcl_memcpy_rect);
	NODE_SET_METHOD(_target_, "gcl_copy_image", OpenCL_gcl_copy_image);
	NODE_SET_METHOD(_target_, "gcl_copy_ptr_to_image", OpenCL_gcl_copy_ptr_to_image);
	NODE_SET_METHOD(_target_, "gcl_copy_image_to_ptr", OpenCL_gcl_copy_image_to_ptr);
	NODE_SET_METHOD(_target_, "gcl_map_ptr", OpenCL_gcl_map_ptr);
	NODE_SET_METHOD(_target_, "gcl_map_image", OpenCL_gcl_map_image);
	NODE_SET_METHOD(_target_, "gcl_unmap", OpenCL_gcl_unmap);
	NODE_SET_METHOD(_target_, "gcl_create_kernel_from_block", OpenCL_gcl_create_kernel_from_block);
	NODE_SET_METHOD(_target_, "gcl_get_kernel_block_workgroup_info", OpenCL_gcl_get_kernel_block_workgroup_info);
	NODE_SET_METHOD(_target_, "gcl_get_device_id_with_dispatch_queue", OpenCL_gcl_get_device_id_with_dispatch_queue);
	NODE_SET_METHOD(_target_, "gcl_set_finalizer", OpenCL_gcl_set_finalizer);
	NODE_SET_METHOD(_target_, "gcl_start_timer", OpenCL_gcl_start_timer);
	NODE_SET_METHOD(_target_, "gcl_stop_timer", OpenCL_gcl_stop_timer);
	NODE_SET_METHOD(_target_, "gcl_create_buffer_from_ptr", OpenCL_gcl_create_buffer_from_ptr);
	NODE_SET_METHOD(_target_, "gcl_gl_create_ptr_from_buffer", OpenCL_gcl_gl_create_ptr_from_buffer);
	NODE_SET_METHOD(_target_, "gcl_gl_create_image_from_texture", OpenCL_gcl_gl_create_image_from_texture);
	NODE_SET_METHOD(_target_, "gcl_gl_create_image_from_renderbuffer", OpenCL_gcl_gl_create_image_from_renderbuffer);
	NODE_SET_METHOD(_target_, "gcl_gl_set_sharegroup", OpenCL_gcl_gl_set_sharegroup);
	NODE_SET_METHOD(_target_, "gcl_get_context", OpenCL_gcl_get_context);
}
NODE_MODULE(OpenCL, OpenCL_init);