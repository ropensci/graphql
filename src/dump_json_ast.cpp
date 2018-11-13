/**
 * Derived from the example included with the library
 */

#include "AstNode.h"
#include "GraphQLParser.h"
#include "c/GraphQLAstToJSON.h"

#define R_NO_REMAP
#include <Rcpp.h>

// [[Rcpp::export]]
Rcpp::String dump_json_ast(Rcpp::String graph, bool schema) {
  graph.set_encoding(CE_UTF8);
  const char *error;
  auto AST = schema ?
    facebook::graphql::parseStringWithExperimentalSchemaSupport(graph.get_cstring(), &error) :
    facebook::graphql::parseString(graph.get_cstring(), &error);
  if (!AST) {
    char buf[1000];
    strncpy(buf, error, 999);
    free((void*) error);
    throw std::runtime_error(buf);
  }
  const char *json = graphql_ast_to_json((const struct GraphQLAstNode *)AST.get());
  Rcpp::String out(json);
  out.set_encoding(CE_UTF8);
  free((void*) json);
  return out;
}
