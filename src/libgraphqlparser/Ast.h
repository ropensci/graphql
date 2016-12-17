/**
 * Copyright (c) 2015, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
/** @generated */
#pragma once

#include "AstNode.h"

#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace facebook {
namespace graphql {
namespace ast {

// The parser uses strdup to move from yytext to the heap, so we need
// to use free instead of delete.
struct CDeleter {
  void operator()(const char *p) const { free((void *)p); }
};

class Definition;
class Document;
class OperationDefinition;
class VariableDefinition;
class SelectionSet;
class Selection;
class Field;
class Argument;
class FragmentSpread;
class InlineFragment;
class FragmentDefinition;
class Value;
class Variable;
class IntValue;
class FloatValue;
class StringValue;
class BooleanValue;
class NullValue;
class EnumValue;
class ListValue;
class ObjectValue;
class ObjectField;
class Directive;
class Type;
class NamedType;
class ListType;
class NonNullType;
class Name;

class Definition : public Node {
 public:
  explicit Definition(
      const yy::location &location

  )
  : Node(location)

  {}
};

class Document : public Node {
  std::unique_ptr<std::vector<std::unique_ptr<Definition>>> definitions_;
 public:
  explicit Document(
      const yy::location &location,
      std::vector<std::unique_ptr<Definition>> * definitions
  )
  : Node(location),
    definitions_(definitions)
  {}

  ~Document() {}

  Document(const Document&) = delete;
  Document& operator=(const Document&) = delete;

  const std::vector<std::unique_ptr<Definition>>& getDefinitions() const
  { return *definitions_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class OperationDefinition : public Definition {
  std::unique_ptr<const char, CDeleter> operation_;
  std::unique_ptr<Name> name_;
  std::unique_ptr<std::vector<std::unique_ptr<VariableDefinition>>> variableDefinitions_;
  std::unique_ptr<std::vector<std::unique_ptr<Directive>>> directives_;
  std::unique_ptr<SelectionSet> selectionSet_;
 public:
  explicit OperationDefinition(
      const yy::location &location,
      const char * operation,
      Name * name,
      std::vector<std::unique_ptr<VariableDefinition>> * variableDefinitions,
      std::vector<std::unique_ptr<Directive>> * directives,
      SelectionSet * selectionSet
  )
  : Definition(location),
    operation_(operation),
    name_(name),
    variableDefinitions_(variableDefinitions),
    directives_(directives),
    selectionSet_(selectionSet)
  {}

  ~OperationDefinition() {}

  OperationDefinition(const OperationDefinition&) = delete;
  OperationDefinition& operator=(const OperationDefinition&) = delete;

  const char * getOperation() const
  { return operation_.get(); }

  const Name* getName() const
  { return name_.get(); }

  const std::vector<std::unique_ptr<VariableDefinition>>* getVariableDefinitions() const
  { return variableDefinitions_.get(); }

  const std::vector<std::unique_ptr<Directive>>* getDirectives() const
  { return directives_.get(); }

  const SelectionSet& getSelectionSet() const
  { return *selectionSet_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class VariableDefinition : public Node {
  std::unique_ptr<Variable> variable_;
  std::unique_ptr<Type> type_;
  std::unique_ptr<Value> defaultValue_;
 public:
  explicit VariableDefinition(
      const yy::location &location,
      Variable * variable,
      Type * type,
      Value * defaultValue
  )
  : Node(location),
    variable_(variable),
    type_(type),
    defaultValue_(defaultValue)
  {}

  ~VariableDefinition() {}

  VariableDefinition(const VariableDefinition&) = delete;
  VariableDefinition& operator=(const VariableDefinition&) = delete;

  const Variable& getVariable() const
  { return *variable_; }

  const Type& getType() const
  { return *type_; }

  const Value* getDefaultValue() const
  { return defaultValue_.get(); }

  void accept(visitor::AstVisitor *visitor) override;
};


class SelectionSet : public Node {
  std::unique_ptr<std::vector<std::unique_ptr<Selection>>> selections_;
 public:
  explicit SelectionSet(
      const yy::location &location,
      std::vector<std::unique_ptr<Selection>> * selections
  )
  : Node(location),
    selections_(selections)
  {}

  ~SelectionSet() {}

  SelectionSet(const SelectionSet&) = delete;
  SelectionSet& operator=(const SelectionSet&) = delete;

  const std::vector<std::unique_ptr<Selection>>& getSelections() const
  { return *selections_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class Selection : public Node {
 public:
  explicit Selection(
      const yy::location &location

  )
  : Node(location)

  {}
};

class Field : public Selection {
  std::unique_ptr<Name> alias_;
  std::unique_ptr<Name> name_;
  std::unique_ptr<std::vector<std::unique_ptr<Argument>>> arguments_;
  std::unique_ptr<std::vector<std::unique_ptr<Directive>>> directives_;
  std::unique_ptr<SelectionSet> selectionSet_;
 public:
  explicit Field(
      const yy::location &location,
      Name * alias,
      Name * name,
      std::vector<std::unique_ptr<Argument>> * arguments,
      std::vector<std::unique_ptr<Directive>> * directives,
      SelectionSet * selectionSet
  )
  : Selection(location),
    alias_(alias),
    name_(name),
    arguments_(arguments),
    directives_(directives),
    selectionSet_(selectionSet)
  {}

  ~Field() {}

  Field(const Field&) = delete;
  Field& operator=(const Field&) = delete;

  const Name* getAlias() const
  { return alias_.get(); }

  const Name& getName() const
  { return *name_; }

  const std::vector<std::unique_ptr<Argument>>* getArguments() const
  { return arguments_.get(); }

  const std::vector<std::unique_ptr<Directive>>* getDirectives() const
  { return directives_.get(); }

  const SelectionSet* getSelectionSet() const
  { return selectionSet_.get(); }

  void accept(visitor::AstVisitor *visitor) override;
};


class Argument : public Node {
  std::unique_ptr<Name> name_;
  std::unique_ptr<Value> value_;
 public:
  explicit Argument(
      const yy::location &location,
      Name * name,
      Value * value
  )
  : Node(location),
    name_(name),
    value_(value)
  {}

  ~Argument() {}

  Argument(const Argument&) = delete;
  Argument& operator=(const Argument&) = delete;

  const Name& getName() const
  { return *name_; }

  const Value& getValue() const
  { return *value_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class FragmentSpread : public Selection {
  std::unique_ptr<Name> name_;
  std::unique_ptr<std::vector<std::unique_ptr<Directive>>> directives_;
 public:
  explicit FragmentSpread(
      const yy::location &location,
      Name * name,
      std::vector<std::unique_ptr<Directive>> * directives
  )
  : Selection(location),
    name_(name),
    directives_(directives)
  {}

  ~FragmentSpread() {}

  FragmentSpread(const FragmentSpread&) = delete;
  FragmentSpread& operator=(const FragmentSpread&) = delete;

  const Name& getName() const
  { return *name_; }

  const std::vector<std::unique_ptr<Directive>>* getDirectives() const
  { return directives_.get(); }

  void accept(visitor::AstVisitor *visitor) override;
};


class InlineFragment : public Selection {
  std::unique_ptr<NamedType> typeCondition_;
  std::unique_ptr<std::vector<std::unique_ptr<Directive>>> directives_;
  std::unique_ptr<SelectionSet> selectionSet_;
 public:
  explicit InlineFragment(
      const yy::location &location,
      NamedType * typeCondition,
      std::vector<std::unique_ptr<Directive>> * directives,
      SelectionSet * selectionSet
  )
  : Selection(location),
    typeCondition_(typeCondition),
    directives_(directives),
    selectionSet_(selectionSet)
  {}

  ~InlineFragment() {}

  InlineFragment(const InlineFragment&) = delete;
  InlineFragment& operator=(const InlineFragment&) = delete;

  const NamedType* getTypeCondition() const
  { return typeCondition_.get(); }

  const std::vector<std::unique_ptr<Directive>>* getDirectives() const
  { return directives_.get(); }

  const SelectionSet& getSelectionSet() const
  { return *selectionSet_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class FragmentDefinition : public Definition {
  std::unique_ptr<Name> name_;
  std::unique_ptr<NamedType> typeCondition_;
  std::unique_ptr<std::vector<std::unique_ptr<Directive>>> directives_;
  std::unique_ptr<SelectionSet> selectionSet_;
 public:
  explicit FragmentDefinition(
      const yy::location &location,
      Name * name,
      NamedType * typeCondition,
      std::vector<std::unique_ptr<Directive>> * directives,
      SelectionSet * selectionSet
  )
  : Definition(location),
    name_(name),
    typeCondition_(typeCondition),
    directives_(directives),
    selectionSet_(selectionSet)
  {}

  ~FragmentDefinition() {}

  FragmentDefinition(const FragmentDefinition&) = delete;
  FragmentDefinition& operator=(const FragmentDefinition&) = delete;

  const Name& getName() const
  { return *name_; }

  const NamedType& getTypeCondition() const
  { return *typeCondition_; }

  const std::vector<std::unique_ptr<Directive>>* getDirectives() const
  { return directives_.get(); }

  const SelectionSet& getSelectionSet() const
  { return *selectionSet_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class Value : public Node {
 public:
  explicit Value(
      const yy::location &location

  )
  : Node(location)

  {}
};

class Variable : public Value {
  std::unique_ptr<Name> name_;
 public:
  explicit Variable(
      const yy::location &location,
      Name * name
  )
  : Value(location),
    name_(name)
  {}

  ~Variable() {}

  Variable(const Variable&) = delete;
  Variable& operator=(const Variable&) = delete;

  const Name& getName() const
  { return *name_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class IntValue : public Value {
  std::unique_ptr<const char, CDeleter> value_;
 public:
  explicit IntValue(
      const yy::location &location,
      const char * value
  )
  : Value(location),
    value_(value)
  {}

  ~IntValue() {}

  IntValue(const IntValue&) = delete;
  IntValue& operator=(const IntValue&) = delete;

  const char * getValue() const
  { return value_.get(); }

  void accept(visitor::AstVisitor *visitor) override;
};


class FloatValue : public Value {
  std::unique_ptr<const char, CDeleter> value_;
 public:
  explicit FloatValue(
      const yy::location &location,
      const char * value
  )
  : Value(location),
    value_(value)
  {}

  ~FloatValue() {}

  FloatValue(const FloatValue&) = delete;
  FloatValue& operator=(const FloatValue&) = delete;

  const char * getValue() const
  { return value_.get(); }

  void accept(visitor::AstVisitor *visitor) override;
};


class StringValue : public Value {
  std::unique_ptr<const char, CDeleter> value_;
 public:
  explicit StringValue(
      const yy::location &location,
      const char * value
  )
  : Value(location),
    value_(value)
  {}

  ~StringValue() {}

  StringValue(const StringValue&) = delete;
  StringValue& operator=(const StringValue&) = delete;

  const char * getValue() const
  { return value_.get(); }

  void accept(visitor::AstVisitor *visitor) override;
};


class BooleanValue : public Value {
  bool value_;
 public:
  explicit BooleanValue(
      const yy::location &location,
      bool value
  )
  : Value(location),
    value_(value)
  {}

  ~BooleanValue() {}

  BooleanValue(const BooleanValue&) = delete;
  BooleanValue& operator=(const BooleanValue&) = delete;

  bool getValue() const
  { return value_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class NullValue : public Value {
 public:
  explicit NullValue(
      const yy::location &location

  )
  : Value(location)

  {}

  ~NullValue() {}

  NullValue(const NullValue&) = delete;
  NullValue& operator=(const NullValue&) = delete;

  void accept(visitor::AstVisitor *visitor) override;
};


class EnumValue : public Value {
  std::unique_ptr<const char, CDeleter> value_;
 public:
  explicit EnumValue(
      const yy::location &location,
      const char * value
  )
  : Value(location),
    value_(value)
  {}

  ~EnumValue() {}

  EnumValue(const EnumValue&) = delete;
  EnumValue& operator=(const EnumValue&) = delete;

  const char * getValue() const
  { return value_.get(); }

  void accept(visitor::AstVisitor *visitor) override;
};


class ListValue : public Value {
  std::unique_ptr<std::vector<std::unique_ptr<Value>>> values_;
 public:
  explicit ListValue(
      const yy::location &location,
      std::vector<std::unique_ptr<Value>> * values
  )
  : Value(location),
    values_(values)
  {}

  ~ListValue() {}

  ListValue(const ListValue&) = delete;
  ListValue& operator=(const ListValue&) = delete;

  const std::vector<std::unique_ptr<Value>>& getValues() const
  { return *values_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class ObjectValue : public Value {
  std::unique_ptr<std::vector<std::unique_ptr<ObjectField>>> fields_;
 public:
  explicit ObjectValue(
      const yy::location &location,
      std::vector<std::unique_ptr<ObjectField>> * fields
  )
  : Value(location),
    fields_(fields)
  {}

  ~ObjectValue() {}

  ObjectValue(const ObjectValue&) = delete;
  ObjectValue& operator=(const ObjectValue&) = delete;

  const std::vector<std::unique_ptr<ObjectField>>& getFields() const
  { return *fields_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class ObjectField : public Node {
  std::unique_ptr<Name> name_;
  std::unique_ptr<Value> value_;
 public:
  explicit ObjectField(
      const yy::location &location,
      Name * name,
      Value * value
  )
  : Node(location),
    name_(name),
    value_(value)
  {}

  ~ObjectField() {}

  ObjectField(const ObjectField&) = delete;
  ObjectField& operator=(const ObjectField&) = delete;

  const Name& getName() const
  { return *name_; }

  const Value& getValue() const
  { return *value_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class Directive : public Node {
  std::unique_ptr<Name> name_;
  std::unique_ptr<std::vector<std::unique_ptr<Argument>>> arguments_;
 public:
  explicit Directive(
      const yy::location &location,
      Name * name,
      std::vector<std::unique_ptr<Argument>> * arguments
  )
  : Node(location),
    name_(name),
    arguments_(arguments)
  {}

  ~Directive() {}

  Directive(const Directive&) = delete;
  Directive& operator=(const Directive&) = delete;

  const Name& getName() const
  { return *name_; }

  const std::vector<std::unique_ptr<Argument>>* getArguments() const
  { return arguments_.get(); }

  void accept(visitor::AstVisitor *visitor) override;
};


class Type : public Node {
 public:
  explicit Type(
      const yy::location &location

  )
  : Node(location)

  {}
};

class NamedType : public Type {
  std::unique_ptr<Name> name_;
 public:
  explicit NamedType(
      const yy::location &location,
      Name * name
  )
  : Type(location),
    name_(name)
  {}

  ~NamedType() {}

  NamedType(const NamedType&) = delete;
  NamedType& operator=(const NamedType&) = delete;

  const Name& getName() const
  { return *name_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class ListType : public Type {
  std::unique_ptr<Type> type_;
 public:
  explicit ListType(
      const yy::location &location,
      Type * type
  )
  : Type(location),
    type_(type)
  {}

  ~ListType() {}

  ListType(const ListType&) = delete;
  ListType& operator=(const ListType&) = delete;

  const Type& getType() const
  { return *type_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class NonNullType : public Type {
  std::unique_ptr<Type> type_;
 public:
  explicit NonNullType(
      const yy::location &location,
      Type * type
  )
  : Type(location),
    type_(type)
  {}

  ~NonNullType() {}

  NonNullType(const NonNullType&) = delete;
  NonNullType& operator=(const NonNullType&) = delete;

  const Type& getType() const
  { return *type_; }

  void accept(visitor::AstVisitor *visitor) override;
};


class Name : public Node {
  std::unique_ptr<const char, CDeleter> value_;
 public:
  explicit Name(
      const yy::location &location,
      const char * value
  )
  : Node(location),
    value_(value)
  {}

  ~Name() {}

  Name(const Name&) = delete;
  Name& operator=(const Name&) = delete;

  const char * getValue() const
  { return value_.get(); }

  void accept(visitor::AstVisitor *visitor) override;
};



}
}
}
