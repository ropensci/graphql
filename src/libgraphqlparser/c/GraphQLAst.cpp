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
int GraphQLAstSchemaDefinition_get_directives_size(const struct GraphQLAstSchemaDefinition *node) {
  const auto *realNode = (const SchemaDefinition *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
int GraphQLAstSchemaDefinition_get_operation_types_size(const struct GraphQLAstSchemaDefinition *node) {
  const auto *realNode = (const SchemaDefinition *)node;
  return realNode->getOperationTypes().size();
}
const char * GraphQLAstOperationTypeDefinition_get_operation(const struct GraphQLAstOperationTypeDefinition *node) {
  const auto *realNode = (const OperationTypeDefinition *)node;
  return realNode->getOperation();
}
const struct GraphQLAstNamedType * GraphQLAstOperationTypeDefinition_get_type(const struct GraphQLAstOperationTypeDefinition *node) {
  const auto *realNode = (const OperationTypeDefinition *)node;
  return (const struct GraphQLAstNamedType *)&realNode->getType();
}
const struct GraphQLAstName * GraphQLAstScalarTypeDefinition_get_name(const struct GraphQLAstScalarTypeDefinition *node) {
  const auto *realNode = (const ScalarTypeDefinition *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
int GraphQLAstScalarTypeDefinition_get_directives_size(const struct GraphQLAstScalarTypeDefinition *node) {
  const auto *realNode = (const ScalarTypeDefinition *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
const struct GraphQLAstName * GraphQLAstObjectTypeDefinition_get_name(const struct GraphQLAstObjectTypeDefinition *node) {
  const auto *realNode = (const ObjectTypeDefinition *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
int GraphQLAstObjectTypeDefinition_get_interfaces_size(const struct GraphQLAstObjectTypeDefinition *node) {
  const auto *realNode = (const ObjectTypeDefinition *)node;
  return realNode->getInterfaces() ? realNode->getInterfaces()->size() : 0;
}
int GraphQLAstObjectTypeDefinition_get_directives_size(const struct GraphQLAstObjectTypeDefinition *node) {
  const auto *realNode = (const ObjectTypeDefinition *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
int GraphQLAstObjectTypeDefinition_get_fields_size(const struct GraphQLAstObjectTypeDefinition *node) {
  const auto *realNode = (const ObjectTypeDefinition *)node;
  return realNode->getFields().size();
}
const struct GraphQLAstName * GraphQLAstFieldDefinition_get_name(const struct GraphQLAstFieldDefinition *node) {
  const auto *realNode = (const FieldDefinition *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
int GraphQLAstFieldDefinition_get_arguments_size(const struct GraphQLAstFieldDefinition *node) {
  const auto *realNode = (const FieldDefinition *)node;
  return realNode->getArguments() ? realNode->getArguments()->size() : 0;
}
const struct GraphQLAstType * GraphQLAstFieldDefinition_get_type(const struct GraphQLAstFieldDefinition *node) {
  const auto *realNode = (const FieldDefinition *)node;
  return (const struct GraphQLAstType *)&realNode->getType();
}
int GraphQLAstFieldDefinition_get_directives_size(const struct GraphQLAstFieldDefinition *node) {
  const auto *realNode = (const FieldDefinition *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
const struct GraphQLAstName * GraphQLAstInputValueDefinition_get_name(const struct GraphQLAstInputValueDefinition *node) {
  const auto *realNode = (const InputValueDefinition *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
const struct GraphQLAstType * GraphQLAstInputValueDefinition_get_type(const struct GraphQLAstInputValueDefinition *node) {
  const auto *realNode = (const InputValueDefinition *)node;
  return (const struct GraphQLAstType *)&realNode->getType();
}
const struct GraphQLAstValue * GraphQLAstInputValueDefinition_get_default_value(const struct GraphQLAstInputValueDefinition *node) {
  const auto *realNode = (const InputValueDefinition *)node;
  return (const struct GraphQLAstValue *)realNode->getDefaultValue();
}
int GraphQLAstInputValueDefinition_get_directives_size(const struct GraphQLAstInputValueDefinition *node) {
  const auto *realNode = (const InputValueDefinition *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
const struct GraphQLAstName * GraphQLAstInterfaceTypeDefinition_get_name(const struct GraphQLAstInterfaceTypeDefinition *node) {
  const auto *realNode = (const InterfaceTypeDefinition *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
int GraphQLAstInterfaceTypeDefinition_get_directives_size(const struct GraphQLAstInterfaceTypeDefinition *node) {
  const auto *realNode = (const InterfaceTypeDefinition *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
int GraphQLAstInterfaceTypeDefinition_get_fields_size(const struct GraphQLAstInterfaceTypeDefinition *node) {
  const auto *realNode = (const InterfaceTypeDefinition *)node;
  return realNode->getFields().size();
}
const struct GraphQLAstName * GraphQLAstUnionTypeDefinition_get_name(const struct GraphQLAstUnionTypeDefinition *node) {
  const auto *realNode = (const UnionTypeDefinition *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
int GraphQLAstUnionTypeDefinition_get_directives_size(const struct GraphQLAstUnionTypeDefinition *node) {
  const auto *realNode = (const UnionTypeDefinition *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
int GraphQLAstUnionTypeDefinition_get_types_size(const struct GraphQLAstUnionTypeDefinition *node) {
  const auto *realNode = (const UnionTypeDefinition *)node;
  return realNode->getTypes().size();
}
const struct GraphQLAstName * GraphQLAstEnumTypeDefinition_get_name(const struct GraphQLAstEnumTypeDefinition *node) {
  const auto *realNode = (const EnumTypeDefinition *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
int GraphQLAstEnumTypeDefinition_get_directives_size(const struct GraphQLAstEnumTypeDefinition *node) {
  const auto *realNode = (const EnumTypeDefinition *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
int GraphQLAstEnumTypeDefinition_get_values_size(const struct GraphQLAstEnumTypeDefinition *node) {
  const auto *realNode = (const EnumTypeDefinition *)node;
  return realNode->getValues().size();
}
const struct GraphQLAstName * GraphQLAstEnumValueDefinition_get_name(const struct GraphQLAstEnumValueDefinition *node) {
  const auto *realNode = (const EnumValueDefinition *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
int GraphQLAstEnumValueDefinition_get_directives_size(const struct GraphQLAstEnumValueDefinition *node) {
  const auto *realNode = (const EnumValueDefinition *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
const struct GraphQLAstName * GraphQLAstInputObjectTypeDefinition_get_name(const struct GraphQLAstInputObjectTypeDefinition *node) {
  const auto *realNode = (const InputObjectTypeDefinition *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
int GraphQLAstInputObjectTypeDefinition_get_directives_size(const struct GraphQLAstInputObjectTypeDefinition *node) {
  const auto *realNode = (const InputObjectTypeDefinition *)node;
  return realNode->getDirectives() ? realNode->getDirectives()->size() : 0;
}
int GraphQLAstInputObjectTypeDefinition_get_fields_size(const struct GraphQLAstInputObjectTypeDefinition *node) {
  const auto *realNode = (const InputObjectTypeDefinition *)node;
  return realNode->getFields().size();
}
const struct GraphQLAstObjectTypeDefinition * GraphQLAstTypeExtensionDefinition_get_definition(const struct GraphQLAstTypeExtensionDefinition *node) {
  const auto *realNode = (const TypeExtensionDefinition *)node;
  return (const struct GraphQLAstObjectTypeDefinition *)&realNode->getDefinition();
}
const struct GraphQLAstName * GraphQLAstDirectiveDefinition_get_name(const struct GraphQLAstDirectiveDefinition *node) {
  const auto *realNode = (const DirectiveDefinition *)node;
  return (const struct GraphQLAstName *)&realNode->getName();
}
int GraphQLAstDirectiveDefinition_get_arguments_size(const struct GraphQLAstDirectiveDefinition *node) {
  const auto *realNode = (const DirectiveDefinition *)node;
  return realNode->getArguments() ? realNode->getArguments()->size() : 0;
}
int GraphQLAstDirectiveDefinition_get_locations_size(const struct GraphQLAstDirectiveDefinition *node) {
  const auto *realNode = (const DirectiveDefinition *)node;
  return realNode->getLocations().size();
}
