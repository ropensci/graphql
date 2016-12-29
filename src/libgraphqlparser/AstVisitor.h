/**
 * Copyright (c) 2016, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
/** @generated */

#pragma once

#include "Ast.h"

namespace facebook {
namespace graphql {
namespace ast {
namespace visitor {

class AstVisitor {
public:
  virtual ~AstVisitor() {}

  virtual bool visitDocument(const Document &document) { return true; }
  virtual void endVisitDocument(const Document &document) { }

  virtual bool visitOperationDefinition(const OperationDefinition &operationDefinition) { return true; }
  virtual void endVisitOperationDefinition(const OperationDefinition &operationDefinition) { }

  virtual bool visitVariableDefinition(const VariableDefinition &variableDefinition) { return true; }
  virtual void endVisitVariableDefinition(const VariableDefinition &variableDefinition) { }

  virtual bool visitSelectionSet(const SelectionSet &selectionSet) { return true; }
  virtual void endVisitSelectionSet(const SelectionSet &selectionSet) { }

  virtual bool visitField(const Field &field) { return true; }
  virtual void endVisitField(const Field &field) { }

  virtual bool visitArgument(const Argument &argument) { return true; }
  virtual void endVisitArgument(const Argument &argument) { }

  virtual bool visitFragmentSpread(const FragmentSpread &fragmentSpread) { return true; }
  virtual void endVisitFragmentSpread(const FragmentSpread &fragmentSpread) { }

  virtual bool visitInlineFragment(const InlineFragment &inlineFragment) { return true; }
  virtual void endVisitInlineFragment(const InlineFragment &inlineFragment) { }

  virtual bool visitFragmentDefinition(const FragmentDefinition &fragmentDefinition) { return true; }
  virtual void endVisitFragmentDefinition(const FragmentDefinition &fragmentDefinition) { }

  virtual bool visitVariable(const Variable &variable) { return true; }
  virtual void endVisitVariable(const Variable &variable) { }

  virtual bool visitIntValue(const IntValue &intValue) { return true; }
  virtual void endVisitIntValue(const IntValue &intValue) { }

  virtual bool visitFloatValue(const FloatValue &floatValue) { return true; }
  virtual void endVisitFloatValue(const FloatValue &floatValue) { }

  virtual bool visitStringValue(const StringValue &stringValue) { return true; }
  virtual void endVisitStringValue(const StringValue &stringValue) { }

  virtual bool visitBooleanValue(const BooleanValue &booleanValue) { return true; }
  virtual void endVisitBooleanValue(const BooleanValue &booleanValue) { }

  virtual bool visitNullValue(const NullValue &nullValue) { return true; }
  virtual void endVisitNullValue(const NullValue &nullValue) { }

  virtual bool visitEnumValue(const EnumValue &enumValue) { return true; }
  virtual void endVisitEnumValue(const EnumValue &enumValue) { }

  virtual bool visitListValue(const ListValue &listValue) { return true; }
  virtual void endVisitListValue(const ListValue &listValue) { }

  virtual bool visitObjectValue(const ObjectValue &objectValue) { return true; }
  virtual void endVisitObjectValue(const ObjectValue &objectValue) { }

  virtual bool visitObjectField(const ObjectField &objectField) { return true; }
  virtual void endVisitObjectField(const ObjectField &objectField) { }

  virtual bool visitDirective(const Directive &directive) { return true; }
  virtual void endVisitDirective(const Directive &directive) { }

  virtual bool visitNamedType(const NamedType &namedType) { return true; }
  virtual void endVisitNamedType(const NamedType &namedType) { }

  virtual bool visitListType(const ListType &listType) { return true; }
  virtual void endVisitListType(const ListType &listType) { }

  virtual bool visitNonNullType(const NonNullType &nonNullType) { return true; }
  virtual void endVisitNonNullType(const NonNullType &nonNullType) { }

  virtual bool visitName(const Name &name) { return true; }
  virtual void endVisitName(const Name &name) { }

};

}
}
}
}
