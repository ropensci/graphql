# graphql

> Bindings to the 'libgraphqlparser' C++ library. Parses GraphQL syntax
  and exports the AST in JSON format.

[![Project Status: Active – The project has reached a stable, usable state and is being actively developed.](http://www.repostatus.org/badges/latest/active.svg)](http://www.repostatus.org/#active)
[![CRAN_Status_Badge](http://www.r-pkg.org/badges/version/graphql)](https://cran.r-project.org/package=graphql)
[![CRAN RStudio mirror downloads](http://cranlogs.r-pkg.org/badges/graphql)](https://cran.r-project.org/package=graphql)
[![Github Stars](https://img.shields.io/github/stars/ropensci/graphql.svg?style=social&label=Github)](https://github.com/ropensci/graphql)

## Hello World

Simple example

```r
> graphql2json("schema { query: QueryType }", parse_schema = TRUE)
```
```
{"kind":"Document","loc":{"start": {"line": 1,"column":1}, "end": {"line":1,"column":28}},"definitions":[{"kind":"SchemaDefinition","loc":{"start": {"line": 1,"column":1}, "end": {"line":1,"column":28}},"directives":null,"operationTypes":[{"kind":"OperationTypeDefinition","loc":{"start": {"line": 1,"column":10}, "end": {"line":1,"column":26}},"operation":"query","type":{"kind":"NamedType","loc":{"start": {"line": 1,"column":17}, "end": {"line":1,"column":26}},"name":{"kind":"Name","loc":{"start": {"line": 1,"column":17}, "end": {"line":1,"column":26}},"value":"QueryType"}}}]}]} 
```
