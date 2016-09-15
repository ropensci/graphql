#' Dump GraphQL to JSON
#'
#' Parses GraphQL and exports as JSON
#'
#' @export
#' @useDynLib graphql
#' @importFrom Rcpp sourceCpp
graphql2json <- function(string){
  dump_json_ast(string)
}
