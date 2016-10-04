/**
 * Copyright (c) 2015, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
/** @generated */

#include "Ast.h"
#include "AstVisitor.h"

namespace facebook {
namespace graphql {
namespace ast {

void Document::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitDocument(*this)) {

    { for (const auto &x : *definitions_) { x->accept(visitor); } }
  }
  visitor->endVisitDocument(*this);
}

void OperationDefinition::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitOperationDefinition(*this)) {

    if (name_) { name_->accept(visitor); }
    if (variableDefinitions_) { for (const auto &x : *variableDefinitions_) { x->accept(visitor); } }
    if (directives_) { for (const auto &x : *directives_) { x->accept(visitor); } }
    selectionSet_->accept(visitor);
  }
  visitor->endVisitOperationDefinition(*this);
}

void VariableDefinition::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitVariableDefinition(*this)) {

    variable_->accept(visitor);
    type_->accept(visitor);
    if (defaultValue_) { defaultValue_->accept(visitor); }
  }
  visitor->endVisitVariableDefinition(*this);
}

void SelectionSet::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitSelectionSet(*this)) {

    { for (const auto &x : *selections_) { x->accept(visitor); } }
  }
  visitor->endVisitSelectionSet(*this);
}

void Field::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitField(*this)) {

    if (alias_) { alias_->accept(visitor); }
    name_->accept(visitor);
    if (arguments_) { for (const auto &x : *arguments_) { x->accept(visitor); } }
    if (directives_) { for (const auto &x : *directives_) { x->accept(visitor); } }
    if (selectionSet_) { selectionSet_->accept(visitor); }
  }
  visitor->endVisitField(*this);
}

void Argument::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitArgument(*this)) {

    name_->accept(visitor);
    value_->accept(visitor);
  }
  visitor->endVisitArgument(*this);
}

void FragmentSpread::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitFragmentSpread(*this)) {

    name_->accept(visitor);
    if (directives_) { for (const auto &x : *directives_) { x->accept(visitor); } }
  }
  visitor->endVisitFragmentSpread(*this);
}

void InlineFragment::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitInlineFragment(*this)) {

    if (typeCondition_) { typeCondition_->accept(visitor); }
    if (directives_) { for (const auto &x : *directives_) { x->accept(visitor); } }
    selectionSet_->accept(visitor);
  }
  visitor->endVisitInlineFragment(*this);
}

void FragmentDefinition::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitFragmentDefinition(*this)) {

    name_->accept(visitor);
    typeCondition_->accept(visitor);
    if (directives_) { for (const auto &x : *directives_) { x->accept(visitor); } }
    selectionSet_->accept(visitor);
  }
  visitor->endVisitFragmentDefinition(*this);
}

void Variable::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitVariable(*this)) {

    name_->accept(visitor);
  }
  visitor->endVisitVariable(*this);
}

void IntValue::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitIntValue(*this)) {

  }
  visitor->endVisitIntValue(*this);
}

void FloatValue::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitFloatValue(*this)) {

  }
  visitor->endVisitFloatValue(*this);
}

void StringValue::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitStringValue(*this)) {

  }
  visitor->endVisitStringValue(*this);
}

void BooleanValue::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitBooleanValue(*this)) {

  }
  visitor->endVisitBooleanValue(*this);
}

void EnumValue::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitEnumValue(*this)) {

  }
  visitor->endVisitEnumValue(*this);
}

void ListValue::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitListValue(*this)) {

    { for (const auto &x : *values_) { x->accept(visitor); } }
  }
  visitor->endVisitListValue(*this);
}

void ObjectValue::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitObjectValue(*this)) {

    { for (const auto &x : *fields_) { x->accept(visitor); } }
  }
  visitor->endVisitObjectValue(*this);
}

void ObjectField::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitObjectField(*this)) {

    name_->accept(visitor);
    value_->accept(visitor);
  }
  visitor->endVisitObjectField(*this);
}

void Directive::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitDirective(*this)) {

    name_->accept(visitor);
    if (arguments_) { for (const auto &x : *arguments_) { x->accept(visitor); } }
  }
  visitor->endVisitDirective(*this);
}

void NamedType::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitNamedType(*this)) {

    name_->accept(visitor);
  }
  visitor->endVisitNamedType(*this);
}

void ListType::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitListType(*this)) {

    type_->accept(visitor);
  }
  visitor->endVisitListType(*this);
}

void NonNullType::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitNonNullType(*this)) {

    type_->accept(visitor);
  }
  visitor->endVisitNonNullType(*this);
}

void Name::accept(visitor::AstVisitor *visitor) {
  if (visitor->visitName(*this)) {

  }
  visitor->endVisitName(*this);
}

}
}
}
