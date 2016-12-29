/**
 * Copyright (c) 2016, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
/** @generated */
bool JsonVisitor::visitDocument(const Document &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitDocument(const Document &node) {
  NodeFieldPrinter fields(*this, "Document", node);
  fields.printPluralField("definitions", node.getDefinitions());

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitOperationDefinition(const OperationDefinition &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitOperationDefinition(const OperationDefinition &node) {
  NodeFieldPrinter fields(*this, "OperationDefinition", node);
  fields.printSingularPrimitiveField("operation", node.getOperation());
  fields.printNullableSingularObjectField("name", node.getName());
  fields.printNullablePluralField("variableDefinitions", node.getVariableDefinitions());
  fields.printNullablePluralField("directives", node.getDirectives());
  fields.printSingularObjectField("selectionSet");

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitVariableDefinition(const VariableDefinition &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitVariableDefinition(const VariableDefinition &node) {
  NodeFieldPrinter fields(*this, "VariableDefinition", node);
  fields.printSingularObjectField("variable");
  fields.printSingularObjectField("type");
  fields.printNullableSingularObjectField("defaultValue", node.getDefaultValue());

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitSelectionSet(const SelectionSet &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitSelectionSet(const SelectionSet &node) {
  NodeFieldPrinter fields(*this, "SelectionSet", node);
  fields.printPluralField("selections", node.getSelections());

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitField(const Field &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitField(const Field &node) {
  NodeFieldPrinter fields(*this, "Field", node);
  fields.printNullableSingularObjectField("alias", node.getAlias());
  fields.printSingularObjectField("name");
  fields.printNullablePluralField("arguments", node.getArguments());
  fields.printNullablePluralField("directives", node.getDirectives());
  fields.printNullableSingularObjectField("selectionSet", node.getSelectionSet());

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitArgument(const Argument &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitArgument(const Argument &node) {
  NodeFieldPrinter fields(*this, "Argument", node);
  fields.printSingularObjectField("name");
  fields.printSingularObjectField("value");

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitFragmentSpread(const FragmentSpread &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitFragmentSpread(const FragmentSpread &node) {
  NodeFieldPrinter fields(*this, "FragmentSpread", node);
  fields.printSingularObjectField("name");
  fields.printNullablePluralField("directives", node.getDirectives());

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitInlineFragment(const InlineFragment &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitInlineFragment(const InlineFragment &node) {
  NodeFieldPrinter fields(*this, "InlineFragment", node);
  fields.printNullableSingularObjectField("typeCondition", node.getTypeCondition());
  fields.printNullablePluralField("directives", node.getDirectives());
  fields.printSingularObjectField("selectionSet");

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitFragmentDefinition(const FragmentDefinition &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitFragmentDefinition(const FragmentDefinition &node) {
  NodeFieldPrinter fields(*this, "FragmentDefinition", node);
  fields.printSingularObjectField("name");
  fields.printSingularObjectField("typeCondition");
  fields.printNullablePluralField("directives", node.getDirectives());
  fields.printSingularObjectField("selectionSet");

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitVariable(const Variable &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitVariable(const Variable &node) {
  NodeFieldPrinter fields(*this, "Variable", node);
  fields.printSingularObjectField("name");

  endVisitNode(fields.finishPrinting());
}

void JsonVisitor::endVisitIntValue(const IntValue &node) {
  NodeFieldPrinter fields(*this, "IntValue", node);
  fields.printSingularPrimitiveField("value", node.getValue());

  printed_.back().emplace_back(fields.finishPrinting());
}

void JsonVisitor::endVisitFloatValue(const FloatValue &node) {
  NodeFieldPrinter fields(*this, "FloatValue", node);
  fields.printSingularPrimitiveField("value", node.getValue());

  printed_.back().emplace_back(fields.finishPrinting());
}

void JsonVisitor::endVisitStringValue(const StringValue &node) {
  NodeFieldPrinter fields(*this, "StringValue", node);
  fields.printSingularPrimitiveField("value", node.getValue());

  printed_.back().emplace_back(fields.finishPrinting());
}

void JsonVisitor::endVisitBooleanValue(const BooleanValue &node) {
  NodeFieldPrinter fields(*this, "BooleanValue", node);
  fields.printSingularBooleanField("value", node.getValue());

  printed_.back().emplace_back(fields.finishPrinting());
}

void JsonVisitor::endVisitNullValue(const NullValue &node) {
  NodeFieldPrinter fields(*this, "NullValue", node);

  printed_.back().emplace_back(fields.finishPrinting());
}

void JsonVisitor::endVisitEnumValue(const EnumValue &node) {
  NodeFieldPrinter fields(*this, "EnumValue", node);
  fields.printSingularPrimitiveField("value", node.getValue());

  printed_.back().emplace_back(fields.finishPrinting());
}

bool JsonVisitor::visitListValue(const ListValue &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitListValue(const ListValue &node) {
  NodeFieldPrinter fields(*this, "ListValue", node);
  fields.printPluralField("values", node.getValues());

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitObjectValue(const ObjectValue &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitObjectValue(const ObjectValue &node) {
  NodeFieldPrinter fields(*this, "ObjectValue", node);
  fields.printPluralField("fields", node.getFields());

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitObjectField(const ObjectField &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitObjectField(const ObjectField &node) {
  NodeFieldPrinter fields(*this, "ObjectField", node);
  fields.printSingularObjectField("name");
  fields.printSingularObjectField("value");

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitDirective(const Directive &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitDirective(const Directive &node) {
  NodeFieldPrinter fields(*this, "Directive", node);
  fields.printSingularObjectField("name");
  fields.printNullablePluralField("arguments", node.getArguments());

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitNamedType(const NamedType &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitNamedType(const NamedType &node) {
  NodeFieldPrinter fields(*this, "NamedType", node);
  fields.printSingularObjectField("name");

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitListType(const ListType &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitListType(const ListType &node) {
  NodeFieldPrinter fields(*this, "ListType", node);
  fields.printSingularObjectField("type");

  endVisitNode(fields.finishPrinting());
}

bool JsonVisitor::visitNonNullType(const NonNullType &node) {
  visitNode();
  return true;
}

void JsonVisitor::endVisitNonNullType(const NonNullType &node) {
  NodeFieldPrinter fields(*this, "NonNullType", node);
  fields.printSingularObjectField("type");

  endVisitNode(fields.finishPrinting());
}

void JsonVisitor::endVisitName(const Name &node) {
  NodeFieldPrinter fields(*this, "Name", node);
  fields.printSingularPrimitiveField("value", node.getValue());

  printed_.back().emplace_back(fields.finishPrinting());
}

