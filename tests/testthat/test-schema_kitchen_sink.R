context("kitchen_sink_schema")

test_that("kitchen sink schema fails to parse with query only support", {

  kitchen_schema_txt <- paste(readLines("schema-kitchen-sink.graphql"), collapse = "\n")

  expect_error({graphql2json(kitchen_schema_txt, FALSE)}, "schema support disabled")
})


test_that("kitchen sink schema parses", {

  kitchen_schema_txt <- paste(readLines("schema-kitchen-sink.graphql"), collapse = "\n")

  json_txt <- graphql2json(kitchen_schema_txt, TRUE)

  result <- jsonlite::fromJSON(json_txt)

  expect_true(is.list(result))

})
