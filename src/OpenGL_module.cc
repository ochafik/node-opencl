#include "v8.h"

#include "node.h"

#include "node_buffer.h"

#import <OpenGL/OpenGL.h>

#import <OpenCL/OpenCL.h>

void _dummy_node_buffer_free_callback_(char* data, void* hint) {}
v8::Handle<v8::Value > OpenGL_CGLSetCurrentContext(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLSetCurrentContext() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLSetCurrentContext((CGLContextObj)ctx);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLGetCurrentContext(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 0)) 
		return v8::ThrowException(v8::String::New("CGLGetCurrentContext() requires 0 arguments!"));
	v8::HandleScope _scope_;
	CGLContextObj _return_ = CGLGetCurrentContext();
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenGL_CGLGetShareGroup(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLGetShareGroup() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLShareGroupObj _return_ = CGLGetShareGroup((CGLContextObj)ctx);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenGL_CGLTexImageIOSurface2D(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 9)) 
		return v8::ThrowException(v8::String::New("CGLTexImageIOSurface2D() requires 9 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'target' at index 1: expected a Number")));
	v8::Handle<v8::Number > target = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'internal_format' at index 2: expected a Number")));
	v8::Handle<v8::Number > internal_format = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'width' at index 3: expected a Number")));
	v8::Handle<v8::Number > width = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'height' at index 4: expected a Number")));
	v8::Handle<v8::Number > height = _arguments_[4]->ToNumber();
	if ((!_arguments_[5]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'format' at index 5: expected a Number")));
	v8::Handle<v8::Number > format = _arguments_[5]->ToNumber();
	if ((!_arguments_[6]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'type' at index 6: expected a Number")));
	v8::Handle<v8::Number > type = _arguments_[6]->ToNumber();
	if ((!(_arguments_[7]->IsNull() || node::Buffer::HasInstance(_arguments_[7])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ioSurface' at index 7: expected a Buffer")));
	char* ioSurface = _arguments_[7]->IsNull() ? NULL : node::Buffer::Data(_arguments_[7].As<v8::Object >());
	if ((!_arguments_[8]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'plane' at index 8: expected a Number")));
	v8::Handle<v8::Number > plane = _arguments_[8]->ToNumber();
	v8::HandleScope _scope_;
	CGLError _return_ = CGLTexImageIOSurface2D((CGLContextObj)ctx, (GLenum)(*target)->Value(), (GLenum)(*internal_format)->Value(), (GLsizei)(*width)->Value(), (GLsizei)(*height)->Value(), (GLenum)(*format)->Value(), (GLenum)(*type)->Value(), (IOSurfaceRef)ioSurface, (GLuint)(*plane)->Value());
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLChoosePixelFormat(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("CGLChoosePixelFormat() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'attribs' at index 0: expected a Buffer")));
	char* attribs = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pix' at index 1: expected a Buffer")));
	char* pix = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'npix' at index 2: expected a Buffer")));
	char* npix = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLChoosePixelFormat((const CGLPixelFormatAttribute*)attribs, (CGLPixelFormatObj*)pix, (GLint*)npix);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLDestroyPixelFormat(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLDestroyPixelFormat() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pix' at index 0: expected a Buffer")));
	char* pix = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLDestroyPixelFormat((CGLPixelFormatObj)pix);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLDescribePixelFormat(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("CGLDescribePixelFormat() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pix' at index 0: expected a Buffer")));
	char* pix = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pix_num' at index 1: expected a Number")));
	v8::Handle<v8::Number > pix_num = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'attrib' at index 2: expected a Number")));
	v8::Handle<v8::Number > attrib = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'value' at index 3: expected a Buffer")));
	char* value = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLDescribePixelFormat((CGLPixelFormatObj)pix, (GLint)(*pix_num)->Value(), (CGLPixelFormatAttribute)(*attrib)->Value(), (GLint*)value);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLReleasePixelFormat(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLReleasePixelFormat() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pix' at index 0: expected a Buffer")));
	char* pix = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLReleasePixelFormat((CGLPixelFormatObj)pix);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenGL_CGLRetainPixelFormat(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLRetainPixelFormat() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pix' at index 0: expected a Buffer")));
	char* pix = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLPixelFormatObj _return_ = CGLRetainPixelFormat((CGLPixelFormatObj)pix);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenGL_CGLGetPixelFormatRetainCount(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLGetPixelFormatRetainCount() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pix' at index 0: expected a Buffer")));
	char* pix = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	GLuint _return_ = CGLGetPixelFormatRetainCount((CGLPixelFormatObj)pix);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLQueryRendererInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("CGLQueryRendererInfo() requires 3 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'display_mask' at index 0: expected a Number")));
	v8::Handle<v8::Number > display_mask = _arguments_[0]->ToNumber();
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'rend' at index 1: expected a Buffer")));
	char* rend = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'nrend' at index 2: expected a Buffer")));
	char* nrend = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLQueryRendererInfo((GLuint)(*display_mask)->Value(), (CGLRendererInfoObj*)rend, (GLint*)nrend);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLDestroyRendererInfo(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLDestroyRendererInfo() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'rend' at index 0: expected a Buffer")));
	char* rend = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLDestroyRendererInfo((CGLRendererInfoObj)rend);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLDescribeRenderer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 4)) 
		return v8::ThrowException(v8::String::New("CGLDescribeRenderer() requires 4 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'rend' at index 0: expected a Buffer")));
	char* rend = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'rend_num' at index 1: expected a Number")));
	v8::Handle<v8::Number > rend_num = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'prop' at index 2: expected a Number")));
	v8::Handle<v8::Number > prop = _arguments_[2]->ToNumber();
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'value' at index 3: expected a Buffer")));
	char* value = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLDescribeRenderer((CGLRendererInfoObj)rend, (GLint)(*rend_num)->Value(), (CGLRendererProperty)(*prop)->Value(), (GLint*)value);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLCreateContext(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("CGLCreateContext() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pix' at index 0: expected a Buffer")));
	char* pix = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'share' at index 1: expected a Buffer")));
	char* share = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 2: expected a Buffer")));
	char* ctx = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLCreateContext((CGLPixelFormatObj)pix, (CGLContextObj)share, (CGLContextObj*)ctx);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLDestroyContext(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLDestroyContext() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLDestroyContext((CGLContextObj)ctx);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLCopyContext(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("CGLCopyContext() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'src' at index 0: expected a Buffer")));
	char* src = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'dst' at index 1: expected a Buffer")));
	char* dst = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'mask' at index 2: expected a Number")));
	v8::Handle<v8::Number > mask = _arguments_[2]->ToNumber();
	v8::HandleScope _scope_;
	CGLError _return_ = CGLCopyContext((CGLContextObj)src, (CGLContextObj)dst, (GLbitfield)(*mask)->Value());
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLRetainContext(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLRetainContext() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLContextObj _return_ = CGLRetainContext((CGLContextObj)ctx);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenGL_CGLReleaseContext(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLReleaseContext() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLReleaseContext((CGLContextObj)ctx);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenGL_CGLGetContextRetainCount(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLGetContextRetainCount() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	GLuint _return_ = CGLGetContextRetainCount((CGLContextObj)ctx);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLGetPixelFormat(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLGetPixelFormat() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLPixelFormatObj _return_ = CGLGetPixelFormat((CGLContextObj)ctx);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenGL_CGLCreatePBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("CGLCreatePBuffer() requires 6 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'width' at index 0: expected a Number")));
	v8::Handle<v8::Number > width = _arguments_[0]->ToNumber();
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'height' at index 1: expected a Number")));
	v8::Handle<v8::Number > height = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'target' at index 2: expected a Number")));
	v8::Handle<v8::Number > target = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'internalFormat' at index 3: expected a Number")));
	v8::Handle<v8::Number > internalFormat = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'max_level' at index 4: expected a Number")));
	v8::Handle<v8::Number > max_level = _arguments_[4]->ToNumber();
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pbuffer' at index 5: expected a Buffer")));
	char* pbuffer = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLCreatePBuffer((GLsizei)(*width)->Value(), (GLsizei)(*height)->Value(), (GLenum)(*target)->Value(), (GLenum)(*internalFormat)->Value(), (GLint)(*max_level)->Value(), (CGLPBufferObj*)pbuffer);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLDestroyPBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLDestroyPBuffer() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pbuffer' at index 0: expected a Buffer")));
	char* pbuffer = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLDestroyPBuffer((CGLPBufferObj)pbuffer);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLDescribePBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 6)) 
		return v8::ThrowException(v8::String::New("CGLDescribePBuffer() requires 6 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'obj' at index 0: expected a Buffer")));
	char* obj = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'width' at index 1: expected a Buffer")));
	char* width = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'height' at index 2: expected a Buffer")));
	char* height = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'target' at index 3: expected a Buffer")));
	char* target = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'internalFormat' at index 4: expected a Buffer")));
	char* internalFormat = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	if ((!(_arguments_[5]->IsNull() || node::Buffer::HasInstance(_arguments_[5])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'mipmap' at index 5: expected a Buffer")));
	char* mipmap = _arguments_[5]->IsNull() ? NULL : node::Buffer::Data(_arguments_[5].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLDescribePBuffer((CGLPBufferObj)obj, (GLsizei*)width, (GLsizei*)height, (GLenum*)target, (GLenum*)internalFormat, (GLint*)mipmap);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLTexImagePBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("CGLTexImagePBuffer() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pbuffer' at index 1: expected a Buffer")));
	char* pbuffer = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'source' at index 2: expected a Number")));
	v8::Handle<v8::Number > source = _arguments_[2]->ToNumber();
	v8::HandleScope _scope_;
	CGLError _return_ = CGLTexImagePBuffer((CGLContextObj)ctx, (CGLPBufferObj)pbuffer, (GLenum)(*source)->Value());
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLRetainPBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLRetainPBuffer() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pbuffer' at index 0: expected a Buffer")));
	char* pbuffer = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLPBufferObj _return_ = CGLRetainPBuffer((CGLPBufferObj)pbuffer);
	if (_return_) 
		return _scope_.Close(node::Buffer::New((char*)_return_, 1, _dummy_node_buffer_free_callback_, NULL)->handle_);
	else 
		return _scope_.Close(v8::Null());
}
v8::Handle<v8::Value > OpenGL_CGLReleasePBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLReleasePBuffer() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pbuffer' at index 0: expected a Buffer")));
	char* pbuffer = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLReleasePBuffer((CGLPBufferObj)pbuffer);
	return _scope_.Close(v8::Undefined());
}
v8::Handle<v8::Value > OpenGL_CGLGetPBufferRetainCount(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLGetPBufferRetainCount() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pbuffer' at index 0: expected a Buffer")));
	char* pbuffer = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	GLuint _return_ = CGLGetPBufferRetainCount((CGLPBufferObj)pbuffer);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLSetOffScreen(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("CGLSetOffScreen() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'width' at index 1: expected a Number")));
	v8::Handle<v8::Number > width = _arguments_[1]->ToNumber();
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'height' at index 2: expected a Number")));
	v8::Handle<v8::Number > height = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'rowbytes' at index 3: expected a Number")));
	v8::Handle<v8::Number > rowbytes = _arguments_[3]->ToNumber();
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'baseaddr' at index 4: expected a Buffer")));
	char* baseaddr = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLSetOffScreen((CGLContextObj)ctx, (GLsizei)(*width)->Value(), (GLsizei)(*height)->Value(), (GLint)(*rowbytes)->Value(), (void*)baseaddr);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLGetOffScreen(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("CGLGetOffScreen() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'width' at index 1: expected a Buffer")));
	char* width = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'height' at index 2: expected a Buffer")));
	char* height = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'rowbytes' at index 3: expected a Buffer")));
	char* rowbytes = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'baseaddr' at index 4: expected a Buffer")));
	char* baseaddr = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLGetOffScreen((CGLContextObj)ctx, (GLsizei*)width, (GLsizei*)height, (GLint*)rowbytes, (void**)baseaddr);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLSetFullScreen(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLSetFullScreen() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLSetFullScreen((CGLContextObj)ctx);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLSetFullScreenOnDisplay(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("CGLSetFullScreenOnDisplay() requires 2 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'display_mask' at index 1: expected a Number")));
	v8::Handle<v8::Number > display_mask = _arguments_[1]->ToNumber();
	v8::HandleScope _scope_;
	CGLError _return_ = CGLSetFullScreenOnDisplay((CGLContextObj)ctx, (GLuint)(*display_mask)->Value());
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLSetPBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("CGLSetPBuffer() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pbuffer' at index 1: expected a Buffer")));
	char* pbuffer = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!_arguments_[2]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'face' at index 2: expected a Number")));
	v8::Handle<v8::Number > face = _arguments_[2]->ToNumber();
	if ((!_arguments_[3]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'level' at index 3: expected a Number")));
	v8::Handle<v8::Number > level = _arguments_[3]->ToNumber();
	if ((!_arguments_[4]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'screen' at index 4: expected a Number")));
	v8::Handle<v8::Number > screen = _arguments_[4]->ToNumber();
	v8::HandleScope _scope_;
	CGLError _return_ = CGLSetPBuffer((CGLContextObj)ctx, (CGLPBufferObj)pbuffer, (GLenum)(*face)->Value(), (GLint)(*level)->Value(), (GLint)(*screen)->Value());
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLGetPBuffer(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 5)) 
		return v8::ThrowException(v8::String::New("CGLGetPBuffer() requires 5 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pbuffer' at index 1: expected a Buffer")));
	char* pbuffer = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'face' at index 2: expected a Buffer")));
	char* face = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	if ((!(_arguments_[3]->IsNull() || node::Buffer::HasInstance(_arguments_[3])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'level' at index 3: expected a Buffer")));
	char* level = _arguments_[3]->IsNull() ? NULL : node::Buffer::Data(_arguments_[3].As<v8::Object >());
	if ((!(_arguments_[4]->IsNull() || node::Buffer::HasInstance(_arguments_[4])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'screen' at index 4: expected a Buffer")));
	char* screen = _arguments_[4]->IsNull() ? NULL : node::Buffer::Data(_arguments_[4].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLGetPBuffer((CGLContextObj)ctx, (CGLPBufferObj*)pbuffer, (GLenum*)face, (GLint*)level, (GLint*)screen);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLClearDrawable(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLClearDrawable() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLClearDrawable((CGLContextObj)ctx);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLFlushDrawable(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLFlushDrawable() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLFlushDrawable((CGLContextObj)ctx);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLEnable(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("CGLEnable() requires 2 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pname' at index 1: expected a Number")));
	v8::Handle<v8::Number > pname = _arguments_[1]->ToNumber();
	v8::HandleScope _scope_;
	CGLError _return_ = CGLEnable((CGLContextObj)ctx, (CGLContextEnable)(*pname)->Value());
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLDisable(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("CGLDisable() requires 2 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pname' at index 1: expected a Number")));
	v8::Handle<v8::Number > pname = _arguments_[1]->ToNumber();
	v8::HandleScope _scope_;
	CGLError _return_ = CGLDisable((CGLContextObj)ctx, (CGLContextEnable)(*pname)->Value());
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLIsEnabled(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("CGLIsEnabled() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pname' at index 1: expected a Number")));
	v8::Handle<v8::Number > pname = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'enable' at index 2: expected a Buffer")));
	char* enable = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLIsEnabled((CGLContextObj)ctx, (CGLContextEnable)(*pname)->Value(), (GLint*)enable);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLSetParameter(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("CGLSetParameter() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pname' at index 1: expected a Number")));
	v8::Handle<v8::Number > pname = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'params' at index 2: expected a Buffer")));
	char* params = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLSetParameter((CGLContextObj)ctx, (CGLContextParameter)(*pname)->Value(), (const GLint*)params);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLGetParameter(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 3)) 
		return v8::ThrowException(v8::String::New("CGLGetParameter() requires 3 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pname' at index 1: expected a Number")));
	v8::Handle<v8::Number > pname = _arguments_[1]->ToNumber();
	if ((!(_arguments_[2]->IsNull() || node::Buffer::HasInstance(_arguments_[2])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'params' at index 2: expected a Buffer")));
	char* params = _arguments_[2]->IsNull() ? NULL : node::Buffer::Data(_arguments_[2].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLGetParameter((CGLContextObj)ctx, (CGLContextParameter)(*pname)->Value(), (GLint*)params);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLSetVirtualScreen(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("CGLSetVirtualScreen() requires 2 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'screen' at index 1: expected a Number")));
	v8::Handle<v8::Number > screen = _arguments_[1]->ToNumber();
	v8::HandleScope _scope_;
	CGLError _return_ = CGLSetVirtualScreen((CGLContextObj)ctx, (GLint)(*screen)->Value());
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLGetVirtualScreen(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("CGLGetVirtualScreen() requires 2 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'screen' at index 1: expected a Buffer")));
	char* screen = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLGetVirtualScreen((CGLContextObj)ctx, (GLint*)screen);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLUpdateContext(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLUpdateContext() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLUpdateContext((CGLContextObj)ctx);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLSetGlobalOption(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("CGLSetGlobalOption() requires 2 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pname' at index 0: expected a Number")));
	v8::Handle<v8::Number > pname = _arguments_[0]->ToNumber();
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'params' at index 1: expected a Buffer")));
	char* params = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLSetGlobalOption((CGLGlobalOption)(*pname)->Value(), (const GLint*)params);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLGetGlobalOption(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("CGLGetGlobalOption() requires 2 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pname' at index 0: expected a Number")));
	v8::Handle<v8::Number > pname = _arguments_[0]->ToNumber();
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'params' at index 1: expected a Buffer")));
	char* params = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLGetGlobalOption((CGLGlobalOption)(*pname)->Value(), (GLint*)params);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLSetOption(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("CGLSetOption() requires 2 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pname' at index 0: expected a Number")));
	v8::Handle<v8::Number > pname = _arguments_[0]->ToNumber();
	if ((!_arguments_[1]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'param' at index 1: expected a Number")));
	v8::Handle<v8::Number > param = _arguments_[1]->ToNumber();
	v8::HandleScope _scope_;
	CGLError _return_ = CGLSetOption((CGLGlobalOption)(*pname)->Value(), (GLint)(*param)->Value());
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLGetOption(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("CGLGetOption() requires 2 arguments!"));
	if ((!_arguments_[0]->IsNumber())) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'pname' at index 0: expected a Number")));
	v8::Handle<v8::Number > pname = _arguments_[0]->ToNumber();
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'param' at index 1: expected a Buffer")));
	char* param = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLGetOption((CGLGlobalOption)(*pname)->Value(), (GLint*)param);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLLockContext(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLLockContext() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLLockContext((CGLContextObj)ctx);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLUnlockContext(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 1)) 
		return v8::ThrowException(v8::String::New("CGLUnlockContext() requires 1 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'ctx' at index 0: expected a Buffer")));
	char* ctx = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLError _return_ = CGLUnlockContext((CGLContextObj)ctx);
	return _scope_.Close(v8::Number::New(_return_));
}
v8::Handle<v8::Value > OpenGL_CGLGetVersion(const v8::Arguments& _arguments_) {
	if ((_arguments_.Length() != 2)) 
		return v8::ThrowException(v8::String::New("CGLGetVersion() requires 2 arguments!"));
	if ((!(_arguments_[0]->IsNull() || node::Buffer::HasInstance(_arguments_[0])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'majorvers' at index 0: expected a Buffer")));
	char* majorvers = _arguments_[0]->IsNull() ? NULL : node::Buffer::Data(_arguments_[0].As<v8::Object >());
	if ((!(_arguments_[1]->IsNull() || node::Buffer::HasInstance(_arguments_[1])))) 
		return v8::ThrowException(v8::Exception::TypeError(v8::String::New("Invalid value for argument 'minorvers' at index 1: expected a Buffer")));
	char* minorvers = _arguments_[1]->IsNull() ? NULL : node::Buffer::Data(_arguments_[1].As<v8::Object >());
	v8::HandleScope _scope_;
	CGLGetVersion((GLint*)majorvers, (GLint*)minorvers);
	return _scope_.Close(v8::Undefined());
}
void OpenGL_init(v8::Handle<v8::Object > _target_) {
	_target_->Set(v8::String::NewSymbol("kCGLRendererATIRageProID"), v8::Integer::New(0x00021400));
	_target_->Set(v8::String::NewSymbol("kCGLRendererGeForceFXID"), v8::Integer::New(0x00022400));
	_target_->Set(v8::String::NewSymbol("kCGLRGB555Bit"), v8::Integer::New(0x00000200));
	_target_->Set(v8::String::NewSymbol("kCGL24Bit"), v8::Integer::New(0x00000800));
	_target_->Set(v8::String::NewSymbol("kCGLRendererIntelHDID"), v8::Integer::New(0x00024300));
	_target_->Set(v8::String::NewSymbol("kCGLRGB101010Bit"), v8::Integer::New(0x00020000));
	_target_->Set(v8::String::NewSymbol("kCGLRGBAFloat256Bit"), v8::Integer::New(0x20000000));
	_target_->Set(v8::String::NewSymbol("kCGL128Bit"), v8::Integer::New(0x00010000));
	_target_->Set(v8::String::NewSymbol("kCGLARGB12121212Bit"), v8::Integer::New(0x00200000));
	_target_->Set(v8::String::NewSymbol("kCGLRendererIDMatchingMask"), v8::Integer::New(0x00FE7F00));
	_target_->Set(v8::String::NewSymbol("kCGLRGB101010_A8Bit"), v8::Integer::New(0x00080000));
	_target_->Set(v8::String::NewSymbol("kCGLRGB565A8Bit"), v8::Integer::New(0x00002000));
	_target_->Set(v8::String::NewSymbol("kCGL48Bit"), v8::Integer::New(0x00002000));
	_target_->Set(v8::String::NewSymbol("kCGL4Bit"), v8::Integer::New(0x00000010));
	_target_->Set(v8::String::NewSymbol("kCGLARGB2101010Bit"), v8::Integer::New(0x00040000));
	_target_->Set(v8::String::NewSymbol("kCGLRendererATIRadeonID"), v8::Integer::New(0x00021200));
	_target_->Set(v8::String::NewSymbol("kCGLRendererIntelX3100ID"), v8::Integer::New(0x00024200));
	_target_->Set(v8::String::NewSymbol("kCGLStereoscopicBit"), v8::Integer::New(0x00000002));
	_target_->Set(v8::String::NewSymbol("kCGL12Bit"), v8::Integer::New(0x00000200));
	_target_->Set(v8::String::NewSymbol("kCGLRGB565Bit"), v8::Integer::New(0x00001000));
	_target_->Set(v8::String::NewSymbol("kCGLRGBAFloat128Bit"), v8::Integer::New(0x08000000));
	_target_->Set(v8::String::NewSymbol("kCGL2Bit"), v8::Integer::New(0x00000004));
	_target_->Set(v8::String::NewSymbol("kCGLRendererGenericID"), v8::Integer::New(0x00020200));
	_target_->Set(v8::String::NewSymbol("kCGLTripleBufferBit"), v8::Integer::New(0x00000010));
	_target_->Set(v8::String::NewSymbol("kCGLRGB161616Bit"), v8::Integer::New(0x00400000));
	_target_->Set(v8::String::NewSymbol("kCGLRendererATIRadeon9700ID"), v8::Integer::New(0x00021800));
	_target_->Set(v8::String::NewSymbol("kCGLSupersampleBit"), v8::Integer::New(0x00000001));
	_target_->Set(v8::String::NewSymbol("kCGL1Bit"), v8::Integer::New(0x00000002));
	_target_->Set(v8::String::NewSymbol("kCGLRGBFloat64Bit"), v8::Integer::New(0x01000000));
	_target_->Set(v8::String::NewSymbol("kCGLSingleBufferBit"), v8::Integer::New(0x00000004));
	_target_->Set(v8::String::NewSymbol("kCGLARGB1555Bit"), v8::Integer::New(0x00000400));
	_target_->Set(v8::String::NewSymbol("kCGLRGB555A8Bit"), v8::Integer::New(0x00000800));
	_target_->Set(v8::String::NewSymbol("kCGLRendererIntel900ID"), v8::Integer::New(0x00024000));
	_target_->Set(v8::String::NewSymbol("kCGLRGB121212Bit"), v8::Integer::New(0x00100000));
	_target_->Set(v8::String::NewSymbol("kCGLRGB444A8Bit"), v8::Integer::New(0x00000100));
	_target_->Set(v8::String::NewSymbol("kCGLRendererATIRadeonX1000ID"), v8::Integer::New(0x00021900));
	_target_->Set(v8::String::NewSymbol("kCGL96Bit"), v8::Integer::New(0x00008000));
	_target_->Set(v8::String::NewSymbol("kCGL64Bit"), v8::Integer::New(0x00004000));
	_target_->Set(v8::String::NewSymbol("kCGL32Bit"), v8::Integer::New(0x00001000));
	_target_->Set(v8::String::NewSymbol("kCGLRendererMesa3DFXID"), v8::Integer::New(0x00040000));
	_target_->Set(v8::String::NewSymbol("kCGL0Bit"), v8::Integer::New(0x00000001));
	_target_->Set(v8::String::NewSymbol("kCGLRGBFloat256Bit"), v8::Integer::New(0x10000000));
	_target_->Set(v8::String::NewSymbol("kCGL3Bit"), v8::Integer::New(0x00000008));
	_target_->Set(v8::String::NewSymbol("kCGLRendererGeForce8xxxID"), v8::Integer::New(0x00022600));
	_target_->Set(v8::String::NewSymbol("kCGLARGB4444Bit"), v8::Integer::New(0x00000080));
	_target_->Set(v8::String::NewSymbol("kCGLRGBFloat128Bit"), v8::Integer::New(0x04000000));
	_target_->Set(v8::String::NewSymbol("kCGLRGBAFloat64Bit"), v8::Integer::New(0x02000000));
	_target_->Set(v8::String::NewSymbol("kCGL16Bit"), v8::Integer::New(0x00000400));
	_target_->Set(v8::String::NewSymbol("kCGLRGB888A8Bit"), v8::Integer::New(0x00010000));
	_target_->Set(v8::String::NewSymbol("kCGLRGB888Bit"), v8::Integer::New(0x00004000));
	_target_->Set(v8::String::NewSymbol("kCGL10Bit"), v8::Integer::New(0x00000100));
	_target_->Set(v8::String::NewSymbol("kCGLARGB16161616Bit"), v8::Integer::New(0x00800000));
	_target_->Set(v8::String::NewSymbol("kCGLRGB444Bit"), v8::Integer::New(0x00000040));
	_target_->Set(v8::String::NewSymbol("kCGLARGB8888Bit"), v8::Integer::New(0x00008000));
	_target_->Set(v8::String::NewSymbol("kCGL6Bit"), v8::Integer::New(0x00000040));
	_target_->Set(v8::String::NewSymbol("kCGLRendererATIRadeonX3000ID"), v8::Integer::New(0x00021B00));
	_target_->Set(v8::String::NewSymbol("kCGLRendererGeForce3ID"), v8::Integer::New(0x00022200));
	_target_->Set(v8::String::NewSymbol("kCGLRendererATIRage128ID"), v8::Integer::New(0x00021000));
	_target_->Set(v8::String::NewSymbol("kCGLRendererATIRadeon8500ID"), v8::Integer::New(0x00021600));
	_target_->Set(v8::String::NewSymbol("kCGLRGBA16161616Bit"), v8::Integer::New(0x00800000));
	_target_->Set(v8::String::NewSymbol("kCGLMultisampleBit"), v8::Integer::New(0x00000002));
	_target_->Set(v8::String::NewSymbol("kCGLMonoscopicBit"), v8::Integer::New(0x00000001));
	_target_->Set(v8::String::NewSymbol("kCGLDoubleBufferBit"), v8::Integer::New(0x00000008));
	_target_->Set(v8::String::NewSymbol("kCGLRendererAppleSWID"), v8::Integer::New(0x00020600));
	_target_->Set(v8::String::NewSymbol("CGL_VERSION_1_0"), v8::Integer::New(1));
	_target_->Set(v8::String::NewSymbol("CGL_VERSION_1_1"), v8::Integer::New(1));
	_target_->Set(v8::String::NewSymbol("CGL_VERSION_1_2"), v8::Integer::New(1));
	_target_->Set(v8::String::NewSymbol("CGL_VERSION_1_3"), v8::Integer::New(1));
	_target_->Set(v8::String::NewSymbol("kCGLRendererIntelHD4000ID"), v8::Integer::New(0x00024400));
	_target_->Set(v8::String::NewSymbol("kCGLRendererGeForce2MXID"), v8::Integer::New(0x00022000));
	_target_->Set(v8::String::NewSymbol("kCGL5Bit"), v8::Integer::New(0x00000020));
	_target_->Set(v8::String::NewSymbol("kCGL8Bit"), v8::Integer::New(0x00000080));
	_target_->Set(v8::String::NewSymbol("kCGLRendererGenericFloatID"), v8::Integer::New(0x00020400));
	_target_->Set(v8::String::NewSymbol("kCGLRendererATIRadeonX2000ID"), v8::Integer::New(0x00021A00));
	_target_->Set(v8::String::NewSymbol("kCGLRendererVTBladeXP2ID"), v8::Integer::New(0x00023000));
	NODE_SET_METHOD(_target_, "CGLSetCurrentContext", OpenGL_CGLSetCurrentContext);
	NODE_SET_METHOD(_target_, "CGLGetCurrentContext", OpenGL_CGLGetCurrentContext);
	NODE_SET_METHOD(_target_, "CGLGetShareGroup", OpenGL_CGLGetShareGroup);
	NODE_SET_METHOD(_target_, "CGLTexImageIOSurface2D", OpenGL_CGLTexImageIOSurface2D);
	NODE_SET_METHOD(_target_, "CGLChoosePixelFormat", OpenGL_CGLChoosePixelFormat);
	NODE_SET_METHOD(_target_, "CGLDestroyPixelFormat", OpenGL_CGLDestroyPixelFormat);
	NODE_SET_METHOD(_target_, "CGLDescribePixelFormat", OpenGL_CGLDescribePixelFormat);
	NODE_SET_METHOD(_target_, "CGLReleasePixelFormat", OpenGL_CGLReleasePixelFormat);
	NODE_SET_METHOD(_target_, "CGLRetainPixelFormat", OpenGL_CGLRetainPixelFormat);
	NODE_SET_METHOD(_target_, "CGLGetPixelFormatRetainCount", OpenGL_CGLGetPixelFormatRetainCount);
	NODE_SET_METHOD(_target_, "CGLQueryRendererInfo", OpenGL_CGLQueryRendererInfo);
	NODE_SET_METHOD(_target_, "CGLDestroyRendererInfo", OpenGL_CGLDestroyRendererInfo);
	NODE_SET_METHOD(_target_, "CGLDescribeRenderer", OpenGL_CGLDescribeRenderer);
	NODE_SET_METHOD(_target_, "CGLCreateContext", OpenGL_CGLCreateContext);
	NODE_SET_METHOD(_target_, "CGLDestroyContext", OpenGL_CGLDestroyContext);
	NODE_SET_METHOD(_target_, "CGLCopyContext", OpenGL_CGLCopyContext);
	NODE_SET_METHOD(_target_, "CGLRetainContext", OpenGL_CGLRetainContext);
	NODE_SET_METHOD(_target_, "CGLReleaseContext", OpenGL_CGLReleaseContext);
	NODE_SET_METHOD(_target_, "CGLGetContextRetainCount", OpenGL_CGLGetContextRetainCount);
	NODE_SET_METHOD(_target_, "CGLGetPixelFormat", OpenGL_CGLGetPixelFormat);
	NODE_SET_METHOD(_target_, "CGLCreatePBuffer", OpenGL_CGLCreatePBuffer);
	NODE_SET_METHOD(_target_, "CGLDestroyPBuffer", OpenGL_CGLDestroyPBuffer);
	NODE_SET_METHOD(_target_, "CGLDescribePBuffer", OpenGL_CGLDescribePBuffer);
	NODE_SET_METHOD(_target_, "CGLTexImagePBuffer", OpenGL_CGLTexImagePBuffer);
	NODE_SET_METHOD(_target_, "CGLRetainPBuffer", OpenGL_CGLRetainPBuffer);
	NODE_SET_METHOD(_target_, "CGLReleasePBuffer", OpenGL_CGLReleasePBuffer);
	NODE_SET_METHOD(_target_, "CGLGetPBufferRetainCount", OpenGL_CGLGetPBufferRetainCount);
	NODE_SET_METHOD(_target_, "CGLSetOffScreen", OpenGL_CGLSetOffScreen);
	NODE_SET_METHOD(_target_, "CGLGetOffScreen", OpenGL_CGLGetOffScreen);
	NODE_SET_METHOD(_target_, "CGLSetFullScreen", OpenGL_CGLSetFullScreen);
	NODE_SET_METHOD(_target_, "CGLSetFullScreenOnDisplay", OpenGL_CGLSetFullScreenOnDisplay);
	NODE_SET_METHOD(_target_, "CGLSetPBuffer", OpenGL_CGLSetPBuffer);
	NODE_SET_METHOD(_target_, "CGLGetPBuffer", OpenGL_CGLGetPBuffer);
	NODE_SET_METHOD(_target_, "CGLClearDrawable", OpenGL_CGLClearDrawable);
	NODE_SET_METHOD(_target_, "CGLFlushDrawable", OpenGL_CGLFlushDrawable);
	NODE_SET_METHOD(_target_, "CGLEnable", OpenGL_CGLEnable);
	NODE_SET_METHOD(_target_, "CGLDisable", OpenGL_CGLDisable);
	NODE_SET_METHOD(_target_, "CGLIsEnabled", OpenGL_CGLIsEnabled);
	NODE_SET_METHOD(_target_, "CGLSetParameter", OpenGL_CGLSetParameter);
	NODE_SET_METHOD(_target_, "CGLGetParameter", OpenGL_CGLGetParameter);
	NODE_SET_METHOD(_target_, "CGLSetVirtualScreen", OpenGL_CGLSetVirtualScreen);
	NODE_SET_METHOD(_target_, "CGLGetVirtualScreen", OpenGL_CGLGetVirtualScreen);
	NODE_SET_METHOD(_target_, "CGLUpdateContext", OpenGL_CGLUpdateContext);
	NODE_SET_METHOD(_target_, "CGLSetGlobalOption", OpenGL_CGLSetGlobalOption);
	NODE_SET_METHOD(_target_, "CGLGetGlobalOption", OpenGL_CGLGetGlobalOption);
	NODE_SET_METHOD(_target_, "CGLSetOption", OpenGL_CGLSetOption);
	NODE_SET_METHOD(_target_, "CGLGetOption", OpenGL_CGLGetOption);
	NODE_SET_METHOD(_target_, "CGLLockContext", OpenGL_CGLLockContext);
	NODE_SET_METHOD(_target_, "CGLUnlockContext", OpenGL_CGLUnlockContext);
	NODE_SET_METHOD(_target_, "CGLGetVersion", OpenGL_CGLGetVersion);
}
NODE_MODULE(OpenGL, OpenGL_init);