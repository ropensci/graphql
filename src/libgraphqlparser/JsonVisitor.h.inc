/**
 * Copyright (c) 2016, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
/** @generated */
bool visitDocument(const Document &node) override;
void endVisitDocument(const Document &node) override;

bool visitOperationDefinition(const OperationDefinition &node) override;
void endVisitOperationDefinition(const OperationDefinition &node) override;

bool visitVariableDefinition(const VariableDefinition &node) override;
void endVisitVariableDefinition(const VariableDefinition &node) override;

bool visitSelectionSet(const SelectionSet &node) override;
void endVisitSelectionSet(const SelectionSet &node) override;

bool visitField(const Field &node) override;
void endVisitField(const Field &node) override;

bool visitArgument(const Argument &node) override;
void endVisitArgument(const Argument &node) override;

bool visitFragmentSpread(const FragmentSpread &node) override;
void endVisitFragmentSpread(const FragmentSpread &node) override;

bool visitInlineFragment(const InlineFragment &node) override;
void endVisitInlineFragment(const InlineFragment &node) override;

bool visitFragmentDefinition(const FragmentDefinition &node) override;
void endVisitFragmentDefinition(const FragmentDefinition &node) override;

bool visitVariable(const Variable &node) override;
void endVisitVariable(const Variable &node) override;

void endVisitIntValue(const IntValue &node) override;

void endVisitFloatValue(const FloatValue &node) override;

void endVisitStringValue(const StringValue &node) override;

void endVisitBooleanValue(const BooleanValue &node) override;

void endVisitNullValue(const NullValue &node) override;

void endVisitEnumValue(const EnumValue &node) override;

bool visitListValue(const ListValue &node) override;
void endVisitListValue(const ListValue &node) override;

bool visitObjectValue(const ObjectValue &node) override;
void endVisitObjectValue(const ObjectValue &node) override;

bool visitObjectField(const ObjectField &node) override;
void endVisitObjectField(const ObjectField &node) override;

bool visitDirective(const Directive &node) override;
void endVisitDirective(const Directive &node) override;

bool visitNamedType(const NamedType &node) override;
void endVisitNamedType(const NamedType &node) override;

bool visitListType(const ListType &node) override;
void endVisitListType(const ListType &node) override;

bool visitNonNullType(const NonNullType &node) override;
void endVisitNonNullType(const NonNullType &node) override;

void endVisitName(const Name &node) override;

