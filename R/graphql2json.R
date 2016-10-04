#' Dump GraphQL to JSON
#'
#' Parses GraphQL and exports the AST in JSON format.
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
