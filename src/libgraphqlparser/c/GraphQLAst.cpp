/**
 * Copyright (c) 2016, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
/** @generated */

#include "GraphQLAst.h"
#include "../Ast.h"

using namespace facebook::graphql::ast;

int GraphQLAstDocument_get_definitions_size(const struct GraphQLAstDocument *node) {
  const auto *realNode = (const Document *)node;
  return realNode->getDefinitions().size();
}
const char * GraphQLAstOperationDefinition_get_operation(const struct GraphQLAstOperationDefinition *node) {
  const auto *realNode = (const OperationDefinition *)node;
  return realNode->getOperation();
}
const struct GraphQLAstName * GraphQLAstOperationDefinition_get_name(const struct GraphQLAstOperationDefinition *node) {
  const auto *realNode = (const OperationDefinition *)node;
  return (const struct GraphQLAstName *)realNode->getName();
}
int GraphQLAstOperationDefinition_get_variable_definitions_size(const struct GraphQLAstOperationDefinition *node) {
  const auto *realNode = (const OperationDefinition *)node;
  return realNode->getVariableDefinitions() ? realNode->getVariableDefinitions()->size() : 0;
}
int GraphQLAstOperationDefinition_get_directives_size(const struct GraphQLAstOperationDefinition *node) {
  const auto *realNode = (const OperationDefinition *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
const struct GraphQLAstSelectionSet * GraphQLAstOperationDefinition_get_selection_set(const struct GraphQLAstOperationDefinition *node) {
  const auto *realNode = (const OperationDefinition *)node;
  return (const struct GraphQLAstSelectionSet *)&realNode->getSelectionSet();
}
const struct GraphQLAstVariable * GraphQLAstVariableDefinition_get_variable(const struct GraphQLAstVariableDefinition *node) {
  const auto *realNode = (const VariableDefinition *)node;
  return (const struct GraphQLAstVariable *)&realNode->getVariable();
}
const struct GraphQLAstType * GraphQLAstVariableDefinition_get_type(const struct GraphQLAstVariableDefinition *node) {
  const auto *realNode = (const VariableDefinition *)node;
  return (const struct GraphQLAstType *)&realNode->getType();
}
const struct GraphQLAstValue * GraphQLAstVariableDefinition_get_default_value(const struct GraphQLAstVariableDefinition *node) {
  const auto *realNode = (const VariableDefinition *)node;
  return (const struct GraphQLAstValue *)realNode->getDefaultValue();
}
int GraphQLAstSelectionSet_get_selections_size(const struct GraphQLAstSelectionSet *node) {
  const auto *realNode = (const SelectionSet *)node;
  return realNode->getSelections().size();
}
const struct GraphQLAstName * GraphQLAstField_get_alias(const struct GraphQLAstField *node) {
  const auto *realNode = (const Field *)node;
  return (const struct GraphQLAstName *)realNode->getAlias();
}
const struct GraphQLAstName * GraphQLAstField_get_name(const struct GraphQLAstField *node) {
  const auto *realNode = (const Field *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
int GraphQLAstField_get_arguments_size(const struct GraphQLAstField *node) {
  const auto *realNode = (const Field *)node;
  return realNode->getArguments() ? realNode->getArguments()->size() : 0;
}
int GraphQLAstField_get_directives_size(const struct GraphQLAstField *node) {
  const auto *realNode = (const Field *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
const struct GraphQLAstSelectionSet * GraphQLAstField_get_selection_set(const struct GraphQLAstField *node) {
  const auto *realNode = (const Field *)node;
  return (const struct GraphQLAstSelectionSet *)realNode->getSelectionSet();
}
const struct GraphQLAstName * GraphQLAstArgument_get_name(const struct GraphQLAstArgument *node) {
  const auto *realNode = (const Argument *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
const struct GraphQLAstValue * GraphQLAstArgument_get_value(const struct GraphQLAstArgument *node) {
  const auto *realNode = (const Argument *)node;
  return (const struct GraphQLAstValue *)&realNode->getValue();
}
const struct GraphQLAstName * GraphQLAstFragmentSpread_get_name(const struct GraphQLAstFragmentSpread *node) {
  const auto *realNode = (const FragmentSpread *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
int GraphQLAstFragmentSpread_get_directives_size(const struct GraphQLAstFragmentSpread *node) {
  const auto *realNode = (const FragmentSpread *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
const struct GraphQLAstNamedType * GraphQLAstInlineFragment_get_type_condition(const struct GraphQLAstInlineFragment *node) {
  const auto *realNode = (const InlineFragment *)node;
  return (const struct GraphQLAstNamedType *)realNode->getTypeCondition();
}
int GraphQLAstInlineFragment_get_directives_size(const struct GraphQLAstInlineFragment *node) {
  const auto *realNode = (const InlineFragment *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
const struct GraphQLAstSelectionSet * GraphQLAstInlineFragment_get_selection_set(const struct GraphQLAstInlineFragment *node) {
  const auto *realNode = (const InlineFragment *)node;
  return (const struct GraphQLAstSelectionSet *)&realNode->getSelectionSet();
}
const struct GraphQLAstName * GraphQLAstFragmentDefinition_get_name(const struct GraphQLAstFragmentDefinition *node) {
  const auto *realNode = (const FragmentDefinition *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
const struct GraphQLAstNamedType * GraphQLAstFragmentDefinition_get_type_condition(const struct GraphQLAstFragmentDefinition *node) {
  const auto *realNode = (const FragmentDefinition *)node;
  return (const struct GraphQLAstNamedType *)&realNode->getTypeCondition();
}
int GraphQLAstFragmentDefinition_get_directives_size(const struct GraphQLAstFragmentDefinition *node) {
  const auto *realNode = (const FragmentDefinition *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
const struct GraphQLAstSelectionSet * GraphQLAstFragmentDefinition_get_selection_set(const struct GraphQLAstFragmentDefinition *node) {
  const auto *realNode = (const FragmentDefinition *)node;
  return (const struct GraphQLAstSelectionSet *)&realNode->getSelectionSet();
}
const struct GraphQLAstName * GraphQLAstVariable_get_name(const struct GraphQLAstVariable *node) {
  const auto *realNode = (const Variable *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
const char * GraphQLAstIntValue_get_value(const struct GraphQLAstIntValue *node) {
  const auto *realNode = (const IntValue *)node;
  return realNode->getValue();
}
const char * GraphQLAstFloatValue_get_value(const struct GraphQLAstFloatValue *node) {
  const auto *realNode = (const FloatValue *)node;
  return realNode->getValue();
}
const char * GraphQLAstStringValue_get_value(const struct GraphQLAstStringValue *node) {
  const auto *realNode = (const StringValue *)node;
  return realNode->getValue();
}
int GraphQLAstBooleanValue_get_value(const struct GraphQLAstBooleanValue *node) {
  const auto *realNode = (const BooleanValue *)node;
  return realNode->getValue();
}
const char * GraphQLAstEnumValue_get_value(const struct GraphQLAstEnumValue *node) {
  const auto *realNode = (const EnumValue *)node;
  return realNode->getValue();
}
int GraphQLAstListValue_get_values_size(const struct GraphQLAstListValue *node) {
  const auto *realNode = (const ListValue *)node;
  return realNode->getValues().size();
}
int GraphQLAstObjectValue_get_fields_size(const struct GraphQLAstObjectValue *node) {
  const auto *realNode = (const ObjectValue *)node;
  return realNode->getFields().size();
}
const struct GraphQLAstName * GraphQLAstObjectField_get_name(const struct GraphQLAstObjectField *node) {
  const auto *realNode = (const ObjectField *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
const struct GraphQLAstValue * GraphQLAstObjectField_get_value(const struct GraphQLAstObjectField *node) {
  const auto *realNode = (const ObjectField *)node;
  return (const struct GraphQLAstValue *)&realNode->getValue();
}
const struct GraphQLAstName * GraphQLAstDirective_get_name(const struct GraphQLAstDirective *node) {
  const auto *realNode = (const Directive *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
int GraphQLAstDirective_get_arguments_size(const struct GraphQLAstDirective *node) {
  const auto *realNode = (const Directive *)node;
  return realNode->getArguments() ? realNode->getArguments()->size() : 0;
}
const struct GraphQLAstName * GraphQLAstNamedType_get_name(const struct GraphQLAstNamedType *node) {
  const auto *realNode = (const NamedType *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
const struct GraphQLAstType * GraphQLAstListType_get_type(const struct GraphQLAstListType *node) {
  const auto *realNode = (const ListType *)node;
  return (const struct GraphQLAstType *)&realNode->getType();
}
const struct GraphQLAstType * GraphQLAstNonNullType_get_type(const struct GraphQLAstNonNullType *node) {
  const auto *realNode = (const NonNullType *)node;
  return (const struct GraphQLAstType *)&realNode->getType();
}
const char * GraphQLAstName_get_value(const struct GraphQLAstName *node) {
  const auto *realNode = (const Name *)node;
  return realNode->getValue();
}
