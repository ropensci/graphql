context("kitchen_sink_schema")

test_that("kitchen sink schema parses", {

  kitchen_schema_txt <- paste(readLines("schema-kitchen-sink.graphql"), collapse = "\n")

  json_txt <- graphql2json(kitchen_schema_txt)

  result <- jsonlite::fromJSON(json_txt)

  expect_true(is.list(result))

})
