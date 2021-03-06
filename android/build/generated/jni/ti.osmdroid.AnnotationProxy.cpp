/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ti.osmdroid.AnnotationProxy.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "org.appcelerator.kroll.KrollProxy.h"

#define TAG "AnnotationProxy"

using namespace v8;

		namespace ti {
		namespace osmdroid {
			namespace tiosmdroid {


Persistent<FunctionTemplate> AnnotationProxy::proxyTemplate = Persistent<FunctionTemplate>();
jclass AnnotationProxy::javaClass = NULL;

AnnotationProxy::AnnotationProxy(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void AnnotationProxy::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("Annotation");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	exports->Set(nameSymbol, proxyConstructor);
}

void AnnotationProxy::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	titanium::KrollProxy::dispose();
}

Handle<FunctionTemplate> AnnotationProxy::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ti/osmdroid/AnnotationProxy");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("Annotation");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		titanium::KrollProxy::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<AnnotationProxy>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate, true);

	// Method bindings --------------------------------------------------------

	Local<ObjectTemplate> prototypeTemplate = proxyTemplate->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = proxyTemplate->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------

	// Dynamic properties -----------------------------------------------------

	// Accessors --------------------------------------------------------------
	instanceTemplate->SetAccessor(
		String::NewSymbol("animate"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getAnimate", titanium::Proxy::getProperty, String::NewSymbol("animate"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setAnimate", titanium::Proxy::onPropertyChanged, String::NewSymbol("animate"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("image"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getImage", titanium::Proxy::getProperty, String::NewSymbol("image"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setImage", titanium::Proxy::onPropertyChanged, String::NewSymbol("image"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("leftButton"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getLeftButton", titanium::Proxy::getProperty, String::NewSymbol("leftButton"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setLeftButton", titanium::Proxy::onPropertyChanged, String::NewSymbol("leftButton"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("leftView"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getLeftView", titanium::Proxy::getProperty, String::NewSymbol("leftView"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setLeftView", titanium::Proxy::onPropertyChanged, String::NewSymbol("leftView"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("pinImage"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getPinImage", titanium::Proxy::getProperty, String::NewSymbol("pinImage"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setPinImage", titanium::Proxy::onPropertyChanged, String::NewSymbol("pinImage"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("pincolor"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getPincolor", titanium::Proxy::getProperty, String::NewSymbol("pincolor"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setPincolor", titanium::Proxy::onPropertyChanged, String::NewSymbol("pincolor"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("rightImage"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getRightImage", titanium::Proxy::getProperty, String::NewSymbol("rightImage"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setRightImage", titanium::Proxy::onPropertyChanged, String::NewSymbol("rightImage"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("rightView"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getRightView", titanium::Proxy::getProperty, String::NewSymbol("rightView"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setRightView", titanium::Proxy::onPropertyChanged, String::NewSymbol("rightView"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("rightButton"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getRightButton", titanium::Proxy::getProperty, String::NewSymbol("rightButton"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setRightButton", titanium::Proxy::onPropertyChanged, String::NewSymbol("rightButton"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("subtitle"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getSubtitle", titanium::Proxy::getProperty, String::NewSymbol("subtitle"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setSubtitle", titanium::Proxy::onPropertyChanged, String::NewSymbol("subtitle"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("subtitleid"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getSubtitleid", titanium::Proxy::getProperty, String::NewSymbol("subtitleid"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setSubtitleid", titanium::Proxy::onPropertyChanged, String::NewSymbol("subtitleid"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("title"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getTitle", titanium::Proxy::getProperty, String::NewSymbol("title"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setTitle", titanium::Proxy::onPropertyChanged, String::NewSymbol("title"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("titleid"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getTitleid", titanium::Proxy::getProperty, String::NewSymbol("titleid"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setTitleid", titanium::Proxy::onPropertyChanged, String::NewSymbol("titleid"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("latitude"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getLatitude", titanium::Proxy::getProperty, String::NewSymbol("latitude"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setLatitude", titanium::Proxy::onPropertyChanged, String::NewSymbol("latitude"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("longitude"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getLongitude", titanium::Proxy::getProperty, String::NewSymbol("longitude"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setLongitude", titanium::Proxy::onPropertyChanged, String::NewSymbol("longitude"));

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------

// Dynamic property accessors -------------------------------------------------


			} // namespace tiosmdroid
		} // osmdroid
		} // ti
