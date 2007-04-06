// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CoordinateSystemNode>
#include <osg/CopyOp>
#include <osg/Matrixd>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/Vec3d>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::CoordinateSystemNode)
	I_BaseType(osg::Group);
	I_Constructor0(____CoordinateSystemNode,
	               "",
	               "");
	I_Constructor2(IN, const std::string &, format, IN, const std::string &, cs,
	               ____CoordinateSystemNode__C5_std_string_R1__C5_std_string_R1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::CoordinateSystemNode &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____CoordinateSystemNode__C5_CoordinateSystemNode_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_Method1(void, set, IN, const osg::CoordinateSystemNode &, csn,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_CoordinateSystemNode_R1,
	          "Set the coordinate system node up by copy the format, coordinate system string, and ellipsoid model of another coordinate system node. ",
	          "");
	I_Method1(void, setFormat, IN, const std::string &, format,
	          Properties::NON_VIRTUAL,
	          __void__setFormat__C5_std_string_R1,
	          "Set the coordinate system format string. ",
	          "Typical values would be WKT, PROJ4, USGS etc. ");
	I_Method0(const std::string &, getFormat,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getFormat,
	          "Get the coordinate system format string. ",
	          "");
	I_Method1(void, setCoordinateSystem, IN, const std::string &, cs,
	          Properties::NON_VIRTUAL,
	          __void__setCoordinateSystem__C5_std_string_R1,
	          "Set the CoordinateSystem reference string, should be stored in a form consistent with the Format. ",
	          "");
	I_Method0(const std::string &, getCoordinateSystem,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getCoordinateSystem,
	          "Get the CoordinateSystem reference string. ",
	          "");
	I_Method1(void, setEllipsoidModel, IN, osg::EllipsoidModel *, ellipsode,
	          Properties::NON_VIRTUAL,
	          __void__setEllipsoidModel__EllipsoidModel_P1,
	          "Set EllipsoidModel to describe the model used to map lat, long and height into geocentric XYZ and back. ",
	          "");
	I_Method0(osg::EllipsoidModel *, getEllipsoidModel,
	          Properties::NON_VIRTUAL,
	          __EllipsoidModel_P1__getEllipsoidModel,
	          "Get the EllipsoidModel. ",
	          "");
	I_Method0(const osg::EllipsoidModel *, getEllipsoidModel,
	          Properties::NON_VIRTUAL,
	          __C5_EllipsoidModel_P1__getEllipsoidModel,
	          "Get the const EllipsoidModel. ",
	          "");
	I_Method1(osg::CoordinateFrame, computeLocalCoordinateFrame, IN, const osg::Vec3d &, position,
	          Properties::NON_VIRTUAL,
	          __CoordinateFrame__computeLocalCoordinateFrame__C5_Vec3d_R1,
	          "Compute the local coordinate frame for specified point. ",
	          "");
	I_Method1(osg::Vec3d, computeLocalUpVector, IN, const osg::Vec3d &, position,
	          Properties::NON_VIRTUAL,
	          __osg_Vec3d__computeLocalUpVector__C5_Vec3d_R1,
	          "Compute the local coordinate frame for specified point. ",
	          "");
	I_SimpleProperty(const std::string &, CoordinateSystem, 
	                 __C5_std_string_R1__getCoordinateSystem, 
	                 __void__setCoordinateSystem__C5_std_string_R1);
	I_SimpleProperty(osg::EllipsoidModel *, EllipsoidModel, 
	                 __EllipsoidModel_P1__getEllipsoidModel, 
	                 __void__setEllipsoidModel__EllipsoidModel_P1);
	I_SimpleProperty(const std::string &, Format, 
	                 __C5_std_string_R1__getFormat, 
	                 __void__setFormat__C5_std_string_R1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::EllipsoidModel)
	I_BaseType(osg::Object);
	I_ConstructorWithDefaults2(IN, double, radiusEquator, osg::WGS_84_RADIUS_EQUATOR, IN, double, radiusPolar, osg::WGS_84_RADIUS_POLAR,
	                           ____EllipsoidModel__double__double,
	                           "WGS_84 is a common representation of the earth's spheroid. ",
	                           "");
	I_ConstructorWithDefaults2(IN, const osg::EllipsoidModel &, et, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____EllipsoidModel__C5_EllipsoidModel_R1__C5_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, setRadiusEquator, IN, double, radius,
	          Properties::NON_VIRTUAL,
	          __void__setRadiusEquator__double,
	          "",
	          "");
	I_Method0(double, getRadiusEquator,
	          Properties::NON_VIRTUAL,
	          __double__getRadiusEquator,
	          "",
	          "");
	I_Method1(void, setRadiusPolar, IN, double, radius,
	          Properties::NON_VIRTUAL,
	          __void__setRadiusPolar__double,
	          "",
	          "");
	I_Method0(double, getRadiusPolar,
	          Properties::NON_VIRTUAL,
	          __double__getRadiusPolar,
	          "",
	          "");
	I_Method6(void, convertLatLongHeightToXYZ, IN, double, latitude, IN, double, longitude, IN, double, height, IN, double &, X, IN, double &, Y, IN, double &, Z,
	          Properties::NON_VIRTUAL,
	          __void__convertLatLongHeightToXYZ__double__double__double__double_R1__double_R1__double_R1,
	          "",
	          "");
	I_Method6(void, convertXYZToLatLongHeight, IN, double, X, IN, double, Y, IN, double, Z, IN, double &, latitude, IN, double &, longitude, IN, double &, height,
	          Properties::NON_VIRTUAL,
	          __void__convertXYZToLatLongHeight__double__double__double__double_R1__double_R1__double_R1,
	          "",
	          "");
	I_Method4(void, computeLocalToWorldTransformFromLatLongHeight, IN, double, latitude, IN, double, longitude, IN, double, height, IN, osg::Matrixd &, localToWorld,
	          Properties::NON_VIRTUAL,
	          __void__computeLocalToWorldTransformFromLatLongHeight__double__double__double__osg_Matrixd_R1,
	          "",
	          "");
	I_Method4(void, computeLocalToWorldTransformFromXYZ, IN, double, X, IN, double, Y, IN, double, Z, IN, osg::Matrixd &, localToWorld,
	          Properties::NON_VIRTUAL,
	          __void__computeLocalToWorldTransformFromXYZ__double__double__double__osg_Matrixd_R1,
	          "",
	          "");
	I_Method3(osg::Vec3d, computeLocalUpVector, IN, double, X, IN, double, Y, IN, double, Z,
	          Properties::NON_VIRTUAL,
	          __osg_Vec3d__computeLocalUpVector__double__double__double,
	          "",
	          "");
	I_ProtectedMethod0(void, computeCoefficients,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__computeCoefficients,
	                   "",
	                   "");
	I_SimpleProperty(double, RadiusEquator, 
	                 __double__getRadiusEquator, 
	                 __void__setRadiusEquator__double);
	I_SimpleProperty(double, RadiusPolar, 
	                 __double__getRadiusPolar, 
	                 __void__setRadiusPolar__double);
END_REFLECTOR

TYPE_NAME_ALIAS(osg::Matrixd, osg::CoordinateFrame)

