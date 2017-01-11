#' Dump GraphQL Queries to JSON
#'
#' Parses GraphQL queries and exports the AST in JSON format.
#'
#' @export
#' @useDynLib graphql
#' @rdname graphql
#' @aliases graphql
#' @importFrom Rcpp sourceCpp
#' @importFrom jsonlite toJSON
#' @param input a string with graphql syntax
#' @examples graphql2json("{ field(complex: { a: { b: [ $var ] } }) }")
graphql2json <- function(input){
  stopifnot(is.character(input))
  input <- paste(input, collapse = "\n")
  json <- dump_json_ast(input)
  structure(json, class = "json")
}

#' Dump All GraphQL to JSON
#'
#' Parses GraphQL queries and schema definitions and exports the AST in JSON format.
#'
#' @export
#' @useDynLib graphql
#' @rdname graphql_schema
#' @aliases graphql_schema
#' @importFrom Rcpp sourceCpp
#' @importFrom jsonlite toJSON
#' @param input a string with graphql syntax
#' @examples graphql2json("schema { query: QueryType }")
schema2json <- function(input){
  stopifnot(is.character(input))
  input <- paste(input, collapse = "\n")
  json <- dump_schema_json_ast(input)
  structure(json, class = "json")
}
