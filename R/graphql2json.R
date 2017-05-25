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
#' @param parse_schema boolean to enable schema defintion parsing
#' @examples
#' graphql2json("{ field(complex: { a: { b: [ $var ] } }) }")
#' graphql2json("schema { query: QueryType }", TRUE)
graphql2json <- function(input, parse_schema = FALSE){
  stopifnot(is.character(input))
  input <- paste(input, collapse = "\n")
  json <- dump_json_ast(input, parse_schema)
  structure(json, class = "json")
}
